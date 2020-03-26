# Describes an 8-bit data 4-bit address ROM.
system :rom4_8 do
    [2..0].input :addr
    [7..0].output :data0,:data1,:data2,:data

    #bit[7..0][0..7].constant content0: [1,2,3,4,5,6,7]
    #bit[7..0][-8].constant content1: [1,2,3,4,5,6,7]
    #bit[7..0][-8].constant content2: (8).times.to_a
    bit[8][3].constant  content: (3).times.to_a

    #data0 <= content0[addr]
    #data1 <= content1[addr]
    #data2 <= content2[addr]

    data <= content[addr]
end