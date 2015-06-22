/* File: "update_state_2.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/*ACSL following*/
/*test 001*/
/*ACSL to write
 ((not (s0 || s1) || extern "e1") && s2)
*/
/*@
 assigns \nothing;
 ensures \result == ((! (queue_0[ptr_0] || queue_1[ptr_1]) || ext_e1) && queue_2[ptr_2]);
*/
SBool update_state_2(const SBool *queue_0, const SWord32 ptr_0,
                     const SBool *queue_1, const SWord32 ptr_1, const SBool ext_e1,
                     const SBool *queue_2, const SWord32 ptr_2)
{
  const SBool s0 = queue_0[0];
  const SWord32 s1 = ptr_0;
  const SBool s2 = queue_1[0];
  const SWord32 s3 = ptr_1;
  const SBool s4 = ext_e1;
  const SBool s5 = queue_2[0];
  const SWord32 s6 = ptr_2;
  const SBool s7 = s0 || s2;
  const SBool s8 = !s7;
  const SBool s9 = s8 || s4;
  const SBool s10 = s9 && s5;

  return s10;
}
