/* File: "update_state_3.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/*ACSL following*/
/*test 001*/
/*ACSL to write
 (if s1 then s4 else (if s6 then s2 else s3))
*/
/*@
 assigns \nothing;
 ensures \result == ( queue_1[ptr_1] ? queue_4[ptr_4] : ( queue_6[ptr_6] ? queue_2[ptr_2] : queue_3[ptr_3]));
*/
SWord16 update_state_3(const SBool *queue_1, const SWord32 ptr_1,
                       const SWord16 *queue_4, const SWord32 ptr_4, const SBool *queue_6,
                       const SWord32 ptr_6, const SWord16 *queue_2, const SWord32 ptr_2,
                       const SWord16 *queue_3, const SWord32 ptr_3)
{
  const SBool   s0 = queue_1[0];
  const SBool   s1 = queue_1[1];
  const SBool   s2 = queue_1[2];
  const SBool   s3 = queue_1[3];
  const SBool   s4 = queue_1[4];
  const SBool   s5 = queue_1[5];
  const SBool   s6 = queue_1[6];
  const SBool   s7 = queue_1[7];
  const SBool   s8 = queue_1[8];
  const SBool   s9 = queue_1[9];
  const SBool   s10 = queue_1[10];
  const SBool   s11 = queue_1[11];
  const SWord32 s12 = ptr_1;
  const SWord16 s13 = queue_4[0];
  const SWord32 s14 = ptr_4;
  const SBool   s15 = queue_6[0];
  const SBool   s16 = queue_6[1];
  const SBool   s17 = queue_6[2];
  const SBool   s18 = queue_6[3];
  const SBool   s19 = queue_6[4];
  const SWord32 s20 = ptr_6;
  const SWord16 s21 = queue_2[0];
  const SWord32 s22 = ptr_2;
  const SWord16 s23 = queue_3[0];
  const SWord32 s24 = ptr_3;
  const SBool table0[] = {
       s0,  s1,  s2,  s3,  s4,  s5,  s6,  s7,  s8,  s9, s10, s11
  };
  const SBool table1[] = {
      s15, s16, s17, s18, s19
  };
  const SWord32 s26 = (0x0000000cUL == 0) ? s12 : (s12 % 0x0000000cUL);
  const SBool   s27 = table0[s26];
  const SWord32 s29 = (0x00000005UL == 0) ? s20 : (s20 % 0x00000005UL);
  const SBool   s30 = table1[s29];
  const SWord16 s31 = s30 ? s21 : s23;
  const SWord16 s32 = s27 ? s13 : s31;

  return s32;
}
