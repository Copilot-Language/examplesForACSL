/* File: "update_state_7.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 (s7 + 1)
*/
/*@
 assigns \nothing;
 ensures \result == (((queue_7[ptr_7]) + (1)));
*/
SWord16 update_state_7(const SWord16 *queue_7, const SWord32 ptr_7)
{
  const SWord16 s0 = queue_7[0];
  const SWord32 s1 = ptr_7;
  const SWord16 s3 = s0 + 0x0001U;

  return s3;
}
