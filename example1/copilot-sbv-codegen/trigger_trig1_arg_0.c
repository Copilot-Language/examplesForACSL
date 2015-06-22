/* File: "trigger_trig1_arg_0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/*ACSL following*/
/*test 003*/
/*ACSL to write
 (s1 < 3)
*/
/*@
 assigns \nothing;
 ensures \result == (queue_1[ptr_1] < 3);
*/
SBool trigger_trig1_arg_0(const SWord8 *queue_1,
                          const SWord32 ptr_1)
{
  const SWord8  s0 = queue_1[0];
  const SWord8  s1 = queue_1[1];
  const SWord32 s2 = ptr_1;
  const SWord8 table0[] = {
      s0, s1
  };
  const SWord32 s4 = (0x00000002UL == 0) ? s2 : (s2 % 0x00000002UL);
  const SWord8  s5 = table0[s4];
  const SBool   s7 = s5 < 3;

  return s7;
}
