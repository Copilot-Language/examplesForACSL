/* File: "observer_obs0.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "internal.h"

/* User given declarations: */
/*test 005*/
/*ACSL to write
 s2
*/
/*@
 assigns \nothing;
 ensures \result == (queue_2[ptr_2]);
*/
SBool observer_obs0(const SBool *queue_2, const SWord32 ptr_2)
{
  const SBool   s0 = queue_2[0];
  const SBool   s1 = queue_2[1];
  const SBool   s2 = queue_2[2];
  const SBool   s3 = queue_2[3];
  const SBool   s4 = queue_2[4];
  const SBool   s5 = queue_2[5];
  const SBool   s6 = queue_2[6];
  const SBool   s7 = queue_2[7];
  const SWord32 s8 = ptr_2;
  const SBool table0[] = {
      s0, s1, s2, s3, s4, s5, s6, s7
  };
  const SWord32 s10 = (0x00000008UL == 0) ? s8 : (s8 % 0x00000008UL);
  const SBool   s11 = table0[s10];

  return s11;
}
