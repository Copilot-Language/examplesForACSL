/* File: "update_state_32.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include "internal.h"

/*ACSL following*/
/*test 001*/
/*ACSL to write
 (s32 + 1)
*/
/*@
 assigns \nothing;
 ensures \result == (queue_32[ptr_32] + 1);
*/
SWord32 update_state_32(const SWord32 *queue_32,
                        const SWord32 ptr_32)
{
  const SWord32 s0 = queue_32[0];
  const SWord32 s1 = ptr_32;
  const SWord32 s3 = s0 + 0x00000001UL;

  return s3;
}
