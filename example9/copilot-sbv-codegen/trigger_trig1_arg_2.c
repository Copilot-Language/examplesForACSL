/* File: "trigger_trig1_arg_2.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 s2
*/
/*@
 assigns \nothing;
 ensures \result == (queue_2[ptr_2]);
*/
SBool trigger_trig1_arg_2(const SBool *queue_2,
                          const SWord32 ptr_2)
{
  const SBool   s0 = queue_2[0];
  const SBool   s1 = queue_2[1];
  const SWord32 s2 = ptr_2;
  const SBool table0[] = {
      s0, s1
  };
  const SWord32 s4 = (0x00000002UL == 0) ? s2 : (s2 % 0x00000002UL);
  const SBool   s5 = table0[s4];

  return s5;
}
