`timescale 1ps/1ps

module _____00003aT0_00003a_00003amy__table_00003aT0( addr, base, next__data ); 
   input [7:0] addr;
   output signed[31:0] base;
   output reg signed[31:0] next__data;
   wire signed[31:0] table  :4[255:0];

   assign base = table[addr];

   always @( * ) begin

      if ((addr == {1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1})) begin
         next__data <= table[addr];
      end
      else begin
         next__data <= table[(addr + 32'd1)];
      end

   end

   initial begin

      table[32'd0] = 32'd0;

      table[32'd1] = 32'd6290304;

      table[32'd2] = 32'd12573704;

      table[32'd3] = 32'd18843325;

      table[32'd4] = 32'd25092354;

      table[32'd5] = 32'd31314066;

      table[32'd6] = 32'd37501856;

      table[32'd7] = 32'd43649264;

      table[32'd8] = 32'd49750002;

      table[32'd9] = 32'd55797978;

      table[32'd10] = 32'd61787321;

      table[32'd11] = 32'd67712402;

      table[32'd12] = 32'd73567847;

      table[32'd13] = 32'd79348564;

      table[32'd14] = 32'd85049748;

      table[32'd15] = 32'd90666899;

      table[32'd16] = 32'd96195831;

      table[32'd17] = 32'd101632679;

      table[32'd18] = 32'd106973902;

      table[32'd19] = 32'd112216292;

      table[32'd20] = 32'd117356970;

      table[32'd21] = 32'd122393387;

      table[32'd22] = 32'd127323319;

      table[32'd23] = 32'd132144865;

      table[32'd24] = 32'd136856441;

      table[32'd25] = 32'd141456768;

      table[32'd26] = 32'd145944866;

      table[32'd27] = 32'd150320043;

      table[32'd28] = 32'd154581883;

      table[32'd29] = 32'd158730233;

      table[32'd30] = 32'd162765192;

      table[32'd31] = 32'd166687094;

      table[32'd32] = 32'd170496498;

      table[32'd33] = 32'd174194170;

      table[32'd34] = 32'd177781070;

      table[32'd35] = 32'd181258337;

      table[32'd36] = 32'd184627277;

      table[32'd37] = 32'd187889344;

      table[32'd38] = 32'd191046129;

      table[32'd39] = 32'd194099348;

      table[32'd40] = 32'd197050823;

      table[32'd41] = 32'd199902474;

      table[32'd42] = 32'd202656307;

      table[32'd43] = 32'd205314397;

      table[32'd44] = 32'd207878883;

      table[32'd45] = 32'd210351953;

      table[32'd46] = 32'd212735836;

      table[32'd47] = 32'd215032791;

      table[32'd48] = 32'd217245101;

      table[32'd49] = 32'd219375062;

      table[32'd50] = 32'd221424977;

      table[32'd51] = 32'd223397147;

      table[32'd52] = 32'd225293868;

      table[32'd53] = 32'd227117421;

      table[32'd54] = 32'd228870072;

      table[32'd55] = 32'd230554061;

      table[32'd56] = 32'd232171602;

      table[32'd57] = 32'd233724878;

      table[32'd58] = 32'd235216039;

      table[32'd59] = 32'd236647194;

      table[32'd60] = 32'd238020416;

      table[32'd61] = 32'd239337734;

      table[32'd62] = 32'd240601133;

      table[32'd63] = 32'd241812552;

      table[32'd64] = 32'd242973884;

      table[32'd65] = 32'd244086974;

      table[32'd66] = 32'd245153620;

      table[32'd67] = 32'd246175567;

      table[32'd68] = 32'd247154516;

      table[32'd69] = 32'd248092114;

      table[32'd70] = 32'd248989961;

      table[32'd71] = 32'd249849608;

      table[32'd72] = 32'd250672556;

      table[32'd73] = 32'd251460259;

      table[32'd74] = 32'd252214123;

      table[32'd75] = 32'd252935505;

      table[32'd76] = 32'd253625720;

      table[32'd77] = 32'd254286033;

      table[32'd78] = 32'd254917668;

      table[32'd79] = 32'd255521803;

      table[32'd80] = 32'd256099574;

      table[32'd81] = 32'd256652077;

      table[32'd82] = 32'd257180364;

      table[32'd83] = 32'd257685452;

      table[32'd84] = 32'd258168316;

      table[32'd85] = 32'd258629896;

      table[32'd86] = 32'd259071093;

      table[32'd87] = 32'd259492775;

      table[32'd88] = 32'd259895776;

      table[32'd89] = 32'd260280897;

      table[32'd90] = 32'd260648905;

      table[32'd91] = 32'd261000540;

      table[32'd92] = 32'd261336507;

      table[32'd93] = 32'd261657487;

      table[32'd94] = 32'd261964132;

      table[32'd95] = 32'd262257065;

      table[32'd96] = 32'd262536886;

      table[32'd97] = 32'd262804168;

      table[32'd98] = 32'd263059461;

      table[32'd99] = 32'd263303292;

      table[32'd100] = 32'd263536166;

      table[32'd101] = 32'd263758567;

      table[32'd102] = 32'd263970956;

      table[32'd103] = 32'd264173777;

      table[32'd104] = 32'd264367455;

      table[32'd105] = 32'd264552395;

      table[32'd106] = 32'd264728986;

      table[32'd107] = 32'd264897599;

      table[32'd108] = 32'd265058590;

      table[32'd109] = 32'd265212300;

      table[32'd110] = 32'd265359053;

      table[32'd111] = 32'd265499161;

      table[32'd112] = 32'd265632922;

      table[32'd113] = 32'd265760620;

      table[32'd114] = 32'd265882527;

      table[32'd115] = 32'd265998904;

      table[32'd116] = 32'd266109998;

      table[32'd117] = 32'd266216048;

      table[32'd118] = 32'd266317281;

      table[32'd119] = 32'd266413914;

      table[32'd120] = 32'd266506155;

      table[32'd121] = 32'd266594201;

      table[32'd122] = 32'd266678242;

      table[32'd123] = 32'd266758459;

      table[32'd124] = 32'd266835026;

      table[32'd125] = 32'd266908106;

      table[32'd126] = 32'd266977859;

      table[32'd127] = 32'd267044434;

      table[32'd128] = -32'd267107976;

      table[32'd129] = -32'd267044434;

      table[32'd130] = -32'd266977859;

      table[32'd131] = -32'd266908106;

      table[32'd132] = -32'd266835026;

      table[32'd133] = -32'd266758459;

      table[32'd134] = -32'd266678242;

      table[32'd135] = -32'd266594201;

      table[32'd136] = -32'd266506155;

      table[32'd137] = -32'd266413914;

      table[32'd138] = -32'd266317281;

      table[32'd139] = -32'd266216048;

      table[32'd140] = -32'd266109998;

      table[32'd141] = -32'd265998904;

      table[32'd142] = -32'd265882527;

      table[32'd143] = -32'd265760620;

      table[32'd144] = -32'd265632922;

      table[32'd145] = -32'd265499161;

      table[32'd146] = -32'd265359053;

      table[32'd147] = -32'd265212300;

      table[32'd148] = -32'd265058590;

      table[32'd149] = -32'd264897599;

      table[32'd150] = -32'd264728986;

      table[32'd151] = -32'd264552395;

      table[32'd152] = -32'd264367455;

      table[32'd153] = -32'd264173777;

      table[32'd154] = -32'd263970956;

      table[32'd155] = -32'd263758567;

      table[32'd156] = -32'd263536166;

      table[32'd157] = -32'd263303292;

      table[32'd158] = -32'd263059461;

      table[32'd159] = -32'd262804168;

      table[32'd160] = -32'd262536886;

      table[32'd161] = -32'd262257065;

      table[32'd162] = -32'd261964132;

      table[32'd163] = -32'd261657487;

      table[32'd164] = -32'd261336507;

      table[32'd165] = -32'd261000540;

      table[32'd166] = -32'd260648905;

      table[32'd167] = -32'd260280897;

      table[32'd168] = -32'd259895776;

      table[32'd169] = -32'd259492775;

      table[32'd170] = -32'd259071093;

      table[32'd171] = -32'd258629896;

      table[32'd172] = -32'd258168316;

      table[32'd173] = -32'd257685452;

      table[32'd174] = -32'd257180364;

      table[32'd175] = -32'd256652077;

      table[32'd176] = -32'd256099574;

      table[32'd177] = -32'd255521803;

      table[32'd178] = -32'd254917668;

      table[32'd179] = -32'd254286033;

      table[32'd180] = -32'd253625720;

      table[32'd181] = -32'd252935505;

      table[32'd182] = -32'd252214123;

      table[32'd183] = -32'd251460259;

      table[32'd184] = -32'd250672556;

      table[32'd185] = -32'd249849608;

      table[32'd186] = -32'd248989961;

      table[32'd187] = -32'd248092114;

      table[32'd188] = -32'd247154516;

      table[32'd189] = -32'd246175567;

      table[32'd190] = -32'd245153620;

      table[32'd191] = -32'd244086974;

      table[32'd192] = -32'd242973884;

      table[32'd193] = -32'd241812552;

      table[32'd194] = -32'd240601133;

      table[32'd195] = -32'd239337734;

      table[32'd196] = -32'd238020416;

      table[32'd197] = -32'd236647194;

      table[32'd198] = -32'd235216039;

      table[32'd199] = -32'd233724878;

      table[32'd200] = -32'd232171602;

      table[32'd201] = -32'd230554061;

      table[32'd202] = -32'd228870072;

      table[32'd203] = -32'd227117421;

      table[32'd204] = -32'd225293868;

      table[32'd205] = -32'd223397147;

      table[32'd206] = -32'd221424977;

      table[32'd207] = -32'd219375062;

      table[32'd208] = -32'd217245101;

      table[32'd209] = -32'd215032791;

      table[32'd210] = -32'd212735836;

      table[32'd211] = -32'd210351953;

      table[32'd212] = -32'd207878883;

      table[32'd213] = -32'd205314397;

      table[32'd214] = -32'd202656307;

      table[32'd215] = -32'd199902474;

      table[32'd216] = -32'd197050823;

      table[32'd217] = -32'd194099348;

      table[32'd218] = -32'd191046129;

      table[32'd219] = -32'd187889344;

      table[32'd220] = -32'd184627277;

      table[32'd221] = -32'd181258337;

      table[32'd222] = -32'd177781070;

      table[32'd223] = -32'd174194170;

      table[32'd224] = -32'd170496498;

      table[32'd225] = -32'd166687094;

      table[32'd226] = -32'd162765192;

      table[32'd227] = -32'd158730233;

      table[32'd228] = -32'd154581883;

      table[32'd229] = -32'd150320043;

      table[32'd230] = -32'd145944866;

      table[32'd231] = -32'd141456768;

      table[32'd232] = -32'd136856441;

      table[32'd233] = -32'd132144865;

      table[32'd234] = -32'd127323319;

      table[32'd235] = -32'd122393387;

      table[32'd236] = -32'd117356970;

      table[32'd237] = -32'd112216292;

      table[32'd238] = -32'd106973902;

      table[32'd239] = -32'd101632679;

      table[32'd240] = -32'd96195831;

      table[32'd241] = -32'd90666899;

      table[32'd242] = -32'd85049748;

      table[32'd243] = -32'd79348564;

      table[32'd244] = -32'd73567847;

      table[32'd245] = -32'd67712402;

      table[32'd246] = -32'd61787321;

      table[32'd247] = -32'd55797978;

      table[32'd248] = -32'd49750002;

      table[32'd249] = -32'd43649264;

      table[32'd250] = -32'd37501856;

      table[32'd251] = -32'd31314066;

      table[32'd252] = -32'd25092354;

      table[32'd253] = -32'd18843325;

      table[32'd254] = -32'd12573704;

      table[32'd255] = -32'd6290304;

   end

endmodule