/* File: "update_state_40.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 (s40 + 1)
*/
/*@
 assigns \nothing;
 ensures \result == (((queue_40[ptr_40]) + (1)));
*/
SWord32 update_state_40(const SWord32 *queue_40,
                        const SWord32 ptr_40)
{
  const SWord32 s0 = queue_40[0];
  const SWord32 s1 = ptr_40;
  const SWord32 s3 = s0 + 0x00000001UL;

  return s3;
}
