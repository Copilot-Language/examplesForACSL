/* File: "update_state_76.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 (s76 + 1)
*/
/*@
 assigns \nothing;
 ensures \result == (((queue_76[ptr_76]) + (1)));
*/
SWord32 update_state_76(const SWord32 *queue_76,
                        const SWord32 ptr_76)
{
  const SWord32 s0 = queue_76[0];
  const SWord32 s1 = ptr_76;
  const SWord32 s3 = s0 + 0x00000001UL;

  return s3;
}
