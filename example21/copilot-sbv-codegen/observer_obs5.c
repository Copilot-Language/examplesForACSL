/* File: "observer_obs5.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "internal.h"

/* User given declarations: */
/*test 005*/
/*ACSL to write
 s3
*/
/*@
 assigns \nothing;
 ensures \result == (queue_3[ptr_3]);
*/
SBool observer_obs5(const SBool *queue_3, const SWord32 ptr_3)
{
  const SBool   s0 = queue_3[0];
  const SBool   s1 = queue_3[1];
  const SBool   s2 = queue_3[2];
  const SBool   s3 = queue_3[3];
  const SBool   s4 = queue_3[4];
  const SBool   s5 = queue_3[5];
  const SBool   s6 = queue_3[6];
  const SBool   s7 = queue_3[7];
  const SBool   s8 = queue_3[8];
  const SBool   s9 = queue_3[9];
  const SBool   s10 = queue_3[10];
  const SBool   s11 = queue_3[11];
  const SBool   s12 = queue_3[12];
  const SBool   s13 = queue_3[13];
  const SBool   s14 = queue_3[14];
  const SBool   s15 = queue_3[15];
  const SWord32 s16 = ptr_3;
  const SBool table0[] = {
       s0,  s1,  s2,  s3,  s4,  s5,  s6,  s7,  s8,  s9, s10, s11, s12,
      s13, s14, s15
  };
  const SWord32 s18 = (0x00000010UL == 0) ? s16 : (s16 % 0x00000010UL);
  const SBool   s19 = table0[s18];

  return s19;
}
