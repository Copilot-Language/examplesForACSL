/* File: "update_statett_0.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include "internal.h"


/*@
 requires 0x0001U > 0;
 requires \valid(queue_0 + (0..1-1));
 assigns \nothing;
 ensures \result == (\false == queue_0[0]);
*/
SBool update_statett_0(const SBool *queue_0, const SWord16 ptr_0)
{
  const SBool s0 = queue_0[0];
  const SWord16 s1 = ptr_0;
  const SBool s2 = false == s0;

  return s2;
}