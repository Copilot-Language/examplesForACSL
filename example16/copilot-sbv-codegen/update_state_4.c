/* File: "update_state_4.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 ((s5 && (s6 || not s7)) || s4)
*/
/*@
 assigns \nothing;
 ensures \result == (((((queue_5[ptr_5]) && (((queue_6[ptr_6]) || (! ((queue_7[ptr_7]))))))) || (queue_4[ptr_4])));
*/
SBool update_state_4(const SBool *queue_5, const SWord32 ptr_5,
                     const SBool *queue_6, const SWord32 ptr_6, const SBool *queue_7,
                     const SWord32 ptr_7, const SBool *queue_4, const SWord32 ptr_4)
{
  const SBool   s0 = queue_5[0];
  const SBool   s1 = queue_5[1];
  const SBool   s2 = queue_5[2];
  const SBool   s3 = queue_5[3];
  const SBool   s4 = queue_5[4];
  const SBool   s5 = queue_5[5];
  const SBool   s6 = queue_5[6];
  const SBool   s7 = queue_5[7];
  const SWord32 s8 = ptr_5;
  const SBool   s9 = queue_6[0];
  const SBool   s10 = queue_6[1];
  const SBool   s11 = queue_6[2];
  const SBool   s12 = queue_6[3];
  const SWord32 s13 = ptr_6;
  const SBool   s14 = queue_7[0];
  const SBool   s15 = queue_7[1];
  const SWord32 s16 = ptr_7;
  const SBool   s17 = queue_4[0];
  const SWord32 s18 = ptr_4;
  const SBool table0[] = {
      s0, s1, s2, s3, s4, s5, s6, s7
  };
  const SBool table1[] = {
       s9, s10, s11, s12
  };
  const SBool table2[] = {
      s14, s15
  };
  const SWord32 s20 = (0x00000008UL == 0) ? s8 : (s8 % 0x00000008UL);
  const SBool   s21 = table0[s20];
  const SWord32 s23 = (0x00000004UL == 0) ? s13 : (s13 % 0x00000004UL);
  const SBool   s24 = table1[s23];
  const SWord32 s26 = (0x00000002UL == 0) ? s16 : (s16 % 0x00000002UL);
  const SBool   s27 = table2[s26];
  const SBool   s28 = !s27;
  const SBool   s29 = s24 || s28;
  const SBool   s30 = s21 && s29;
  const SBool   s31 = s17 || s30;

  return s31;
}
