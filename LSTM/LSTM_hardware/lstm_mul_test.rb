require 'std/memory.rb'
require 'std/linear.rb'
require "std/fixpoint.rb"
require_relative "network_constructor.rb"
require_relative "network_loader.rb"
require_relative "quantize.rb"

system :lstm_mul_test do
    # データ型の宣言
    integer_width = 4 # 整数部のビット幅
    decimal_width = 4 # 実数部のビット幅
    address_width = 4 # lutのアドレスのビット幅
    typ = signed[integer_width, decimal_width] # データ型
    tanh = proc{ |x| Math.tanh(x) }
    sigmoid = proc{ |x| 1 / (1 + Math.exp(-x)) }
    linear = proc { |x| x }

    # ニューラルネットワークの構造
    columns = [2, 2, 1]
    func_sig = [sigmoid, linear] # 活性化関数

    func_tanh = [tanh, linear]   # 活性化関数

    parameters_sig = load_network("xor1.json")
    parameters_tanh = load_network("xor.json")

    biases_sig = parameters_sig[:biases]
    weights_sig = parameters_sig[:weights]

    biases_tanh = parameters_tanh[:biases]
    weights_tanh = parameters_tanh[:weights]

    inputs_x = [1, 0]
    inputs_h = [0, 1]

    # puts "inputs : #{inputs}"

    #---------------内部信号の宣言---------------------
    inner :clk,   # clock
          :rst,   # reset
          :req,   # request
          :fill   # 入力値のメモリへの書き込み

    inner :ack_fill_sig, # 書き込みのack:tanh
          :ack_network_sig, # ニューラルネット:ワークのack:tanh

          :ack_fill_tanh,
          :ack_network_tanh,

          :req_mul,
          :ack_mul

    inputs_x = quantize(inputs_x, typ, decimal_width)
    inputs_h = quantize(inputs_h, typ, decimal_width)

    # NOTE: 入力のメモリに関して
    # network_constructorにはbranchを渡すので、mem_romからmem_dualやmem_fileに変更できる。
    # ただし、branchはrincのみ。つまり、rincのbranchを持つメモリなら何でもOK。
    mem_rom(typ, columns[0], clk, rst, inputs_x, rinc: :rst, winc: :rst).(:rom_inputs_sig) # 入力値を格納するrom

    mem_file(typ, columns[-1], clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:ram_outputs_sig) # 出力値を格納するram

    mem_rom(typ, columns[0], clk, rst, inputs_h, rinc: :rst, winc: :rst).(:rom_inputs_tanh) # 入力値を格納するrom

    mem_file(typ, columns[-1], clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:ram_outputs_tanh) # 出力値を格納するram

    mem_file(typ, columns[-1], clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:ram_outputs_mul)

    reader_inputs_sig = rom_inputs_sig.branch(:rinc) # 入力値の読み出し用branch
    writer_outputs_sig = ram_outputs_sig.branch(:winc) # 出力値の書き込み用branch

    reader_inputs_tanh = rom_inputs_tanh.branch(:rinc) # 入力値の読み出し用branch
    writer_outputs_tanh = ram_outputs_tanh.branch(:winc) # 出力値の書き込み用branch

    mul_inputs_sig = ram_outputs_sig.branch(:anum)
    mul_inputs_tanh = ram_outputs_tanh.branch(:anum)
    mul_outputs = ram_outputs_mul.branch(:anum)

    puts mul_inputs_sig.class
    puts mul_inputs_sig.methods
    sig_outputs = columns[-1].times.map{ |i| mul_inputs_sig.wrap(i) }
    tanh_outputs = columns[-1].times.map{ |i| mul_inputs_tanh.wrap(i) }
    mul_outputs = columns[-1].times.map{ |i| mul_outputs.wrap(i) }

    network_constructor(columns, func_sig, typ, integer_width, decimal_width, address_width, reader_inputs_sig, writer_outputs_sig, weights_sig, biases_sig).(:sigmoid_neural_network).(clk, rst, req, fill, ack_fill_sig, ack_network_sig)

    network_constructor(columns, func_tanh, typ, integer_width, decimal_width, address_width, reader_inputs_tanh, writer_outputs_tanh, weights_tanh, biases_tanh).(:tanh_neural_network).(clk, rst, req, fill, ack_fill_tanh, ack_network_tanh)

    req_mul <= ack_network_sig & ack_network_tanh

    mul_n(typ, clk, req_mul, ack_mul, sig_outputs, tanh_outputs, mul_outputs)

    timed do
      # リセット
      clk <= 0
      rst <= 0
      req <= 0
      fill <= 0
      !10.ps

      # メモリ読み出し位置の初期化
      rst <= 1
      !10.ps
      clk <= 1
      !10.ps
      clk <= 0
      !10.ps
      clk <= 1
      !10.ps

      # パラメータのメモリへの書き込み
      clk <= 0
      rst <= 0
      fill <= 1

      !10.ps
      10.times do |i|
        clk <= 1
        !10.ps
        clk <= 0
        !10.ps
      end

      fill <= 0
      clk <= 1
      !10.ps

      # 計算の実行
      clk <= 0
      req <= 1
      !10.ps
      clk <= 1
      !10.ps
      clk <= 0
      !10.ps
      30.times do
        clk <= 1
        !10.ps
        clk <= 0
        !10.ps
      end
    end
  end