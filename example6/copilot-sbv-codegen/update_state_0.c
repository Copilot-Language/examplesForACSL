/* File: "update_state_0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/*ACSL following*/
/*test 001*/
/*ACSL to write
 (s0 mod 2047)
*/
/*@
 assigns \nothing;
 ensures \result == (queue_0[ptr_0] % 2047);
*/
SWord16 update_state_0(const SWord16 *queue_0, const SWord32 ptr_0)
{
  const SWord16 s0 = queue_0[0];
  const SWord32 s1 = ptr_0;
  const SWord16 s3 = (0x07ffU == 0) ? s0 : (s0 % 0x07ffU);

  return s3;
}
