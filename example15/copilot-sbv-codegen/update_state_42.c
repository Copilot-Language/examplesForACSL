/* File: "update_state_42.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 ((Ext_e == 3) && (s2 || (if s0 then s39 else s40)))
*/
/*@
 assigns \nothing;
 ensures \result == (((((ext_e) == (3))) && (((queue_2[ptr_2]) || (( (queue_0[ptr_0]) ? (queue_39[ptr_39]) : (queue_40[ptr_40])))))));
*/
SBool update_state_42(const SInt8 ext_e, const SBool *queue_2,
                      const SWord32 ptr_2, const SBool *queue_0, const SWord32 ptr_0,
                      const SBool *queue_39, const SWord32 ptr_39, const SBool *queue_40,
                      const SWord32 ptr_40)
{
  const SInt8   s0 = ext_e;
  const SBool   s1 = queue_2[0];
  const SWord32 s2 = ptr_2;
  const SBool   s3 = queue_0[0];
  const SWord32 s4 = ptr_0;
  const SBool   s5 = queue_39[0];
  const SWord32 s6 = ptr_39;
  const SBool   s7 = queue_40[0];
  const SWord32 s8 = ptr_40;
  const SBool   s10 = s0 == 3;
  const SBool   s11 = s3 ? s5 : s7;
  const SBool   s12 = s1 || s11;
  const SBool   s13 = s10 && s12;

  return s13;
}
