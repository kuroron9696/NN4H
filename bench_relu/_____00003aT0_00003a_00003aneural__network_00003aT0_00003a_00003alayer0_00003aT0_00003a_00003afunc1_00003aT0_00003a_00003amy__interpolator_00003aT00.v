`timescale 1ps/1ps

module _____00003aT0_00003a_00003aneural__network_00003aT0_00003a_00003alayer0_00003aT0_00003a_00003afunc1_00003aT0_00003a_00003amy__interpolator_00003aT00( base, next__data, remaining, interpolated__value ); 
   input signed[7:0] base;
   input signed[7:0] next__data;
   input signed[7:0] remaining;
   output reg signed[7:0] interpolated__value;
   reg signed[7:0] _00003a545_00003a_00003a_00003a542;
   reg signed[7:0] _00003a545_00003a_00003a_00003a543;

   always @( * ) begin

      _00003a545_00003a_00003a_00003a542 <= ((next__data - base) >> 32'd0);

      _00003a545_00003a_00003a_00003a543 <= ((next__data - base) >> 32'd0);

      interpolated__value <= (base + (($signed({{4{_00003a545_00003a_00003a_00003a543[7]}},_00003a545_00003a_00003a_00003a543}) * remaining) >> 32'd4));

   end

endmodule