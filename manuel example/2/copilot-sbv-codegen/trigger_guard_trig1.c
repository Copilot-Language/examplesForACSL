/* File: "trigger_guard_trig1.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include "internal.h"



/*@
 requires 0x0001U > 0;
 requires \valid(queue_0 + (0 .. 0x0001U -1));
 assigns \nothing;
 ensures \result == queue_0[0];

*/
SBool trigger_guard_trig1(const SBool *queue_0,
                          const SWord16 ptr_0)
{
  const SBool s0 = queue_0[0];
  const SWord16 s1 = ptr_0;
  return s0;
}
