/* File: "update_state_4.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 ((not (s0 || s2) || s3) && s4)
*/
/*@
 assigns \nothing;
 ensures \result == (((((! ((((queue_0[ptr_0]) || (queue_2[ptr_2]))))) || (queue_3[ptr_3]))) && (queue_4[ptr_4])));
*/
SBool update_state_4(const SBool *queue_0, const SWord32 ptr_0,
                     const SBool *queue_2, const SWord32 ptr_2, const SBool *queue_3,
                     const SWord32 ptr_3, const SBool *queue_4, const SWord32 ptr_4)
{
  const SBool   s0 = queue_0[0];
  const SWord32 s1 = ptr_0;
  const SBool   s2 = queue_2[0];
  const SWord32 s3 = ptr_2;
  const SBool   s4 = queue_3[0];
  const SBool   s5 = queue_3[1];
  const SBool   s6 = queue_3[2];
  const SWord32 s7 = ptr_3;
  const SBool   s8 = queue_4[0];
  const SWord32 s9 = ptr_4;
  const SBool table0[] = {
      s4, s5, s6
  };
  const SBool   s10 = s0 || s2;
  const SBool   s11 = !s10;
  const SWord32 s13 = (0x00000003UL == 0) ? s7 : (s7 % 0x00000003UL);
  const SBool   s14 = table0[s13];
  const SBool   s15 = s11 || s14;
  const SBool   s16 = s8 && s15;

  return s16;
}
