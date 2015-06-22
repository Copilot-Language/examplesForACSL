/* File: "update_state_1.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 s1
*/
/*@
 assigns \nothing;
 ensures \result == (queue_1[ptr_1]);
*/

SBool update_state_1(const SBool *queue_1, const SWord32 ptr_1)
{
  const SBool   s0 = queue_1[0];
  const SBool   s1 = queue_1[1];
  const SBool   s2 = queue_1[2];
  const SBool   s3 = queue_1[3];
  const SWord32 s4 = ptr_1;
  const SBool table0[] = {
      s0, s1, s2, s3
  };
  const SWord32 s6 = (0x00000004UL == 0) ? s4 : (s4 % 0x00000004UL);
  const SBool   s7 = table0[s6];

  return s7;
}
