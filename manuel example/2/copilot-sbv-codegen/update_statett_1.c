/* File: "update_statett_1.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include "internal.h"


/*@
 requires 0x0002U > 0;
 requires \valid(queue_1 + (0..2-1));
 assigns \nothing;
 ensures \result == (queue_1[0] + 0x0000000001ULL);
*/
SWord64 update_statett_1(const SWord64 *queue_1,
                         const SWord16 ptr_1)
{
  const SWord64 s0 = queue_1[0];
  const SWord16 s1 = ptr_1;
  const SWord64 s3 = s0 + 0x0000000000000001ULL;

  return s3;
}