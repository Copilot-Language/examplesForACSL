/* File: "update_state_0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 (s0 + 1)
*/
/*@
 assigns \nothing;
 ensures \result == (((queue_0[ptr_0]) + (1)));
*/
SWord64 update_state_0(const SWord64 *queue_0, const SWord32 ptr_0)
{
  const SWord64 s0 = queue_0[0];
  const SWord32 s1 = ptr_0;
  const SWord64 s3 = s0 + 0x0000000000000001ULL;

  return s3;
}
