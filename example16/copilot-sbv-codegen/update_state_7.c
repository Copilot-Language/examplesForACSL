/* File: "update_state_7.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 s7
*/
/*@
 assigns \nothing;
 ensures \result == (queue_7[ptr_7]);
*/
SBool update_state_7(const SBool *queue_7, const SWord32 ptr_7)
{
  const SBool   s0 = queue_7[0];
  const SBool   s1 = queue_7[1];
  const SWord32 s2 = ptr_7;
  const SBool table0[] = {
      s0, s1
  };
  const SWord32 s4 = (0x00000002UL == 0) ? s2 : (s2 % 0x00000002UL);
  const SBool   s5 = table0[s4];

  return s5;
}
