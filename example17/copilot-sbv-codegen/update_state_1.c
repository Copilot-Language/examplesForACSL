/* File: "update_state_1.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/*ACSL following*/
/*test 001*/
/*ACSL to write
 (s0 || s1)
*/
/*@
 assigns \nothing;
 ensures \result == (queue_0[ptr_0] || queue_1[ptr_1]);
*/
SBool update_state_1(const SBool *queue_0, const SWord32 ptr_0,
                     const SBool *queue_1, const SWord32 ptr_1)
{
  const SBool s0 = queue_0[0];
  const SWord32 s1 = ptr_0;
  const SBool s2 = queue_1[0];
  const SWord32 s3 = ptr_1;
  const SBool s4 = s0 || s2;

  return s4;
}
