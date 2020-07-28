# メモ
# HDLRubyシミュレータの動作確認
# Icarus Verilogでのエラーの原因特定

require "std/fixpoint.rb"
require_relative "binfixed.rb"

include HDLRuby::High::Std

int_width = 4
dec_width = 28
addr_w = 8

# インスタンス化のテストモジュール
system :tester do
  signed[int_width, dec_width].inner :z_value
  signed[int_width, dec_width].inner :a

  signed[int_width, dec_width].inner :base,:next_data
  
  [addr_w].inner :addr
  [z_value.width-addr_w].inner :remaining

  address_translator(int_width, dec_width, addr_w).(:my_translator).(z_value, addr, remaining)
  table(addr_w, int_width, dec_width, proc{ |i| Math.tanh(i) }).(:my_table).(addr,base,next_data)
  calculator(int_width, dec_width, remaining.width).(:my_calculator).(remaining, z_value, base, next_data, addr << remaining.width, a)

  timed do
    z_value <= _b32b0
    !10.ps
    z_value <= _b32b00000001010111111111101110000000
    !10.ps
  end
end

# module of activation function's LUT
# 活性化関数のLUTを表現するモジュール
# 任意の活性化関数をprocで渡せる
system :table do |addr_width, integer_width, decimal_width, activation_function|
  size = 2 ** addr_width

  # address of LUT
  [addr_width].input :addr

  # value of LUT that corresponds to address
  signed[integer_width, decimal_width].output :base,:next_data
  
  # points of tanh
  # tanhの点を格納するLUT
  signed[integer_width, decimal_width][size].constant table: initialize_table(size, integer_width, decimal_width, activation_function)

  base <= table[addr]

  # アドレスが255の場合、次のデータは最後のデータと等しい
  #hif(addr == [_b1] * size.width ) { next_data <= table[addr] }
  #helse { next_data <= table[addr+1] }
end

# compute tanh
# LUTの点の間の値を計算するモジュール
system :calculator do |integer_width, decimal_width, remaining_width|
  [remaining_width].input :remaining
  signed[integer_width, decimal_width].input :z_value, :base, :next_data, :addr

  signed[integer_width, decimal_width].output :estimated_value

  #estimated_value <= base + (next_data - base) * remaining.as([estimated_value.width])
  estimated_value <= (next_data - base) * z_value + base - (next_data - base) * addr
end

# 入力データからアドレスを取り出すモジュール
system :address_translator do |integer_width, decimal_width, addr_width|
  signed[integer_width + decimal_width].input :z_value  
  [addr_width].output :addr
  [z_value.width - addr_width].output :remaining

  addr <= z_value[z_value.width-1..z_value.width-addr_width]
  remaining <= z_value[z_value.width-addr_width-1..0]
end

# Make an array consists of a point of tanh.
# @param [Integer] size the size of LUT
# @return [Array] table an array consists of a point of tanh
def initialize_table(size, integer_width, decimal_width, func)
  # 表現可能なアドレスの範囲
  range_array = Range.new(-size/2,size/2 - 1).to_a

  # 範囲の変換
  range_array.map!{ |value| convert(value,-size/2.to_f,size/2.to_f,-3.0,3.0) }

  # 活性化関数の適用
  table = range_array.map(&func).map{ |value| value.q(integer_width, decimal_width) }

  # 配列を分割して順番入れ替え
  sliced = table.each_slice(size/2).to_a
  table = [sliced[1], sliced[0]].flatten
  
  return table
end

# Convert value's range.
# @param [Float] value the value you want to convert range
def convert(value,imin,imax,omin,omax)
  return omin + (omax - omin) * ((value - imin) / (imax - imin))
end
