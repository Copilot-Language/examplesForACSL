/* File: "observer_obs3.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "internal.h"

/* User given declarations: */
/*test 005*/
/*ACSL to write
 s5
*/
/*@
 assigns \nothing;
 ensures \result == (queue_5[ptr_5]);
*/
SBool observer_obs3(const SBool *queue_5, const SWord32 ptr_5)
{
  const SBool   s0 = queue_5[0];
  const SBool   s1 = queue_5[1];
  const SBool   s2 = queue_5[2];
  const SBool   s3 = queue_5[3];
  const SBool   s4 = queue_5[4];
  const SBool   s5 = queue_5[5];
  const SBool   s6 = queue_5[6];
  const SBool   s7 = queue_5[7];
  const SBool   s8 = queue_5[8];
  const SBool   s9 = queue_5[9];
  const SBool   s10 = queue_5[10];
  const SBool   s11 = queue_5[11];
  const SBool   s12 = queue_5[12];
  const SBool   s13 = queue_5[13];
  const SBool   s14 = queue_5[14];
  const SBool   s15 = queue_5[15];
  const SBool   s16 = queue_5[16];
  const SBool   s17 = queue_5[17];
  const SBool   s18 = queue_5[18];
  const SBool   s19 = queue_5[19];
  const SBool   s20 = queue_5[20];
  const SBool   s21 = queue_5[21];
  const SBool   s22 = queue_5[22];
  const SBool   s23 = queue_5[23];
  const SBool   s24 = queue_5[24];
  const SBool   s25 = queue_5[25];
  const SBool   s26 = queue_5[26];
  const SBool   s27 = queue_5[27];
  const SBool   s28 = queue_5[28];
  const SBool   s29 = queue_5[29];
  const SBool   s30 = queue_5[30];
  const SBool   s31 = queue_5[31];
  const SBool   s32 = queue_5[32];
  const SBool   s33 = queue_5[33];
  const SBool   s34 = queue_5[34];
  const SBool   s35 = queue_5[35];
  const SBool   s36 = queue_5[36];
  const SBool   s37 = queue_5[37];
  const SBool   s38 = queue_5[38];
  const SBool   s39 = queue_5[39];
  const SBool   s40 = queue_5[40];
  const SBool   s41 = queue_5[41];
  const SBool   s42 = queue_5[42];
  const SBool   s43 = queue_5[43];
  const SBool   s44 = queue_5[44];
  const SBool   s45 = queue_5[45];
  const SBool   s46 = queue_5[46];
  const SBool   s47 = queue_5[47];
  const SBool   s48 = queue_5[48];
  const SBool   s49 = queue_5[49];
  const SBool   s50 = queue_5[50];
  const SBool   s51 = queue_5[51];
  const SBool   s52 = queue_5[52];
  const SBool   s53 = queue_5[53];
  const SBool   s54 = queue_5[54];
  const SBool   s55 = queue_5[55];
  const SBool   s56 = queue_5[56];
  const SBool   s57 = queue_5[57];
  const SBool   s58 = queue_5[58];
  const SBool   s59 = queue_5[59];
  const SBool   s60 = queue_5[60];
  const SBool   s61 = queue_5[61];
  const SBool   s62 = queue_5[62];
  const SBool   s63 = queue_5[63];
  const SWord32 s64 = ptr_5;
  const SBool table0[] = {
       s0,  s1,  s2,  s3,  s4,  s5,  s6,  s7,  s8,  s9, s10, s11, s12,
      s13, s14, s15, s16, s17, s18, s19, s20, s21, s22, s23, s24, s25,
      s26, s27, s28, s29, s30, s31, s32, s33, s34, s35, s36, s37, s38,
      s39, s40, s41, s42, s43, s44, s45, s46, s47, s48, s49, s50, s51,
      s52, s53, s54, s55, s56, s57, s58, s59, s60, s61, s62, s63
  };
  const SWord32 s66 = (0x00000040UL == 0) ? s64 : (s64 % 0x00000040UL);
  const SBool   s67 = table0[s66];

  return s67;
}
