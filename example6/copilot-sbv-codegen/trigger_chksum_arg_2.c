/* File: "trigger_chksum_arg_2.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 s1
*/
/*@
 assigns \nothing;
 ensures \result == (queue_1[ptr_1]);
*/
SWord16 trigger_chksum_arg_2(const SWord16 *queue_1,
                             const SWord32 ptr_1)
{
  const SWord16 s0 = queue_1[0];
  const SWord32 s1 = ptr_1;
  return s0;
}
