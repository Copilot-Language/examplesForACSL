/* File: "observer_obs1.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "internal.h"

/* User given declarations: */
/*test 005*/
/*ACSL to write
 s7
*/
/*@
 assigns \nothing;
 ensures \result == (queue_7[ptr_7]);
*/

SBool observer_obs1(const SBool *queue_7, const SWord32 ptr_7)
{
  const SBool   s0 = queue_7[0];
  const SBool   s1 = queue_7[1];
  const SBool   s2 = queue_7[2];
  const SBool   s3 = queue_7[3];
  const SBool   s4 = queue_7[4];
  const SBool   s5 = queue_7[5];
  const SBool   s6 = queue_7[6];
  const SBool   s7 = queue_7[7];
  const SBool   s8 = queue_7[8];
  const SBool   s9 = queue_7[9];
  const SBool   s10 = queue_7[10];
  const SBool   s11 = queue_7[11];
  const SBool   s12 = queue_7[12];
  const SBool   s13 = queue_7[13];
  const SBool   s14 = queue_7[14];
  const SBool   s15 = queue_7[15];
  const SBool   s16 = queue_7[16];
  const SBool   s17 = queue_7[17];
  const SBool   s18 = queue_7[18];
  const SBool   s19 = queue_7[19];
  const SBool   s20 = queue_7[20];
  const SBool   s21 = queue_7[21];
  const SBool   s22 = queue_7[22];
  const SBool   s23 = queue_7[23];
  const SBool   s24 = queue_7[24];
  const SBool   s25 = queue_7[25];
  const SBool   s26 = queue_7[26];
  const SBool   s27 = queue_7[27];
  const SBool   s28 = queue_7[28];
  const SBool   s29 = queue_7[29];
  const SBool   s30 = queue_7[30];
  const SBool   s31 = queue_7[31];
  const SBool   s32 = queue_7[32];
  const SBool   s33 = queue_7[33];
  const SBool   s34 = queue_7[34];
  const SBool   s35 = queue_7[35];
  const SBool   s36 = queue_7[36];
  const SBool   s37 = queue_7[37];
  const SBool   s38 = queue_7[38];
  const SBool   s39 = queue_7[39];
  const SBool   s40 = queue_7[40];
  const SBool   s41 = queue_7[41];
  const SBool   s42 = queue_7[42];
  const SBool   s43 = queue_7[43];
  const SBool   s44 = queue_7[44];
  const SBool   s45 = queue_7[45];
  const SBool   s46 = queue_7[46];
  const SBool   s47 = queue_7[47];
  const SBool   s48 = queue_7[48];
  const SBool   s49 = queue_7[49];
  const SBool   s50 = queue_7[50];
  const SBool   s51 = queue_7[51];
  const SBool   s52 = queue_7[52];
  const SBool   s53 = queue_7[53];
  const SBool   s54 = queue_7[54];
  const SBool   s55 = queue_7[55];
  const SBool   s56 = queue_7[56];
  const SBool   s57 = queue_7[57];
  const SBool   s58 = queue_7[58];
  const SBool   s59 = queue_7[59];
  const SBool   s60 = queue_7[60];
  const SBool   s61 = queue_7[61];
  const SBool   s62 = queue_7[62];
  const SBool   s63 = queue_7[63];
  const SBool   s64 = queue_7[64];
  const SBool   s65 = queue_7[65];
  const SBool   s66 = queue_7[66];
  const SBool   s67 = queue_7[67];
  const SBool   s68 = queue_7[68];
  const SBool   s69 = queue_7[69];
  const SBool   s70 = queue_7[70];
  const SBool   s71 = queue_7[71];
  const SBool   s72 = queue_7[72];
  const SBool   s73 = queue_7[73];
  const SBool   s74 = queue_7[74];
  const SBool   s75 = queue_7[75];
  const SBool   s76 = queue_7[76];
  const SBool   s77 = queue_7[77];
  const SBool   s78 = queue_7[78];
  const SBool   s79 = queue_7[79];
  const SBool   s80 = queue_7[80];
  const SBool   s81 = queue_7[81];
  const SBool   s82 = queue_7[82];
  const SBool   s83 = queue_7[83];
  const SBool   s84 = queue_7[84];
  const SBool   s85 = queue_7[85];
  const SBool   s86 = queue_7[86];
  const SBool   s87 = queue_7[87];
  const SBool   s88 = queue_7[88];
  const SBool   s89 = queue_7[89];
  const SBool   s90 = queue_7[90];
  const SBool   s91 = queue_7[91];
  const SBool   s92 = queue_7[92];
  const SBool   s93 = queue_7[93];
  const SBool   s94 = queue_7[94];
  const SBool   s95 = queue_7[95];
  const SBool   s96 = queue_7[96];
  const SBool   s97 = queue_7[97];
  const SBool   s98 = queue_7[98];
  const SBool   s99 = queue_7[99];
  const SBool   s100 = queue_7[100];
  const SBool   s101 = queue_7[101];
  const SBool   s102 = queue_7[102];
  const SBool   s103 = queue_7[103];
  const SBool   s104 = queue_7[104];
  const SBool   s105 = queue_7[105];
  const SBool   s106 = queue_7[106];
  const SBool   s107 = queue_7[107];
  const SBool   s108 = queue_7[108];
  const SBool   s109 = queue_7[109];
  const SBool   s110 = queue_7[110];
  const SBool   s111 = queue_7[111];
  const SBool   s112 = queue_7[112];
  const SBool   s113 = queue_7[113];
  const SBool   s114 = queue_7[114];
  const SBool   s115 = queue_7[115];
  const SBool   s116 = queue_7[116];
  const SBool   s117 = queue_7[117];
  const SBool   s118 = queue_7[118];
  const SBool   s119 = queue_7[119];
  const SBool   s120 = queue_7[120];
  const SBool   s121 = queue_7[121];
  const SBool   s122 = queue_7[122];
  const SBool   s123 = queue_7[123];
  const SBool   s124 = queue_7[124];
  const SBool   s125 = queue_7[125];
  const SBool   s126 = queue_7[126];
  const SBool   s127 = queue_7[127];
  const SBool   s128 = queue_7[128];
  const SBool   s129 = queue_7[129];
  const SBool   s130 = queue_7[130];
  const SBool   s131 = queue_7[131];
  const SBool   s132 = queue_7[132];
  const SBool   s133 = queue_7[133];
  const SBool   s134 = queue_7[134];
  const SBool   s135 = queue_7[135];
  const SBool   s136 = queue_7[136];
  const SBool   s137 = queue_7[137];
  const SBool   s138 = queue_7[138];
  const SBool   s139 = queue_7[139];
  const SBool   s140 = queue_7[140];
  const SBool   s141 = queue_7[141];
  const SBool   s142 = queue_7[142];
  const SBool   s143 = queue_7[143];
  const SBool   s144 = queue_7[144];
  const SBool   s145 = queue_7[145];
  const SBool   s146 = queue_7[146];
  const SBool   s147 = queue_7[147];
  const SBool   s148 = queue_7[148];
  const SBool   s149 = queue_7[149];
  const SBool   s150 = queue_7[150];
  const SBool   s151 = queue_7[151];
  const SBool   s152 = queue_7[152];
  const SBool   s153 = queue_7[153];
  const SBool   s154 = queue_7[154];
  const SBool   s155 = queue_7[155];
  const SBool   s156 = queue_7[156];
  const SBool   s157 = queue_7[157];
  const SBool   s158 = queue_7[158];
  const SBool   s159 = queue_7[159];
  const SBool   s160 = queue_7[160];
  const SBool   s161 = queue_7[161];
  const SBool   s162 = queue_7[162];
  const SBool   s163 = queue_7[163];
  const SBool   s164 = queue_7[164];
  const SBool   s165 = queue_7[165];
  const SBool   s166 = queue_7[166];
  const SBool   s167 = queue_7[167];
  const SBool   s168 = queue_7[168];
  const SBool   s169 = queue_7[169];
  const SBool   s170 = queue_7[170];
  const SBool   s171 = queue_7[171];
  const SBool   s172 = queue_7[172];
  const SBool   s173 = queue_7[173];
  const SBool   s174 = queue_7[174];
  const SBool   s175 = queue_7[175];
  const SBool   s176 = queue_7[176];
  const SBool   s177 = queue_7[177];
  const SBool   s178 = queue_7[178];
  const SBool   s179 = queue_7[179];
  const SBool   s180 = queue_7[180];
  const SBool   s181 = queue_7[181];
  const SBool   s182 = queue_7[182];
  const SBool   s183 = queue_7[183];
  const SBool   s184 = queue_7[184];
  const SBool   s185 = queue_7[185];
  const SBool   s186 = queue_7[186];
  const SBool   s187 = queue_7[187];
  const SBool   s188 = queue_7[188];
  const SBool   s189 = queue_7[189];
  const SBool   s190 = queue_7[190];
  const SBool   s191 = queue_7[191];
  const SBool   s192 = queue_7[192];
  const SBool   s193 = queue_7[193];
  const SBool   s194 = queue_7[194];
  const SBool   s195 = queue_7[195];
  const SBool   s196 = queue_7[196];
  const SBool   s197 = queue_7[197];
  const SBool   s198 = queue_7[198];
  const SBool   s199 = queue_7[199];
  const SBool   s200 = queue_7[200];
  const SBool   s201 = queue_7[201];
  const SBool   s202 = queue_7[202];
  const SBool   s203 = queue_7[203];
  const SBool   s204 = queue_7[204];
  const SBool   s205 = queue_7[205];
  const SBool   s206 = queue_7[206];
  const SBool   s207 = queue_7[207];
  const SBool   s208 = queue_7[208];
  const SBool   s209 = queue_7[209];
  const SBool   s210 = queue_7[210];
  const SBool   s211 = queue_7[211];
  const SBool   s212 = queue_7[212];
  const SBool   s213 = queue_7[213];
  const SBool   s214 = queue_7[214];
  const SBool   s215 = queue_7[215];
  const SBool   s216 = queue_7[216];
  const SBool   s217 = queue_7[217];
  const SBool   s218 = queue_7[218];
  const SBool   s219 = queue_7[219];
  const SBool   s220 = queue_7[220];
  const SBool   s221 = queue_7[221];
  const SBool   s222 = queue_7[222];
  const SBool   s223 = queue_7[223];
  const SBool   s224 = queue_7[224];
  const SBool   s225 = queue_7[225];
  const SBool   s226 = queue_7[226];
  const SBool   s227 = queue_7[227];
  const SBool   s228 = queue_7[228];
  const SBool   s229 = queue_7[229];
  const SBool   s230 = queue_7[230];
  const SBool   s231 = queue_7[231];
  const SBool   s232 = queue_7[232];
  const SBool   s233 = queue_7[233];
  const SBool   s234 = queue_7[234];
  const SBool   s235 = queue_7[235];
  const SBool   s236 = queue_7[236];
  const SBool   s237 = queue_7[237];
  const SBool   s238 = queue_7[238];
  const SBool   s239 = queue_7[239];
  const SBool   s240 = queue_7[240];
  const SBool   s241 = queue_7[241];
  const SBool   s242 = queue_7[242];
  const SBool   s243 = queue_7[243];
  const SBool   s244 = queue_7[244];
  const SBool   s245 = queue_7[245];
  const SBool   s246 = queue_7[246];
  const SBool   s247 = queue_7[247];
  const SBool   s248 = queue_7[248];
  const SBool   s249 = queue_7[249];
  const SBool   s250 = queue_7[250];
  const SBool   s251 = queue_7[251];
  const SBool   s252 = queue_7[252];
  const SBool   s253 = queue_7[253];
  const SBool   s254 = queue_7[254];
  const SBool   s255 = queue_7[255];
  const SWord32 s256 = ptr_7;
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