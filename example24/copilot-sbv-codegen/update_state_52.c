/* File: "update_state_52.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 (s52 + 1)
*/
/*@
 assigns \nothing;
 ensures \result == (((queue_52[ptr_52]) + (1)));
*/
SWord32 update_state_52(const SWord32 *queue_52,
                        const SWord32 ptr_52)
{
  const SWord32 s0 = queue_52[0];
  const SWord32 s1 = ptr_52;
  const SWord32 s3 = s0 + 0x00000001UL;

  return s3;
}
