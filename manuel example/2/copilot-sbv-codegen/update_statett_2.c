/* File: "update_statett_2.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include "internal.h"


/*@
 requires 0x0002U > 0;
 requires 0x0002U > 0;
 requires ptr_2 < 0x000078;
 requires \valid(queue_2 + (0..0x0002U-1));
 assigns \nothing;
 
 
 ensures \result == ( queue_2[ptr_2 % 0x0002U] && queue_2[(ptr_2 + 0x0001U) % 0x0002U]);
*/


SBool update_state_2(const SBool *queue_2, const SWord16 ptr_2)
{
  const SBool   s0 = queue_2[0];
  const SBool   s1 = queue_2[1];
  const SWord16 s2 = ptr_2;
  const SBool table0[] = {
      s0, s1
  };
  const SWord16 s4 = (0x0002U == 0) ? s2 : (s2 % 0x0002U);
  const SBool   s5 = table0[s4];
  const SWord16 s7 = s2 + 0x0001U;
  const SWord16 s8 = (0x0002U == 0) ? s7 : (s7 % 0x0002U);
  const SBool   s9 = table0[s8];
  const SBool   s10 = s5 || s9;

  return s10;
}
