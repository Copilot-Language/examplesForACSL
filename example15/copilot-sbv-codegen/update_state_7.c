/* File: "update_state_7.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 s8
*/
/*@
 assigns \nothing;
 ensures \result == (queue_8[ptr_8]);
*/
SBool update_state_7(const SBool *queue_8, const SWord32 ptr_8)
{
  const SBool   s0 = queue_8[0];
  const SBool   s1 = queue_8[1];
  const SBool   s2 = queue_8[2];
  const SBool   s3 = queue_8[3];
  const SBool   s4 = queue_8[4];
  const SBool   s5 = queue_8[5];
  const SWord32 s6 = ptr_8;
  const SBool table0[] = {
      s0, s1, s2, s3, s4, s5
  };
  const SWord32 s8 = (0x00000006UL == 0) ? s6 : (s6 % 0x00000006UL);
  const SBool   s9 = table0[s8];

  return s9;
}
