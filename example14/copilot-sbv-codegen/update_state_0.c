/* File: "update_state_0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/*ACSL following*/
/*test 001*/
/*ACSL to write
 s1
*/
/*@
 assigns \nothing;
 ensures \result == queue_1[ptr_1];
*/
SBool update_state_0(const SBool *queue_1, const SWord32 ptr_1)
{
  const SBool   s0 = queue_1[0];
  const SBool   s1 = queue_1[1];
  const SBool   s2 = queue_1[2];
  const SBool   s3 = queue_1[3];
  const SBool   s4 = queue_1[4];
  const SBool   s5 = queue_1[5];
  const SBool   s6 = queue_1[6];
  const SWord32 s7 = ptr_1;
  const SBool table0[] = {
      s0, s1, s2, s3, s4, s5, s6
  };
  const SWord32 s9 = (0x00000007UL == 0) ? s7 : (s7 % 0x00000007UL);
  const SBool   s10 = table0[s9];

  return s10;
}
