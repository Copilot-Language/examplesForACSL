/* File: "update_state_1.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/*ACSL following*/
/*test 001*/
/*ACSL to write
 (s1 + 1)
*/
/*@
 assigns \nothing;
 ensures \result == (queue_1[ptr_1] + 1);
*/
SWord64 update_state_1(const SWord64 *queue_1, const SWord32 ptr_1)
{
  const SWord64 s0 = queue_1[0];
  const SWord32 s1 = ptr_1;
  const SWord64 s3 = s0 + 0x0000000000000001ULL;

  return s3;
}
