/* File: "update_state_0.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 (1 - s0)
*/
/*@
 assigns \nothing;
 ensures \result == (((1) - (queue_0[ptr_0])));
*/
SWord64 update_state_0(const SWord64 *queue_0, const SWord32 ptr_0)
{
  const SWord64 s0 = queue_0[0];
  const SWord32 s1 = ptr_0;
  const SWord64 s3 = 0x0000000000000001ULL - s0;

  return s3;
}