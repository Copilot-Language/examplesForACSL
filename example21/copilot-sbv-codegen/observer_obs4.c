/* File: "observer_obs4.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 005*/
/*ACSL to write
 s4
*/
/*@
 assigns \nothing;
 ensures \result == (queue_4[ptr_4]);
*/
SBool observer_obs4(const SBool *queue_4, const SWord32 ptr_4)
{
  const SBool   s0 = queue_4[0];
  const SBool   s1 = queue_4[1];
  const SBool   s2 = queue_4[2];
  const SBool   s3 = queue_4[3];
  const SBool   s4 = queue_4[4];
  const SBool   s5 = queue_4[5];
  const SBool   s6 = queue_4[6];
  const SBool   s7 = queue_4[7];
  const SBool   s8 = queue_4[8];
  const SBool   s9 = queue_4[9];
  const SBool   s10 = queue_4[10];
  const SBool   s11 = queue_4[11];
  const SBool   s12 = queue_4[12];
  const SBool   s13 = queue_4[13];
  const SBool   s14 = queue_4[14];
  const SBool   s15 = queue_4[15];
  const SBool   s16 = queue_4[16];
  const SBool   s17 = queue_4[17];
  const SBool   s18 = queue_4[18];
  const SBool   s19 = queue_4[19];
  const SBool   s20 = queue_4[20];
  const SBool   s21 = queue_4[21];
  const SBool   s22 = queue_4[22];
  const SBool   s23 = queue_4[23];
  const SBool   s24 = queue_4[24];
  const SBool   s25 = queue_4[25];
  const SBool   s26 = queue_4[26];
  const SBool   s27 = queue_4[27];
  const SBool   s28 = queue_4[28];
  const SBool   s29 = queue_4[29];
  const SBool   s30 = queue_4[30];
  const SBool   s31 = queue_4[31];
  const SWord32 s32 = ptr_4;
  const SBool table0[] = {
       s0,  s1,  s2,  s3,  s4,  s5,  s6,  s7,  s8,  s9, s10, s11, s12,
      s13, s14, s15, s16, s17, s18, s19, s20, s21, s22, s23, s24, s25,
      s26, s27, s28, s29, s30, s31
  };
  const SWord32 s34 = (0x00000020UL == 0) ? s32 : (s32 % 0x00000020UL);
  const SBool   s35 = table0[s34];

  return s35;
}
