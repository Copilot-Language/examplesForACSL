/* File: "update_state_34.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 ((extern "e" == 0) && ((if s0 then s35 else s36) || (if s0 then s31 else s32)))
*/
/*@
 assigns \nothing;
 ensures \result == (((((ext_e) == (0))) && (((( (queue_0[ptr_0]) ? (queue_35[ptr_35]) : (queue_36[ptr_36]))) || (( (queue_0[ptr_0]) ? (queue_31[ptr_31]) : (queue_32[ptr_32])))))));
*/
SBool update_state_34(const SInt8 ext_e, const SBool *queue_0,
                      const SWord32 ptr_0, const SBool *queue_35, const SWord32 ptr_35,
                      const SBool *queue_36, const SWord32 ptr_36, const SBool *queue_31,
                      const SWord32 ptr_31, const SBool *queue_32, const SWord32 ptr_32)
{
  const SInt8   s0 = ext_e;
  const SBool   s1 = queue_0[0];
  const SWord32 s2 = ptr_0;
  const SBool   s3 = queue_35[0];
  const SWord32 s4 = ptr_35;
  const SBool   s5 = queue_36[0];
  const SWord32 s6 = ptr_36;
  const SBool   s7 = queue_31[0];
  const SWord32 s8 = ptr_31;
  const SBool   s9 = queue_32[0];
  const SWord32 s10 = ptr_32;
  const SBool   s12 = s0 == 0;
  const SBool   s13 = s1 ? s3 : s5;
  const SBool   s14 = s1 ? s7 : s9;
  const SBool   s15 = s13 | s14;
  const SBool   s16 = s12 & s15;

  return s16;
}
