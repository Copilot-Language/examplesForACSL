/* File: "update_state_9.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include "internal.h"

/*ACSL following*/
/*test 001*/
/*ACSL to write
 s4
*/
/*@
 assigns \nothing;
 ensures \result == queue_4[ptr_4];
*/
SBool update_state_9(const SBool *queue_4, const SWord32 ptr_4)
{
  const SBool   s0 = queue_4[0];
  const SBool   s1 = queue_4[1];
  const SBool   s2 = queue_4[2];
  const SBool   s3 = queue_4[3];
  const SBool   s4 = queue_4[4];
  const SBool   s5 = queue_4[5];
  const SWord32 s6 = ptr_4;
  const SBool table0[] = {
      s0, s1, s2, s3, s4, s5
  };
  const SWord32 s8 = (0x00000006UL == 0) ? s6 : (s6 % 0x00000006UL);
  const SBool   s9 = table0[s8];

  return s9;
}
