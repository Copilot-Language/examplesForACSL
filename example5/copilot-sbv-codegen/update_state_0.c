/* File: "update_state_0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 (if (s0 /= 4) then (s0 + 1) else 0)
*/
/*@
 assigns \nothing;
 ensures \result == (( (((queue_0[ptr_0]) != (4))) ? (((queue_0[ptr_0]) + (1))) : (0)));
*/
SWord8 update_state_0(const SWord8 *queue_0, const SWord32 ptr_0)
{
  const SWord8  s0 = queue_0[0];
  const SWord32 s1 = ptr_0;
  const SBool   s3 = s0 != 4;
  const SWord8  s5 = s0 + 1;
  const SWord8  s7 = s3 ? s5 : 0;

  return s7;
}
