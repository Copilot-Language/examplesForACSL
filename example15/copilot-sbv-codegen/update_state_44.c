/* File: "update_state_44.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include "internal.h"

/*ACSL following*/
/*test 001*/
/*ACSL to write
 ((extern "e" == 3) && ((if s0 then s43 else s44) || (if s0 then s41 else s42)))
*/
/*@
 assigns \nothing;
 ensures \result == ((ext_e == 3) && (( queue_0[ptr_0] ? queue_43[ptr_43] : queue_44[ptr_44]) || ( queue_0[ptr_0] ? queue_41[ptr_41] : queue_42[ptr_42])));
*/
SBool update_state_44(const SInt8 ext_e, const SBool *queue_0,
                      const SWord32 ptr_0, const SBool *queue_43, const SWord32 ptr_43,
                      const SBool *queue_44, const SWord32 ptr_44, const SBool *queue_41,
                      const SWord32 ptr_41, const SBool *queue_42, const SWord32 ptr_42)
{
  const SInt8 s0 = ext_e;
  const SBool s1 = queue_0[0];
  const SWord32 s2 = ptr_0;
  const SBool s3 = queue_43[0];
  const SWord32 s4 = ptr_43;
  const SBool s5 = queue_44[0];
  const SWord32 s6 = ptr_44;
  const SBool s7 = queue_41[0];
  const SWord32 s8 = ptr_41;
  const SBool s9 = queue_42[0];
  const SWord32 s10 = ptr_42;
  const SBool s12 = s0 == 3;
  const SBool s13 = s1 ? s3 : s5;
  const SBool s14 = s1 ? s7 : s9;
  const SBool s15 = s13 || s14;
  const SBool s16 = s12 && s15;

  return s16;
}
