/* File: "update_state_17.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 s17
*/
/*@
 assigns \nothing;
 ensures \result == (queue_17[ptr_17]);
*/
SBool update_state_17(const SBool *queue_17, const SWord32 ptr_17)
{
  const SBool   s0 = queue_17[0];
  const SBool   s1 = queue_17[1];
  const SBool   s2 = queue_17[2];
  const SBool   s3 = queue_17[3];
  const SBool   s4 = queue_17[4];
  const SBool   s5 = queue_17[5];
  const SBool   s6 = queue_17[6];
  const SBool   s7 = queue_17[7];
  const SWord32 s8 = ptr_17;
  const SBool table0[] = {
      s0, s1, s2, s3, s4, s5, s6, s7
  };
  const SWord32 s10 = (0x00000008UL == 0) ? s8 : (s8 % 0x00000008UL);
  const SBool   s11 = table0[s10];

  return s11;
}
