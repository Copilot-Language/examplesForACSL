/* File: "update_state_9.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 (s9 + 1)
*/
/*@
 assigns \nothing;
 ensures \result == (((queue_9[ptr_9]) + (1)));
*/
SWord64 update_state_9(const SWord64 *queue_9, const SWord32 ptr_9)
{
  const SWord64 s0 = queue_9[0];
  const SWord32 s1 = ptr_9;
  const SWord64 s3 = s0 + 0x0000000000000001ULL;

  return s3;
}
