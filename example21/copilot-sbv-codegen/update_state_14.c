/* File: "update_state_14.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 s14
*/
/*@
 assigns \nothing;
 ensures \result == (queue_14[ptr_14]);
*/

SBool update_state_14(const SBool *queue_14, const SWord32 ptr_14)
{
  const SBool   s0 = queue_14[0];
  const SBool   s1 = queue_14[1];
  const SBool   s2 = queue_14[2];
  const SBool   s3 = queue_14[3];
  const SBool   s4 = queue_14[4];
  const SBool   s5 = queue_14[5];
  const SBool   s6 = queue_14[6];
  const SBool   s7 = queue_14[7];
  const SBool   s8 = queue_14[8];
  const SBool   s9 = queue_14[9];
  const SBool   s10 = queue_14[10];
  const SBool   s11 = queue_14[11];
  const SBool   s12 = queue_14[12];
  const SBool   s13 = queue_14[13];
  const SBool   s14 = queue_14[14];
  const SBool   s15 = queue_14[15];
  const SBool   s16 = queue_14[16];
  const SBool   s17 = queue_14[17];
  const SBool   s18 = queue_14[18];
  const SBool   s19 = queue_14[19];
  const SBool   s20 = queue_14[20];
  const SBool   s21 = queue_14[21];
  const SBool   s22 = queue_14[22];
  const SBool   s23 = queue_14[23];
  const SBool   s24 = queue_14[24];
  const SBool   s25 = queue_14[25];
  const SBool   s26 = queue_14[26];
  const SBool   s27 = queue_14[27];
  const SBool   s28 = queue_14[28];
  const SBool   s29 = queue_14[29];
  const SBool   s30 = queue_14[30];
  const SBool   s31 = queue_14[31];
  const SBool   s32 = queue_14[32];
  const SBool   s33 = queue_14[33];
  const SBool   s34 = queue_14[34];
  const SBool   s35 = queue_14[35];
  const SBool   s36 = queue_14[36];
  const SBool   s37 = queue_14[37];
  const SBool   s38 = queue_14[38];
  const SBool   s39 = queue_14[39];
  const SBool   s40 = queue_14[40];
  const SBool   s41 = queue_14[41];
  const SBool   s42 = queue_14[42];
  const SBool   s43 = queue_14[43];
  const SBool   s44 = queue_14[44];
  const SBool   s45 = queue_14[45];
  const SBool   s46 = queue_14[46];
  const SBool   s47 = queue_14[47];
  const SBool   s48 = queue_14[48];
  const SBool   s49 = queue_14[49];
  const SBool   s50 = queue_14[50];
  const SBool   s51 = queue_14[51];
  const SBool   s52 = queue_14[52];
  const SBool   s53 = queue_14[53];
  const SBool   s54 = queue_14[54];
  const SBool   s55 = queue_14[55];
  const SBool   s56 = queue_14[56];
  const SBool   s57 = queue_14[57];
  const SBool   s58 = queue_14[58];
  const SBool   s59 = queue_14[59];
  const SBool   s60 = queue_14[60];
  const SBool   s61 = queue_14[61];
  const SBool   s62 = queue_14[62];
  const SBool   s63 = queue_14[63];
  const SWord32 s64 = ptr_14;
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