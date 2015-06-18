/* File: "update_state_5.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include "internal.h"

/*ACSL following*/
/*test 001*/
/*ACSL to write
 s5
*/
/*@
 assigns \nothing;
 ensures \result == queue_5[ptr_5];
*/
SBool update_state_5(const SBool *queue_5, const SWord32 ptr_5)
{
  const SBool   s0 = queue_5[0];
  const SBool   s1 = queue_5[1];
  const SBool   s2 = queue_5[2];
  const SWord32 s3 = ptr_5;
  const SBool table0[] = {
      s0, s1, s2
  };
  const SWord32 s5 = (0x00000003UL == 0) ? s3 : (s3 % 0x00000003UL);
  const SBool   s6 = table0[s5];

  return s6;
}
