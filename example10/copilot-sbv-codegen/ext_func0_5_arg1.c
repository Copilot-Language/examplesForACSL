/* File: "ext_func0_5_arg1.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 s0
*/
/*@
 assigns \nothing;
 ensures \result == (queue_0[ptr_0]);
*/
SWord16 ext_func0_5_arg1(const SWord16 *queue_0,
                         const SWord32 ptr_0)
{
  const SWord16 s0 = queue_0[0];
  const SWord16 s1 = queue_0[1];
  const SWord32 s2 = ptr_0;
  const SWord16 table0[] = {
      s0, s1
  };
  const SWord32 s4 = (0x00000002UL == 0) ? s2 : (s2 % 0x00000002UL);
  const SWord16 s5 = table0[s4];

  return s5;
}
