/* File: "update_state_48.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include "internal.h"

/*ACSL following*/
/*test 001*/
/*ACSL to write
 (s48 + 1)
*/
/*@
 assigns \nothing;
 ensures \result == (queue_48[ptr_48] + 1);
*/
SWord32 update_state_48(const SWord32 *queue_48,
                        const SWord32 ptr_48)
{
  const SWord32 s0 = queue_48[0];
  const SWord32 s1 = ptr_48;
  const SWord32 s3 = s0 + 0x00000001UL;

  return s3;
}
