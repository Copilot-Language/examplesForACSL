/* File: "update_state_30.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/*ACSL following*/
/*test 001*/
/*ACSL to write
 ((extern "e" == 0) && (s2 || (if s0 then s27 else s28)))
*/
/*@
 assigns \nothing;
 ensures \result == ((ext_e == 0) && (queue_2[ptr_2] || ( queue_0[ptr_0] ? queue_27[ptr_27] : queue_28[ptr_28])));
*/
SBool update_state_30(const SInt8 ext_e, const SBool *queue_2,
                      const SWord32 ptr_2, const SBool *queue_0, const SWord32 ptr_0,
                      const SBool *queue_27, const SWord32 ptr_27, const SBool *queue_28,
                      const SWord32 ptr_28)
{
  const SInt8 s0 = ext_e;
  const SBool s1 = queue_2[0];
  const SWord32 s2 = ptr_2;
  const SBool s3 = queue_0[0];
  const SWord32 s4 = ptr_0;
  const SBool s5 = queue_27[0];
  const SWord32 s6 = ptr_27;
  const SBool s7 = queue_28[0];
  const SWord32 s8 = ptr_28;
  const SBool s10 = s0 == 0;
  const SBool s11 = s3 ? s5 : s7;
  const SBool s12 = s1 || s11;
  const SBool s13 = s10 && s12;

  return s13;
}
