/* File: "update_state_15.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 (s4 && s14)
*/
/*@
 assigns \nothing;
 ensures \result == (((queue_4[ptr_4]) && (queue_14[ptr_14])));
*/
SBool update_state_15(const SBool *queue_4, const SWord32 ptr_4,
                      const SBool *queue_14, const SWord32 ptr_14)
{
  const SBool   s0 = queue_4[0];
  const SBool   s1 = queue_4[1];
  const SBool   s2 = queue_4[2];
  const SBool   s3 = queue_4[3];
  const SBool   s4 = queue_4[4];
  const SBool   s5 = queue_4[5];
  const SWord32 s6 = ptr_4;
  const SBool   s7 = queue_14[0];
  const SWord32 s8 = ptr_14;
  const SBool table0[] = {
      s0, s1, s2, s3, s4, s5
  };
  const SWord32 s10 = (0x00000006UL == 0) ? s6 : (s6 % 0x00000006UL);
  const SBool   s11 = table0[s10];
  const SBool   s12 = s7 & s11;

  return s12;
}
