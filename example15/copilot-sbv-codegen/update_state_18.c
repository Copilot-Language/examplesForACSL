/* File: "update_state_18.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include "internal.h"

/*ACSL following*/
/*test 001*/
/*ACSL to write
 (s7 && s14)
*/
/*@
 assigns \nothing;
 ensures \result == (queue_7[ptr_7] && queue_14[ptr_14]);
*/
SBool update_state_18(const SBool *queue_7, const SWord32 ptr_7,
                      const SBool *queue_14, const SWord32 ptr_14)
{
  const SBool   s0 = queue_7[0];
  const SBool   s1 = queue_7[1];
  const SBool   s2 = queue_7[2];
  const SBool   s3 = queue_7[3];
  const SBool   s4 = queue_7[4];
  const SBool   s5 = queue_7[5];
  const SWord32 s6 = ptr_7;
  const SBool   s7 = queue_14[0];
  const SWord32 s8 = ptr_14;
  const SBool table0[] = {
      s0, s1, s2, s3, s4, s5
  };
  const SWord32 s10 = (0x00000006UL == 0) ? s6 : (s6 % 0x00000006UL);
  const SBool   s11 = table0[s10];
  const SBool   s12 = s11 && s7;

  return s12;
}
