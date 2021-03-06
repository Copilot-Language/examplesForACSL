/* File: "trigger_trig1_arg_0.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include "internal.h"


/*@
 requires 0x0001U > 0;
 requires \valid(queue_1 + (0 .. 0x0001U -1));
 assigns \nothing;
 ensures \result == queue_1[0] < 0x000000000000003ULL;

*/
SBool trigger_trig1_arg_0(const SWord64 *queue_1,
                          const SWord16 ptr_1)
{
  const SWord64 s0 = queue_1[0];
  const SWord16 s1 = ptr_1;
  const SBool s3 = s0 < 0x0000000000000003ULL;

  return s3;
}
