/* File: "update_state_10.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 (s5 && s3)
*/
/*@
 assigns \nothing;
 ensures \result == (((queue_5[ptr_5]) && (queue_3[ptr_3])));
*/
SBool update_state_10(const SBool *queue_5, const SWord32 ptr_5,
                      const SBool *queue_3, const SWord32 ptr_3)
{
  const SBool   s0 = queue_5[0];
  const SBool   s1 = queue_5[1];
  const SBool   s2 = queue_5[2];
  const SBool   s3 = queue_5[3];
  const SBool   s4 = queue_5[4];
  const SBool   s5 = queue_5[5];
  const SWord32 s6 = ptr_5;
  const SBool   s7 = queue_3[0];
  const SWord32 s8 = ptr_3;
  const SBool table0[] = {
      s0, s1, s2, s3, s4, s5
  };
  const SWord32 s10 = (0x00000006UL == 0) ? s6 : (s6 % 0x00000006UL);
  const SBool   s11 = table0[s10];
  const SBool   s12 = s7 && s11;

  return s12;
}
