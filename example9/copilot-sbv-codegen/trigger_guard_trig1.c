/* File: "trigger_guard_trig1.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include "internal.h"

/*ACSL following*/
/*test 006*/
/*ACSL to write
 s0
*/
/*@
 assigns \nothing;
 ensures \result == queue_0[ptr_0];
*/
SBool trigger_guard_trig1(const SBool *queue_0,
                          const SWord32 ptr_0)
{
  const SBool s0 = queue_0[0];
  const SWord32 s1 = ptr_0;
  return s0;
}
