/* File: "update_state_100.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 (s100 + 1)
*/
/*@
 assigns \nothing;
 ensures \result == (((queue_100[ptr_100]) + (1)));
*/
SWord32 update_state_100(const SWord32 *queue_100,
                         const SWord32 ptr_100)
{
  const SWord32 s0 = queue_100[0];
  const SWord32 s1 = ptr_100;
  const SWord32 s3 = s0 + 0x00000001UL;

  return s3;
}
