/* File: "trigger_strm_arg_0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 local "local_0" = (s1 + 1)
in (var "local_0" + var "local_0")
*/
/*@
 assigns \nothing;
 ensures \result == (\let local_0 = (((queue_1[ptr_1]) + (1))) ; (((local_0) + (local_0))));
*/
SInt32 trigger_strm_arg_0(const SInt32 *queue_1,
                          const SWord32 ptr_1)
{
  const SInt32  s0 = queue_1[0];
  const SWord32 s1 = ptr_1;
  const SInt32  s3 = s0 + 0x00000001L;
  const SInt32  s4 = s3 + s3;

  return s4;
}
