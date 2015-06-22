/* File: "update_state_2.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/*ACSL following*/
/*test 001*/
/*ACSL to write
 (s0 || s2)
*/
/*@
 assigns \nothing;
 ensures \result == (queue_0[ptr_0] || queue_2[ptr_2]);
*/
SBool update_state_2(const SBool *queue_0, const SWord32 ptr_0,
                     const SBool *queue_2, const SWord32 ptr_2)
{
  const SBool s0 = queue_0[0];
  const SWord32 s1 = ptr_0;
  const SBool s2 = queue_2[0];
  const SWord32 s3 = ptr_2;
  const SBool s4 = s0 || s2;

  return s4;
}
