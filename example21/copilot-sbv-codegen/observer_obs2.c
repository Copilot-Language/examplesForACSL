/* File: "observer_obs2.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 005*/
/*ACSL to write
 s6
*/
/*@
 assigns \nothing;
 ensures \result == (queue_6[ptr_6]);
*/
SBool observer_obs2(const SBool *queue_6, const SWord32 ptr_6)
{
  const SBool   s0 = queue_6[0];
  const SBool   s1 = queue_6[1];
  const SBool   s2 = queue_6[2];
  const SBool   s3 = queue_6[3];
  const SBool   s4 = queue_6[4];
  const SBool   s5 = queue_6[5];
  const SBool   s6 = queue_6[6];
  const SBool   s7 = queue_6[7];
  const SBool   s8 = queue_6[8];
  const SBool   s9 = queue_6[9];
  const SBool   s10 = queue_6[10];
  const SBool   s11 = queue_6[11];
  const SBool   s12 = queue_6[12];
  const SBool   s13 = queue_6[13];
  const SBool   s14 = queue_6[14];
  const SBool   s15 = queue_6[15];
  const SBool   s16 = queue_6[16];
  const SBool   s17 = queue_6[17];
  const SBool   s18 = queue_6[18];
  const SBool   s19 = queue_6[19];
  const SBool   s20 = queue_6[20];
  const SBool   s21 = queue_6[21];
  const SBool   s22 = queue_6[22];
  const SBool   s23 = queue_6[23];
  const SBool   s24 = queue_6[24];
  const SBool   s25 = queue_6[25];
  const SBool   s26 = queue_6[26];
  const SBool   s27 = queue_6[27];
  const SBool   s28 = queue_6[28];
  const SBool   s29 = queue_6[29];
  const SBool   s30 = queue_6[30];
  const SBool   s31 = queue_6[31];
  const SBool   s32 = queue_6[32];
  const SBool   s33 = queue_6[33];
  const SBool   s34 = queue_6[34];
  const SBool   s35 = queue_6[35];
  const SBool   s36 = queue_6[36];
  const SBool   s37 = queue_6[37];
  const SBool   s38 = queue_6[38];
  const SBool   s39 = queue_6[39];
  const SBool   s40 = queue_6[40];
  const SBool   s41 = queue_6[41];
  const SBool   s42 = queue_6[42];
  const SBool   s43 = queue_6[43];
  const SBool   s44 = queue_6[44];
  const SBool   s45 = queue_6[45];
  const SBool   s46 = queue_6[46];
  const SBool   s47 = queue_6[47];
  const SBool   s48 = queue_6[48];
  const SBool   s49 = queue_6[49];
  const SBool   s50 = queue_6[50];
  const SBool   s51 = queue_6[51];
  const SBool   s52 = queue_6[52];
  const SBool   s53 = queue_6[53];
  const SBool   s54 = queue_6[54];
  const SBool   s55 = queue_6[55];
  const SBool   s56 = queue_6[56];
  const SBool   s57 = queue_6[57];
  const SBool   s58 = queue_6[58];
  const SBool   s59 = queue_6[59];
  const SBool   s60 = queue_6[60];
  const SBool   s61 = queue_6[61];
  const SBool   s62 = queue_6[62];
  const SBool   s63 = queue_6[63];
  const SBool   s64 = queue_6[64];
  const SBool   s65 = queue_6[65];
  const SBool   s66 = queue_6[66];
  const SBool   s67 = queue_6[67];
  const SBool   s68 = queue_6[68];
  const SBool   s69 = queue_6[69];
  const SBool   s70 = queue_6[70];
  const SBool   s71 = queue_6[71];
  const SBool   s72 = queue_6[72];
  const SBool   s73 = queue_6[73];
  const SBool   s74 = queue_6[74];
  const SBool   s75 = queue_6[75];
  const SBool   s76 = queue_6[76];
  const SBool   s77 = queue_6[77];
  const SBool   s78 = queue_6[78];
  const SBool   s79 = queue_6[79];
  const SBool   s80 = queue_6[80];
  const SBool   s81 = queue_6[81];
  const SBool   s82 = queue_6[82];
  const SBool   s83 = queue_6[83];
  const SBool   s84 = queue_6[84];
  const SBool   s85 = queue_6[85];
  const SBool   s86 = queue_6[86];
  const SBool   s87 = queue_6[87];
  const SBool   s88 = queue_6[88];
  const SBool   s89 = queue_6[89];
  const SBool   s90 = queue_6[90];
  const SBool   s91 = queue_6[91];
  const SBool   s92 = queue_6[92];
  const SBool   s93 = queue_6[93];
  const SBool   s94 = queue_6[94];
  const SBool   s95 = queue_6[95];
  const SBool   s96 = queue_6[96];
  const SBool   s97 = queue_6[97];
  const SBool   s98 = queue_6[98];
  const SBool   s99 = queue_6[99];
  const SBool   s100 = queue_6[100];
  const SBool   s101 = queue_6[101];
  const SBool   s102 = queue_6[102];
  const SBool   s103 = queue_6[103];
  const SBool   s104 = queue_6[104];
  const SBool   s105 = queue_6[105];
  const SBool   s106 = queue_6[106];
  const SBool   s107 = queue_6[107];
  const SBool   s108 = queue_6[108];
  const SBool   s109 = queue_6[109];
  const SBool   s110 = queue_6[110];
  const SBool   s111 = queue_6[111];
  const SBool   s112 = queue_6[112];
  const SBool   s113 = queue_6[113];
  const SBool   s114 = queue_6[114];
  const SBool   s115 = queue_6[115];
  const SBool   s116 = queue_6[116];
  const SBool   s117 = queue_6[117];
  const SBool   s118 = queue_6[118];
  const SBool   s119 = queue_6[119];
  const SBool   s120 = queue_6[120];
  const SBool   s121 = queue_6[121];
  const SBool   s122 = queue_6[122];
  const SBool   s123 = queue_6[123];
  const SBool   s124 = queue_6[124];
  const SBool   s125 = queue_6[125];
  const SBool   s126 = queue_6[126];
  const SBool   s127 = queue_6[127];
  const SWord32 s128 = ptr_6;
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
      s121, s122, s123, s124, s125, s126, s127
  };
  const SWord32 s130 = (0x00000080UL == 0) ? s128 : (s128 % 0x00000080UL);
  const SBool   s131 = table0[s130];

  return s131;
}
