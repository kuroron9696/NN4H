`timescale 1ps/1ps

module _____00003aT0_00003a_00003ainput__sig__nn_00003aT0_00003a_00003alayer1_00003aT00_00003a_00003afunc1_00003aT20_00003a_00003amy__interpolator_00003aT120( base, next__data, change, remaining, interpolated__value ); 
   input signed[7:0] base;
   input signed[7:0] next__data;
   input signed[7:0] change;
   input signed[7:0] remaining;
   output signed[7:0] interpolated__value;

   assign interpolated__value = (base + (($signed((next__data - base)) * remaining) >> 32'd4));

endmodule