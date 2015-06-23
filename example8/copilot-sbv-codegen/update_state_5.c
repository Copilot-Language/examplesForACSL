/* File: "update_state_5.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 s5
*/
/*@
 assigns \nothing;
 ensures \result == (queue_5[ptr_5]);
*/
SWord8 update_state_5(const SWord8 *queue_5, const SWord32 ptr_5)
{
  const SWord8  s0 = queue_5[0];
  const SWord8  s1 = queue_5[1];
  const SWord8  s2 = queue_5[2];
  const SWord32 s3 = ptr_5;
  const SWord8 table0[] = {
      s0, s1, s2
  };
  const SWord32 s5 = (0x00000003UL == 0) ? 0 : (s3 % 0x00000003UL);
  const SWord8  s6 = table0[s5];

  return s6;
}
