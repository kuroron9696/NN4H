require 'std/memory.rb'
# require 'std/linear.rb'
require "std/fixpoint.rb"
# require_relative "network_constructor.rb"
# require_relative "network_loader.rb"
require_relative "quantize.rb"
require 'std/channel.rb'
require 'std/connector.rb'

include HDLRuby::High::Std

system :channel_connector do
    # データ型の宣言
    integer_width = 4 # 整数部のビット幅
    decimal_width = 4 # 実数部のビット幅
    address_width = 4 # lutのアドレスのビット幅
    typ = signed[integer_width, decimal_width] # データ型
    
    inputs_x = [1, 0]
    inputs_h = [0, 1]
    columns = [2, 2, 1]

    inner :clk,   # clock
          :rst,   # reset
          :req,   # request
          :fill   # 入力値のメモリへの書き込み

    # inner :ack_fill_sig, # 書き込みのack:tanh
          # :ack_network_sig, # ニューラルネット:ワークのack:tanh

    inputs_x = quantize(inputs_x, typ, decimal_width)
    inputs_h = quantize(inputs_h, typ, decimal_width)

    mem_rom(typ, columns[0], clk, rst, inputs_x, rinc: :rst, winc: :rst).(:rom_inputs_x) # 入力値を格納するrom(x)

    mem_rom(typ, columns[0], clk, rst, inputs_h, rinc: :rst, winc: :rst).(:rom_inputs_h) # 入力値を格納するrom(h)

    mem_dual(typ, columns[0], clk, rst, rinc: :rst, winc: :rst).(:ram_inputs_serializer) #

    mem_dual(typ, columns[0]*2, clk, rst, rinc: :rst, winc: :rst).(:ram_inputs_merger) #

    reader_inputs_x = rom_inputs_x.branch(:rinc) #入力値xの読みだし用branch
    reader_inputs_h = rom_inputs_h.branch(:rinc) #入力値hの読みだし用branch
    writer_inputs_serializer = ram_inputs_serializer.branch(:winc) #入力値を合成した値の書き込み用branch
    writer_inputs_meger = ram_inputs_merger.branch(:winc) #入力値を合成した値の書き込み用branch
  

    serializer(typ,clk.negedge,[reader_inputs_x,reader_inputs_h],writer_inputs_serializer)

    # merger([typ]*2,clk.negedge,[reader_inputs_x,reader_inputs_h], writer_inputs_meger)

    # duplicator(typ,clk.negedge,reader_inputs_r,[])


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
