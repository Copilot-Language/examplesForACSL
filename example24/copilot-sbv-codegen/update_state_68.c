/* File: "update_state_68.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 (s68 + 1)
*/
/*@
 assigns \nothing;
 ensures \result == (((queue_68[ptr_68]) + (1)));
*/
SWord32 update_state_68(const SWord32 *queue_68,
                        const SWord32 ptr_68)
{
  const SWord32 s0 = queue_68[0];
  const SWord32 s1 = ptr_68;
  const SWord32 s3 = s0 + 0x00000001UL;

  return s3;
}
