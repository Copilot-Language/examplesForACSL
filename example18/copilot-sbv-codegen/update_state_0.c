/* File: "update_state_0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 s0
*/
/*@
 assigns \nothing;
 ensures \result == (queue_0[ptr_0]);
*/
SBool update_state_0(const SBool *queue_0, const SWord32 ptr_0)
{
  const SBool   s0 = queue_0[0];
  const SBool   s1 = queue_0[1];
  const SBool   s2 = queue_0[2];
  const SBool   s3 = queue_0[3];
  const SBool   s4 = queue_0[4];
  const SBool   s5 = queue_0[5];
  const SBool   s6 = queue_0[6];
  const SWord32 s7 = ptr_0;
  const SBool table0[] = {
      s0, s1, s2, s3, s4, s5, s6
  };
  const SWord32 s9 = (0x00000007UL == 0) ? s7 : (s7 % 0x00000007UL);
  const SBool   s10 = table0[s9];

  return s10;
}
