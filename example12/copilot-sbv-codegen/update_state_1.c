/* File: "update_state_1.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/*ACSL following*/
/*test 001*/
/*ACSL to write
 (1 + s1)
*/
/*@
 assigns \nothing;
 ensures \result == (1 + queue_1[ptr_1]);
*/
SInt32 update_state_1(const SInt32 *queue_1, const SWord32 ptr_1)
{
  const SInt32 s0 = queue_1[0];
  const SWord32 s1 = ptr_1;
  const SInt32 s3 = s0 + 0x00000001L;

  return s3;
}
