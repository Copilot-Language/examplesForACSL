/* File: "update_state_64.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 (s64 + 1)
*/
/*@
 assigns \nothing;
 ensures \result == (((queue_64[ptr_64]) + (1)));
*/
SWord32 update_state_64(const SWord32 *queue_64,
                        const SWord32 ptr_64)
{
  const SWord32 s0 = queue_64[0];
  const SWord32 s1 = ptr_64;
  const SWord32 s3 = s0 + 0x00000001UL;

  return s3;
}
