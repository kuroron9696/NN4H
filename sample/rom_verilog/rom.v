`timescale 1ps/1ps

module _____00003aT0( ); 
   reg [1:0] addr;
   wire [7:0] data;
   wire [1:0] _00005e_0000600;
   wire [7:0] _00005e_0000601;

   _____00003aT0_00003a_00003amy__table_00003aT0 my__table(.addr(_00005e_0000600),.data(_00005e_0000601));
   assign _00005e_0000600 = addr;

   assign data = _00005e_0000601;

   initial begin

      addr = 2'b0;

   end

endmodule