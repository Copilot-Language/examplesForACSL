/* File: "update_state_4.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include "internal.h"

/*ACSL following*/
/*test 001*/
/*ACSL to write
 (s4 + 1)
*/
/*@
 assigns \nothing;
 ensures \result == (queue_4[ptr_4] + 1);
*/
SWord32 update_state_4(const SWord32 *queue_4, const SWord32 ptr_4)
{
  const SWord32 s0 = queue_4[0];
  const SWord32 s1 = ptr_4;
  const SWord32 s3 = s0 + 0x00000001UL;

  return s3;
}
