/* File: "update_state_15.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 s15
*/
/*@
 assigns \nothing;
 ensures \result == (queue_15[ptr_15]);
*/

SBool update_state_15(const SBool *queue_15, const SWord32 ptr_15)
{
  const SBool   s0 = queue_15[0];
  const SBool   s1 = queue_15[1];
  const SBool   s2 = queue_15[2];
  const SBool   s3 = queue_15[3];
  const SBool   s4 = queue_15[4];
  const SBool   s5 = queue_15[5];
  const SBool   s6 = queue_15[6];
  const SBool   s7 = queue_15[7];
  const SBool   s8 = queue_15[8];
  const SBool   s9 = queue_15[9];
  const SBool   s10 = queue_15[10];
  const SBool   s11 = queue_15[11];
  const SBool   s12 = queue_15[12];
  const SBool   s13 = queue_15[13];
  const SBool   s14 = queue_15[14];
  const SBool   s15 = queue_15[15];
  const SBool   s16 = queue_15[16];
  const SBool   s17 = queue_15[17];
  const SBool   s18 = queue_15[18];
  const SBool   s19 = queue_15[19];
  const SBool   s20 = queue_15[20];
  const SBool   s21 = queue_15[21];
  const SBool   s22 = queue_15[22];
  const SBool   s23 = queue_15[23];
  const SBool   s24 = queue_15[24];
  const SBool   s25 = queue_15[25];
  const SBool   s26 = queue_15[26];
  const SBool   s27 = queue_15[27];
  const SBool   s28 = queue_15[28];
  const SBool   s29 = queue_15[29];
  const SBool   s30 = queue_15[30];
  const SBool   s31 = queue_15[31];
  const SWord32 s32 = ptr_15;
  const SBool table0[] = {
       s0,  s1,  s2,  s3,  s4,  s5,  s6,  s7,  s8,  s9, s10, s11, s12,
      s13, s14, s15, s16, s17, s18, s19, s20, s21, s22, s23, s24, s25,
      s26, s27, s28, s29, s30, s31
  };
  const SWord32 s34 = (0x00000020UL == 0) ? s32 : (s32 % 0x00000020UL);
  const SBool   s35 = table0[s34];

  return s35;
}