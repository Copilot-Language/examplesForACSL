/* File: "update_state_12.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 s12
*/
/*@
 assigns \nothing;
 ensures \result == (queue_12[ptr_12]);
*/
SBool update_state_12(const SBool *queue_12, const SWord32 ptr_12)
{
  const SBool   s0 = queue_12[0];
  const SBool   s1 = queue_12[1];
  const SBool   s2 = queue_12[2];
  const SBool   s3 = queue_12[3];
  const SBool   s4 = queue_12[4];
  const SBool   s5 = queue_12[5];
  const SBool   s6 = queue_12[6];
  const SBool   s7 = queue_12[7];
  const SBool   s8 = queue_12[8];
  const SBool   s9 = queue_12[9];
  const SBool   s10 = queue_12[10];
  const SBool   s11 = queue_12[11];
  const SBool   s12 = queue_12[12];
  const SBool   s13 = queue_12[13];
  const SBool   s14 = queue_12[14];
  const SBool   s15 = queue_12[15];
  const SBool   s16 = queue_12[16];
  const SBool   s17 = queue_12[17];
  const SBool   s18 = queue_12[18];
  const SBool   s19 = queue_12[19];
  const SBool   s20 = queue_12[20];
  const SBool   s21 = queue_12[21];
  const SBool   s22 = queue_12[22];
  const SBool   s23 = queue_12[23];
  const SBool   s24 = queue_12[24];
  const SBool   s25 = queue_12[25];
  const SBool   s26 = queue_12[26];
  const SBool   s27 = queue_12[27];
  const SBool   s28 = queue_12[28];
  const SBool   s29 = queue_12[29];
  const SBool   s30 = queue_12[30];
  const SBool   s31 = queue_12[31];
  const SBool   s32 = queue_12[32];
  const SBool   s33 = queue_12[33];
  const SBool   s34 = queue_12[34];
  const SBool   s35 = queue_12[35];
  const SBool   s36 = queue_12[36];
  const SBool   s37 = queue_12[37];
  const SBool   s38 = queue_12[38];
  const SBool   s39 = queue_12[39];
  const SBool   s40 = queue_12[40];
  const SBool   s41 = queue_12[41];
  const SBool   s42 = queue_12[42];
  const SBool   s43 = queue_12[43];
  const SBool   s44 = queue_12[44];
  const SBool   s45 = queue_12[45];
  const SBool   s46 = queue_12[46];
  const SBool   s47 = queue_12[47];
  const SBool   s48 = queue_12[48];
  const SBool   s49 = queue_12[49];
  const SBool   s50 = queue_12[50];
  const SBool   s51 = queue_12[51];
  const SBool   s52 = queue_12[52];
  const SBool   s53 = queue_12[53];
  const SBool   s54 = queue_12[54];
  const SBool   s55 = queue_12[55];
  const SBool   s56 = queue_12[56];
  const SBool   s57 = queue_12[57];
  const SBool   s58 = queue_12[58];
  const SBool   s59 = queue_12[59];
  const SBool   s60 = queue_12[60];
  const SBool   s61 = queue_12[61];
  const SBool   s62 = queue_12[62];
  const SBool   s63 = queue_12[63];
  const SBool   s64 = queue_12[64];
  const SBool   s65 = queue_12[65];
  const SBool   s66 = queue_12[66];
  const SBool   s67 = queue_12[67];
  const SBool   s68 = queue_12[68];
  const SBool   s69 = queue_12[69];
  const SBool   s70 = queue_12[70];
  const SBool   s71 = queue_12[71];
  const SBool   s72 = queue_12[72];
  const SBool   s73 = queue_12[73];
  const SBool   s74 = queue_12[74];
  const SBool   s75 = queue_12[75];
  const SBool   s76 = queue_12[76];
  const SBool   s77 = queue_12[77];
  const SBool   s78 = queue_12[78];
  const SBool   s79 = queue_12[79];
  const SBool   s80 = queue_12[80];
  const SBool   s81 = queue_12[81];
  const SBool   s82 = queue_12[82];
  const SBool   s83 = queue_12[83];
  const SBool   s84 = queue_12[84];
  const SBool   s85 = queue_12[85];
  const SBool   s86 = queue_12[86];
  const SBool   s87 = queue_12[87];
  const SBool   s88 = queue_12[88];
  const SBool   s89 = queue_12[89];
  const SBool   s90 = queue_12[90];
  const SBool   s91 = queue_12[91];
  const SBool   s92 = queue_12[92];
  const SBool   s93 = queue_12[93];
  const SBool   s94 = queue_12[94];
  const SBool   s95 = queue_12[95];
  const SBool   s96 = queue_12[96];
  const SBool   s97 = queue_12[97];
  const SBool   s98 = queue_12[98];
  const SBool   s99 = queue_12[99];
  const SBool   s100 = queue_12[100];
  const SBool   s101 = queue_12[101];
  const SBool   s102 = queue_12[102];
  const SBool   s103 = queue_12[103];
  const SBool   s104 = queue_12[104];
  const SBool   s105 = queue_12[105];
  const SBool   s106 = queue_12[106];
  const SBool   s107 = queue_12[107];
  const SBool   s108 = queue_12[108];
  const SBool   s109 = queue_12[109];
  const SBool   s110 = queue_12[110];
  const SBool   s111 = queue_12[111];
  const SBool   s112 = queue_12[112];
  const SBool   s113 = queue_12[113];
  const SBool   s114 = queue_12[114];
  const SBool   s115 = queue_12[115];
  const SBool   s116 = queue_12[116];
  const SBool   s117 = queue_12[117];
  const SBool   s118 = queue_12[118];
  const SBool   s119 = queue_12[119];
  const SBool   s120 = queue_12[120];
  const SBool   s121 = queue_12[121];
  const SBool   s122 = queue_12[122];
  const SBool   s123 = queue_12[123];
  const SBool   s124 = queue_12[124];
  const SBool   s125 = queue_12[125];
  const SBool   s126 = queue_12[126];
  const SBool   s127 = queue_12[127];
  const SBool   s128 = queue_12[128];
  const SBool   s129 = queue_12[129];
  const SBool   s130 = queue_12[130];
  const SBool   s131 = queue_12[131];
  const SBool   s132 = queue_12[132];
  const SBool   s133 = queue_12[133];
  const SBool   s134 = queue_12[134];
  const SBool   s135 = queue_12[135];
  const SBool   s136 = queue_12[136];
  const SBool   s137 = queue_12[137];
  const SBool   s138 = queue_12[138];
  const SBool   s139 = queue_12[139];
  const SBool   s140 = queue_12[140];
  const SBool   s141 = queue_12[141];
  const SBool   s142 = queue_12[142];
  const SBool   s143 = queue_12[143];
  const SBool   s144 = queue_12[144];
  const SBool   s145 = queue_12[145];
  const SBool   s146 = queue_12[146];
  const SBool   s147 = queue_12[147];
  const SBool   s148 = queue_12[148];
  const SBool   s149 = queue_12[149];
  const SBool   s150 = queue_12[150];
  const SBool   s151 = queue_12[151];
  const SBool   s152 = queue_12[152];
  const SBool   s153 = queue_12[153];
  const SBool   s154 = queue_12[154];
  const SBool   s155 = queue_12[155];
  const SBool   s156 = queue_12[156];
  const SBool   s157 = queue_12[157];
  const SBool   s158 = queue_12[158];
  const SBool   s159 = queue_12[159];
  const SBool   s160 = queue_12[160];
  const SBool   s161 = queue_12[161];
  const SBool   s162 = queue_12[162];
  const SBool   s163 = queue_12[163];
  const SBool   s164 = queue_12[164];
  const SBool   s165 = queue_12[165];
  const SBool   s166 = queue_12[166];
  const SBool   s167 = queue_12[167];
  const SBool   s168 = queue_12[168];
  const SBool   s169 = queue_12[169];
  const SBool   s170 = queue_12[170];
  const SBool   s171 = queue_12[171];
  const SBool   s172 = queue_12[172];
  const SBool   s173 = queue_12[173];
  const SBool   s174 = queue_12[174];
  const SBool   s175 = queue_12[175];
  const SBool   s176 = queue_12[176];
  const SBool   s177 = queue_12[177];
  const SBool   s178 = queue_12[178];
  const SBool   s179 = queue_12[179];
  const SBool   s180 = queue_12[180];
  const SBool   s181 = queue_12[181];
  const SBool   s182 = queue_12[182];
  const SBool   s183 = queue_12[183];
  const SBool   s184 = queue_12[184];
  const SBool   s185 = queue_12[185];
  const SBool   s186 = queue_12[186];
  const SBool   s187 = queue_12[187];
  const SBool   s188 = queue_12[188];
  const SBool   s189 = queue_12[189];
  const SBool   s190 = queue_12[190];
  const SBool   s191 = queue_12[191];
  const SBool   s192 = queue_12[192];
  const SBool   s193 = queue_12[193];
  const SBool   s194 = queue_12[194];
  const SBool   s195 = queue_12[195];
  const SBool   s196 = queue_12[196];
  const SBool   s197 = queue_12[197];
  const SBool   s198 = queue_12[198];
  const SBool   s199 = queue_12[199];
  const SBool   s200 = queue_12[200];
  const SBool   s201 = queue_12[201];
  const SBool   s202 = queue_12[202];
  const SBool   s203 = queue_12[203];
  const SBool   s204 = queue_12[204];
  const SBool   s205 = queue_12[205];
  const SBool   s206 = queue_12[206];
  const SBool   s207 = queue_12[207];
  const SBool   s208 = queue_12[208];
  const SBool   s209 = queue_12[209];
  const SBool   s210 = queue_12[210];
  const SBool   s211 = queue_12[211];
  const SBool   s212 = queue_12[212];
  const SBool   s213 = queue_12[213];
  const SBool   s214 = queue_12[214];
  const SBool   s215 = queue_12[215];
  const SBool   s216 = queue_12[216];
  const SBool   s217 = queue_12[217];
  const SBool   s218 = queue_12[218];
  const SBool   s219 = queue_12[219];
  const SBool   s220 = queue_12[220];
  const SBool   s221 = queue_12[221];
  const SBool   s222 = queue_12[222];
  const SBool   s223 = queue_12[223];
  const SBool   s224 = queue_12[224];
  const SBool   s225 = queue_12[225];
  const SBool   s226 = queue_12[226];
  const SBool   s227 = queue_12[227];
  const SBool   s228 = queue_12[228];
  const SBool   s229 = queue_12[229];
  const SBool   s230 = queue_12[230];
  const SBool   s231 = queue_12[231];
  const SBool   s232 = queue_12[232];
  const SBool   s233 = queue_12[233];
  const SBool   s234 = queue_12[234];
  const SBool   s235 = queue_12[235];
  const SBool   s236 = queue_12[236];
  const SBool   s237 = queue_12[237];
  const SBool   s238 = queue_12[238];
  const SBool   s239 = queue_12[239];
  const SBool   s240 = queue_12[240];
  const SBool   s241 = queue_12[241];
  const SBool   s242 = queue_12[242];
  const SBool   s243 = queue_12[243];
  const SBool   s244 = queue_12[244];
  const SBool   s245 = queue_12[245];
  const SBool   s246 = queue_12[246];
  const SBool   s247 = queue_12[247];
  const SBool   s248 = queue_12[248];
  const SBool   s249 = queue_12[249];
  const SBool   s250 = queue_12[250];
  const SBool   s251 = queue_12[251];
  const SBool   s252 = queue_12[252];
  const SBool   s253 = queue_12[253];
  const SBool   s254 = queue_12[254];
  const SBool   s255 = queue_12[255];
  const SWord32 s256 = ptr_12;
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
      s253, s254, s255
  };
  const SWord32 s258 = (0x00000100UL == 0) ? s256 : (s256 % 0x00000100UL);
  const SBool   s259 = table0[s258];

  return s259;
}
