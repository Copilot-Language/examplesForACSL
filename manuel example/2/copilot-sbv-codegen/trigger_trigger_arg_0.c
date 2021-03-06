/* File: "trigger_trigger_arg_0.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include "internal.h"

/*@
 requires 0x0002U > 0;
 requires \valid(queue_0 + (0 .. 0x0002U -1));
 assigns \nothing;
 ensures \result == ext_func0_1;

*/
SWord16 trigger_trigger_arg_0(const SWord16 ext_func0_1,
                              const SWord8 ext_x, const SWord16 *queue_0, const SWord16 ptr_0)
{
  const SWord16 s0 = ext_func0_1;
  const SWord8 s1 = ext_x;
  const SWord16 s2 = queue_0[0];
  const SWord16 s3 = queue_0[1];
  const SWord16 s4 = ptr_0;
  return s0;
}
