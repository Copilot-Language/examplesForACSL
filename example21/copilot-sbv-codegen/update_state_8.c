/* File: "update_state_8.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 s8
*/
/*@
 assigns \nothing;
 ensures \result == (queue_8[ptr_8]);
*/
SBool update_state_8(const SBool *queue_8, const SWord32 ptr_8)
{
  const SBool   s0 = queue_8[0];
  const SBool   s1 = queue_8[1];
  const SBool   s2 = queue_8[2];
  const SBool   s3 = queue_8[3];
  const SBool   s4 = queue_8[4];
  const SBool   s5 = queue_8[5];
  const SBool   s6 = queue_8[6];
  const SBool   s7 = queue_8[7];
  const SBool   s8 = queue_8[8];
  const SBool   s9 = queue_8[9];
  const SBool   s10 = queue_8[10];
  const SBool   s11 = queue_8[11];
  const SBool   s12 = queue_8[12];
  const SBool   s13 = queue_8[13];
  const SBool   s14 = queue_8[14];
  const SBool   s15 = queue_8[15];
  const SBool   s16 = queue_8[16];
  const SBool   s17 = queue_8[17];
  const SBool   s18 = queue_8[18];
  const SBool   s19 = queue_8[19];
  const SBool   s20 = queue_8[20];
  const SBool   s21 = queue_8[21];
  const SBool   s22 = queue_8[22];
  const SBool   s23 = queue_8[23];
  const SBool   s24 = queue_8[24];
  const SBool   s25 = queue_8[25];
  const SBool   s26 = queue_8[26];
  const SBool   s27 = queue_8[27];
  const SBool   s28 = queue_8[28];
  const SBool   s29 = queue_8[29];
  const SBool   s30 = queue_8[30];
  const SBool   s31 = queue_8[31];
  const SBool   s32 = queue_8[32];
  const SBool   s33 = queue_8[33];
  const SBool   s34 = queue_8[34];
  const SBool   s35 = queue_8[35];
  const SBool   s36 = queue_8[36];
  const SBool   s37 = queue_8[37];
  const SBool   s38 = queue_8[38];
  const SBool   s39 = queue_8[39];
  const SBool   s40 = queue_8[40];
  const SBool   s41 = queue_8[41];
  const SBool   s42 = queue_8[42];
  const SBool   s43 = queue_8[43];
  const SBool   s44 = queue_8[44];
  const SBool   s45 = queue_8[45];
  const SBool   s46 = queue_8[46];
  const SBool   s47 = queue_8[47];
  const SBool   s48 = queue_8[48];
  const SBool   s49 = queue_8[49];
  const SBool   s50 = queue_8[50];
  const SBool   s51 = queue_8[51];
  const SBool   s52 = queue_8[52];
  const SBool   s53 = queue_8[53];
  const SBool   s54 = queue_8[54];
  const SBool   s55 = queue_8[55];
  const SBool   s56 = queue_8[56];
  const SBool   s57 = queue_8[57];
  const SBool   s58 = queue_8[58];
  const SBool   s59 = queue_8[59];
  const SBool   s60 = queue_8[60];
  const SBool   s61 = queue_8[61];
  const SBool   s62 = queue_8[62];
  const SBool   s63 = queue_8[63];
  const SBool   s64 = queue_8[64];
  const SBool   s65 = queue_8[65];
  const SBool   s66 = queue_8[66];
  const SBool   s67 = queue_8[67];
  const SBool   s68 = queue_8[68];
  const SBool   s69 = queue_8[69];
  const SBool   s70 = queue_8[70];
  const SBool   s71 = queue_8[71];
  const SBool   s72 = queue_8[72];
  const SBool   s73 = queue_8[73];
  const SBool   s74 = queue_8[74];
  const SBool   s75 = queue_8[75];
  const SBool   s76 = queue_8[76];
  const SBool   s77 = queue_8[77];
  const SBool   s78 = queue_8[78];
  const SBool   s79 = queue_8[79];
  const SBool   s80 = queue_8[80];
  const SBool   s81 = queue_8[81];
  const SBool   s82 = queue_8[82];
  const SBool   s83 = queue_8[83];
  const SBool   s84 = queue_8[84];
  const SBool   s85 = queue_8[85];
  const SBool   s86 = queue_8[86];
  const SBool   s87 = queue_8[87];
  const SBool   s88 = queue_8[88];
  const SBool   s89 = queue_8[89];
  const SBool   s90 = queue_8[90];
  const SBool   s91 = queue_8[91];
  const SBool   s92 = queue_8[92];
  const SBool   s93 = queue_8[93];
  const SBool   s94 = queue_8[94];
  const SBool   s95 = queue_8[95];
  const SBool   s96 = queue_8[96];
  const SBool   s97 = queue_8[97];
  const SBool   s98 = queue_8[98];
  const SBool   s99 = queue_8[99];
  const SBool   s100 = queue_8[100];
  const SBool   s101 = queue_8[101];
  const SBool   s102 = queue_8[102];
  const SBool   s103 = queue_8[103];
  const SBool   s104 = queue_8[104];
  const SBool   s105 = queue_8[105];
  const SBool   s106 = queue_8[106];
  const SBool   s107 = queue_8[107];
  const SBool   s108 = queue_8[108];
  const SBool   s109 = queue_8[109];
  const SBool   s110 = queue_8[110];
  const SBool   s111 = queue_8[111];
  const SBool   s112 = queue_8[112];
  const SBool   s113 = queue_8[113];
  const SBool   s114 = queue_8[114];
  const SBool   s115 = queue_8[115];
  const SBool   s116 = queue_8[116];
  const SBool   s117 = queue_8[117];
  const SBool   s118 = queue_8[118];
  const SBool   s119 = queue_8[119];
  const SBool   s120 = queue_8[120];
  const SBool   s121 = queue_8[121];
  const SBool   s122 = queue_8[122];
  const SBool   s123 = queue_8[123];
  const SBool   s124 = queue_8[124];
  const SBool   s125 = queue_8[125];
  const SBool   s126 = queue_8[126];
  const SBool   s127 = queue_8[127];
  const SBool   s128 = queue_8[128];
  const SBool   s129 = queue_8[129];
  const SBool   s130 = queue_8[130];
  const SBool   s131 = queue_8[131];
  const SBool   s132 = queue_8[132];
  const SBool   s133 = queue_8[133];
  const SBool   s134 = queue_8[134];
  const SBool   s135 = queue_8[135];
  const SBool   s136 = queue_8[136];
  const SBool   s137 = queue_8[137];
  const SBool   s138 = queue_8[138];
  const SBool   s139 = queue_8[139];
  const SBool   s140 = queue_8[140];
  const SBool   s141 = queue_8[141];
  const SBool   s142 = queue_8[142];
  const SBool   s143 = queue_8[143];
  const SBool   s144 = queue_8[144];
  const SBool   s145 = queue_8[145];
  const SBool   s146 = queue_8[146];
  const SBool   s147 = queue_8[147];
  const SBool   s148 = queue_8[148];
  const SBool   s149 = queue_8[149];
  const SBool   s150 = queue_8[150];
  const SBool   s151 = queue_8[151];
  const SBool   s152 = queue_8[152];
  const SBool   s153 = queue_8[153];
  const SBool   s154 = queue_8[154];
  const SBool   s155 = queue_8[155];
  const SBool   s156 = queue_8[156];
  const SBool   s157 = queue_8[157];
  const SBool   s158 = queue_8[158];
  const SBool   s159 = queue_8[159];
  const SBool   s160 = queue_8[160];
  const SBool   s161 = queue_8[161];
  const SBool   s162 = queue_8[162];
  const SBool   s163 = queue_8[163];
  const SBool   s164 = queue_8[164];
  const SBool   s165 = queue_8[165];
  const SBool   s166 = queue_8[166];
  const SBool   s167 = queue_8[167];
  const SBool   s168 = queue_8[168];
  const SBool   s169 = queue_8[169];
  const SBool   s170 = queue_8[170];
  const SBool   s171 = queue_8[171];
  const SBool   s172 = queue_8[172];
  const SBool   s173 = queue_8[173];
  const SBool   s174 = queue_8[174];
  const SBool   s175 = queue_8[175];
  const SBool   s176 = queue_8[176];
  const SBool   s177 = queue_8[177];
  const SBool   s178 = queue_8[178];
  const SBool   s179 = queue_8[179];
  const SBool   s180 = queue_8[180];
  const SBool   s181 = queue_8[181];
  const SBool   s182 = queue_8[182];
  const SBool   s183 = queue_8[183];
  const SBool   s184 = queue_8[184];
  const SBool   s185 = queue_8[185];
  const SBool   s186 = queue_8[186];
  const SBool   s187 = queue_8[187];
  const SBool   s188 = queue_8[188];
  const SBool   s189 = queue_8[189];
  const SBool   s190 = queue_8[190];
  const SBool   s191 = queue_8[191];
  const SBool   s192 = queue_8[192];
  const SBool   s193 = queue_8[193];
  const SBool   s194 = queue_8[194];
  const SBool   s195 = queue_8[195];
  const SBool   s196 = queue_8[196];
  const SBool   s197 = queue_8[197];
  const SBool   s198 = queue_8[198];
  const SBool   s199 = queue_8[199];
  const SBool   s200 = queue_8[200];
  const SBool   s201 = queue_8[201];
  const SBool   s202 = queue_8[202];
  const SBool   s203 = queue_8[203];
  const SBool   s204 = queue_8[204];
  const SBool   s205 = queue_8[205];
  const SBool   s206 = queue_8[206];
  const SBool   s207 = queue_8[207];
  const SBool   s208 = queue_8[208];
  const SBool   s209 = queue_8[209];
  const SBool   s210 = queue_8[210];
  const SBool   s211 = queue_8[211];
  const SBool   s212 = queue_8[212];
  const SBool   s213 = queue_8[213];
  const SBool   s214 = queue_8[214];
  const SBool   s215 = queue_8[215];
  const SBool   s216 = queue_8[216];
  const SBool   s217 = queue_8[217];
  const SBool   s218 = queue_8[218];
  const SBool   s219 = queue_8[219];
  const SBool   s220 = queue_8[220];
  const SBool   s221 = queue_8[221];
  const SBool   s222 = queue_8[222];
  const SBool   s223 = queue_8[223];
  const SBool   s224 = queue_8[224];
  const SBool   s225 = queue_8[225];
  const SBool   s226 = queue_8[226];
  const SBool   s227 = queue_8[227];
  const SBool   s228 = queue_8[228];
  const SBool   s229 = queue_8[229];
  const SBool   s230 = queue_8[230];
  const SBool   s231 = queue_8[231];
  const SBool   s232 = queue_8[232];
  const SBool   s233 = queue_8[233];
  const SBool   s234 = queue_8[234];
  const SBool   s235 = queue_8[235];
  const SBool   s236 = queue_8[236];
  const SBool   s237 = queue_8[237];
  const SBool   s238 = queue_8[238];
  const SBool   s239 = queue_8[239];
  const SBool   s240 = queue_8[240];
  const SBool   s241 = queue_8[241];
  const SBool   s242 = queue_8[242];
  const SBool   s243 = queue_8[243];
  const SBool   s244 = queue_8[244];
  const SBool   s245 = queue_8[245];
  const SBool   s246 = queue_8[246];
  const SBool   s247 = queue_8[247];
  const SBool   s248 = queue_8[248];
  const SBool   s249 = queue_8[249];
  const SBool   s250 = queue_8[250];
  const SBool   s251 = queue_8[251];
  const SBool   s252 = queue_8[252];
  const SBool   s253 = queue_8[253];
  const SBool   s254 = queue_8[254];
  const SBool   s255 = queue_8[255];
  const SBool   s256 = queue_8[256];
  const SBool   s257 = queue_8[257];
  const SBool   s258 = queue_8[258];
  const SBool   s259 = queue_8[259];
  const SBool   s260 = queue_8[260];
  const SBool   s261 = queue_8[261];
  const SBool   s262 = queue_8[262];
  const SBool   s263 = queue_8[263];
  const SBool   s264 = queue_8[264];
  const SBool   s265 = queue_8[265];
  const SBool   s266 = queue_8[266];
  const SBool   s267 = queue_8[267];
  const SBool   s268 = queue_8[268];
  const SBool   s269 = queue_8[269];
  const SBool   s270 = queue_8[270];
  const SBool   s271 = queue_8[271];
  const SBool   s272 = queue_8[272];
  const SBool   s273 = queue_8[273];
  const SBool   s274 = queue_8[274];
  const SBool   s275 = queue_8[275];
  const SBool   s276 = queue_8[276];
  const SBool   s277 = queue_8[277];
  const SBool   s278 = queue_8[278];
  const SBool   s279 = queue_8[279];
  const SBool   s280 = queue_8[280];
  const SBool   s281 = queue_8[281];
  const SBool   s282 = queue_8[282];
  const SBool   s283 = queue_8[283];
  const SBool   s284 = queue_8[284];
  const SBool   s285 = queue_8[285];
  const SBool   s286 = queue_8[286];
  const SBool   s287 = queue_8[287];
  const SBool   s288 = queue_8[288];
  const SBool   s289 = queue_8[289];
  const SBool   s290 = queue_8[290];
  const SBool   s291 = queue_8[291];
  const SBool   s292 = queue_8[292];
  const SBool   s293 = queue_8[293];
  const SBool   s294 = queue_8[294];
  const SBool   s295 = queue_8[295];
  const SBool   s296 = queue_8[296];
  const SBool   s297 = queue_8[297];
  const SBool   s298 = queue_8[298];
  const SBool   s299 = queue_8[299];
  const SBool   s300 = queue_8[300];
  const SBool   s301 = queue_8[301];
  const SBool   s302 = queue_8[302];
  const SBool   s303 = queue_8[303];
  const SBool   s304 = queue_8[304];
  const SBool   s305 = queue_8[305];
  const SBool   s306 = queue_8[306];
  const SBool   s307 = queue_8[307];
  const SBool   s308 = queue_8[308];
  const SBool   s309 = queue_8[309];
  const SBool   s310 = queue_8[310];
  const SBool   s311 = queue_8[311];
  const SBool   s312 = queue_8[312];
  const SBool   s313 = queue_8[313];
  const SBool   s314 = queue_8[314];
  const SBool   s315 = queue_8[315];
  const SBool   s316 = queue_8[316];
  const SBool   s317 = queue_8[317];
  const SBool   s318 = queue_8[318];
  const SBool   s319 = queue_8[319];
  const SBool   s320 = queue_8[320];
  const SBool   s321 = queue_8[321];
  const SBool   s322 = queue_8[322];
  const SBool   s323 = queue_8[323];
  const SBool   s324 = queue_8[324];
  const SBool   s325 = queue_8[325];
  const SBool   s326 = queue_8[326];
  const SBool   s327 = queue_8[327];
  const SBool   s328 = queue_8[328];
  const SBool   s329 = queue_8[329];
  const SBool   s330 = queue_8[330];
  const SBool   s331 = queue_8[331];
  const SBool   s332 = queue_8[332];
  const SBool   s333 = queue_8[333];
  const SBool   s334 = queue_8[334];
  const SBool   s335 = queue_8[335];
  const SBool   s336 = queue_8[336];
  const SBool   s337 = queue_8[337];
  const SBool   s338 = queue_8[338];
  const SBool   s339 = queue_8[339];
  const SBool   s340 = queue_8[340];
  const SBool   s341 = queue_8[341];
  const SBool   s342 = queue_8[342];
  const SBool   s343 = queue_8[343];
  const SBool   s344 = queue_8[344];
  const SBool   s345 = queue_8[345];
  const SBool   s346 = queue_8[346];
  const SBool   s347 = queue_8[347];
  const SBool   s348 = queue_8[348];
  const SBool   s349 = queue_8[349];
  const SBool   s350 = queue_8[350];
  const SBool   s351 = queue_8[351];
  const SBool   s352 = queue_8[352];
  const SBool   s353 = queue_8[353];
  const SBool   s354 = queue_8[354];
  const SBool   s355 = queue_8[355];
  const SBool   s356 = queue_8[356];
  const SBool   s357 = queue_8[357];
  const SBool   s358 = queue_8[358];
  const SBool   s359 = queue_8[359];
  const SBool   s360 = queue_8[360];
  const SBool   s361 = queue_8[361];
  const SBool   s362 = queue_8[362];
  const SBool   s363 = queue_8[363];
  const SBool   s364 = queue_8[364];
  const SBool   s365 = queue_8[365];
  const SBool   s366 = queue_8[366];
  const SBool   s367 = queue_8[367];
  const SBool   s368 = queue_8[368];
  const SBool   s369 = queue_8[369];
  const SBool   s370 = queue_8[370];
  const SBool   s371 = queue_8[371];
  const SBool   s372 = queue_8[372];
  const SBool   s373 = queue_8[373];
  const SBool   s374 = queue_8[374];
  const SBool   s375 = queue_8[375];
  const SBool   s376 = queue_8[376];
  const SBool   s377 = queue_8[377];
  const SBool   s378 = queue_8[378];
  const SBool   s379 = queue_8[379];
  const SBool   s380 = queue_8[380];
  const SBool   s381 = queue_8[381];
  const SBool   s382 = queue_8[382];
  const SBool   s383 = queue_8[383];
  const SBool   s384 = queue_8[384];
  const SBool   s385 = queue_8[385];
  const SBool   s386 = queue_8[386];
  const SBool   s387 = queue_8[387];
  const SBool   s388 = queue_8[388];
  const SBool   s389 = queue_8[389];
  const SBool   s390 = queue_8[390];
  const SBool   s391 = queue_8[391];
  const SBool   s392 = queue_8[392];
  const SBool   s393 = queue_8[393];
  const SBool   s394 = queue_8[394];
  const SBool   s395 = queue_8[395];
  const SBool   s396 = queue_8[396];
  const SBool   s397 = queue_8[397];
  const SBool   s398 = queue_8[398];
  const SBool   s399 = queue_8[399];
  const SBool   s400 = queue_8[400];
  const SBool   s401 = queue_8[401];
  const SBool   s402 = queue_8[402];
  const SBool   s403 = queue_8[403];
  const SBool   s404 = queue_8[404];
  const SBool   s405 = queue_8[405];
  const SBool   s406 = queue_8[406];
  const SBool   s407 = queue_8[407];
  const SBool   s408 = queue_8[408];
  const SBool   s409 = queue_8[409];
  const SBool   s410 = queue_8[410];
  const SBool   s411 = queue_8[411];
  const SBool   s412 = queue_8[412];
  const SBool   s413 = queue_8[413];
  const SBool   s414 = queue_8[414];
  const SBool   s415 = queue_8[415];
  const SBool   s416 = queue_8[416];
  const SBool   s417 = queue_8[417];
  const SBool   s418 = queue_8[418];
  const SBool   s419 = queue_8[419];
  const SBool   s420 = queue_8[420];
  const SBool   s421 = queue_8[421];
  const SBool   s422 = queue_8[422];
  const SBool   s423 = queue_8[423];
  const SBool   s424 = queue_8[424];
  const SBool   s425 = queue_8[425];
  const SBool   s426 = queue_8[426];
  const SBool   s427 = queue_8[427];
  const SBool   s428 = queue_8[428];
  const SBool   s429 = queue_8[429];
  const SBool   s430 = queue_8[430];
  const SBool   s431 = queue_8[431];
  const SBool   s432 = queue_8[432];
  const SBool   s433 = queue_8[433];
  const SBool   s434 = queue_8[434];
  const SBool   s435 = queue_8[435];
  const SBool   s436 = queue_8[436];
  const SBool   s437 = queue_8[437];
  const SBool   s438 = queue_8[438];
  const SBool   s439 = queue_8[439];
  const SBool   s440 = queue_8[440];
  const SBool   s441 = queue_8[441];
  const SBool   s442 = queue_8[442];
  const SBool   s443 = queue_8[443];
  const SBool   s444 = queue_8[444];
  const SBool   s445 = queue_8[445];
  const SBool   s446 = queue_8[446];
  const SBool   s447 = queue_8[447];
  const SBool   s448 = queue_8[448];
  const SBool   s449 = queue_8[449];
  const SBool   s450 = queue_8[450];
  const SBool   s451 = queue_8[451];
  const SBool   s452 = queue_8[452];
  const SBool   s453 = queue_8[453];
  const SBool   s454 = queue_8[454];
  const SBool   s455 = queue_8[455];
  const SBool   s456 = queue_8[456];
  const SBool   s457 = queue_8[457];
  const SBool   s458 = queue_8[458];
  const SBool   s459 = queue_8[459];
  const SBool   s460 = queue_8[460];
  const SBool   s461 = queue_8[461];
  const SBool   s462 = queue_8[462];
  const SBool   s463 = queue_8[463];
  const SBool   s464 = queue_8[464];
  const SBool   s465 = queue_8[465];
  const SBool   s466 = queue_8[466];
  const SBool   s467 = queue_8[467];
  const SBool   s468 = queue_8[468];
  const SBool   s469 = queue_8[469];
  const SBool   s470 = queue_8[470];
  const SBool   s471 = queue_8[471];
  const SBool   s472 = queue_8[472];
  const SBool   s473 = queue_8[473];
  const SBool   s474 = queue_8[474];
  const SBool   s475 = queue_8[475];
  const SBool   s476 = queue_8[476];
  const SBool   s477 = queue_8[477];
  const SBool   s478 = queue_8[478];
  const SBool   s479 = queue_8[479];
  const SBool   s480 = queue_8[480];
  const SBool   s481 = queue_8[481];
  const SBool   s482 = queue_8[482];
  const SBool   s483 = queue_8[483];
  const SBool   s484 = queue_8[484];
  const SBool   s485 = queue_8[485];
  const SBool   s486 = queue_8[486];
  const SBool   s487 = queue_8[487];
  const SBool   s488 = queue_8[488];
  const SBool   s489 = queue_8[489];
  const SBool   s490 = queue_8[490];
  const SBool   s491 = queue_8[491];
  const SBool   s492 = queue_8[492];
  const SBool   s493 = queue_8[493];
  const SBool   s494 = queue_8[494];
  const SBool   s495 = queue_8[495];
  const SBool   s496 = queue_8[496];
  const SBool   s497 = queue_8[497];
  const SBool   s498 = queue_8[498];
  const SBool   s499 = queue_8[499];
  const SBool   s500 = queue_8[500];
  const SBool   s501 = queue_8[501];
  const SBool   s502 = queue_8[502];
  const SBool   s503 = queue_8[503];
  const SBool   s504 = queue_8[504];
  const SBool   s505 = queue_8[505];
  const SBool   s506 = queue_8[506];
  const SBool   s507 = queue_8[507];
  const SBool   s508 = queue_8[508];
  const SBool   s509 = queue_8[509];
  const SBool   s510 = queue_8[510];
  const SBool   s511 = queue_8[511];
  const SWord32 s512 = ptr_8;
  const SBool table0[] = {
        s0,   s1,   s2,   s3,   s4,   s5,   s6,   s7,   s8,   s9,  s10,
       s11,  s12,  s13,  s14,  s15,  s16,  s17,  s18,  s19,  s20,  s21,
       s22,  s23,  s24,  s25,  s26,  s27,  s28,  s29,  s30,  s31,  s32,
       s33,  s34,  s35,  s36,  s37,  s38,  s39,  s40,  s41,  s42,  s43,
       s44,  s45,  s46,  s47,  s48,  s49,  s50,  s51,  s52,  s53,  s54,
       s55,  s56,  s57,  s58,  s59,  s60,  s61,  s62,  s63,  s64,  s65,
       s66,  s67,  s68,  s69,  s70,  s71,  s72,  s73,  s74,  s75,  s76,
       s77,  s78,  s79,  s80,  s81,  s82,  s83,  s84,  s85,  s86,  s87,
       s88,  s89,  s90,  s91,  s92,  s93,  s94,  s95,  s96,  s97,  s98,
       s99, s100, s101, s102, s103, s104, s105, s106, s107, s108, s109,
      s110, s111, s112, s113, s114, s115, s116, s117, s118, s119, s120,
      s121, s122, s123, s124, s125, s126, s127, s128, s129, s130, s131,
      s132, s133, s134, s135, s136, s137, s138, s139, s140, s141, s142,
      s143, s144, s145, s146, s147, s148, s149, s150, s151, s152, s153,
      s154, s155, s156, s157, s158, s159, s160, s161, s162, s163, s164,
      s165, s166, s167, s168, s169, s170, s171, s172, s173, s174, s175,
      s176, s177, s178, s179, s180, s181, s182, s183, s184, s185, s186,
      s187, s188, s189, s190, s191, s192, s193, s194, s195, s196, s197,
      s198, s199, s200, s201, s202, s203, s204, s205, s206, s207, s208,
      s209, s210, s211, s212, s213, s214, s215, s216, s217, s218, s219,
      s220, s221, s222, s223, s224, s225, s226, s227, s228, s229, s230,
      s231, s232, s233, s234, s235, s236, s237, s238, s239, s240, s241,
      s242, s243, s244, s245, s246, s247, s248, s249, s250, s251, s252,
      s253, s254, s255, s256, s257, s258, s259, s260, s261, s262, s263,
      s264, s265, s266, s267, s268, s269, s270, s271, s272, s273, s274,
      s275, s276, s277, s278, s279, s280, s281, s282, s283, s284, s285,
      s286, s287, s288, s289, s290, s291, s292, s293, s294, s295, s296,
      s297, s298, s299, s300, s301, s302, s303, s304, s305, s306, s307,
      s308, s309, s310, s311, s312, s313, s314, s315, s316, s317, s318,
      s319, s320, s321, s322, s323, s324, s325, s326, s327, s328, s329,
      s330, s331, s332, s333, s334, s335, s336, s337, s338, s339, s340,
      s341, s342, s343, s344, s345, s346, s347, s348, s349, s350, s351,
      s352, s353, s354, s355, s356, s357, s358, s359, s360, s361, s362,
      s363, s364, s365, s366, s367, s368, s369, s370, s371, s372, s373,
      s374, s375, s376, s377, s378, s379, s380, s381, s382, s383, s384,
      s385, s386, s387, s388, s389, s390, s391, s392, s393, s394, s395,
      s396, s397, s398, s399, s400, s401, s402, s403, s404, s405, s406,
      s407, s408, s409, s410, s411, s412, s413, s414, s415, s416, s417,
      s418, s419, s420, s421, s422, s423, s424, s425, s426, s427, s428,
      s429, s430, s431, s432, s433, s434, s435, s436, s437, s438, s439,
      s440, s441, s442, s443, s444, s445, s446, s447, s448, s449, s450,
      s451, s452, s453, s454, s455, s456, s457, s458, s459, s460, s461,
      s462, s463, s464, s465, s466, s467, s468, s469, s470, s471, s472,
      s473, s474, s475, s476, s477, s478, s479, s480, s481, s482, s483,
      s484, s485, s486, s487, s488, s489, s490, s491, s492, s493, s494,
      s495, s496, s497, s498, s499, s500, s501, s502, s503, s504, s505,
      s506, s507, s508, s509, s510, s511
  };
  const SWord32 s514 = (0x00000200UL == 0) ? s512 : (s512 % 0x00000200UL);
  const SBool   s515 = table0[s514];

  return s515;
}
