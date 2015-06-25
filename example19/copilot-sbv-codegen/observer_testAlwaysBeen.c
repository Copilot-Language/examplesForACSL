/* File: "observer_testAlwaysBeen.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "internal.h"

/* User given declarations: */
/*test 005*/
/*ACSL to write
 (s0 && s1)
*/
/*@
 assigns \nothing;
 ensures \result == (((queue_0[ptr_0]) && (queue_1[ptr_1])));
*/
SBool observer_testAlwaysBeen(const SBool *queue_0,
                              const SWord32 ptr_0, const SBool *queue_1, const SWord32 ptr_1)
{
  const SBool   s0 = queue_0[0];
  const SBool   s1 = queue_0[1];
  const SBool   s2 = queue_0[2];
  const SBool   s3 = queue_0[3];
  const SBool   s4 = queue_0[4];
  const SBool   s5 = queue_0[5];
  const SBool   s6 = queue_0[6];
  const SBool   s7 = queue_0[7];
  const SWord32 s8 = ptr_0;
  const SBool   s9 = queue_1[0];
  const SWord32 s10 = ptr_1;
  const SBool table0[] = {
      s0, s1, s2, s3, s4, s5, s6, s7
  };
  const SWord32 s12 = (0x00000008UL == 0) ? s8 : (s8 % 0x00000008UL);
  const SBool   s13 = table0[s12];
  const SBool   s14 = s9 & s13;

  return s14;
}
