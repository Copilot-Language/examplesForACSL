/* File: "trigger_testNext_arg_0.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 drop 1 s5
*/
/*@
 assigns \nothing;
 ensures \result == (queue_5[(ptr_5 + 1) % 3]);
*/
SBool trigger_testNext_arg_0(const SBool *queue_5,
                             const SWord32 ptr_5)
{
  const SBool   s0 = queue_5[0];
  const SBool   s1 = queue_5[1];
  const SBool   s2 = queue_5[2];
  const SWord32 s3 = ptr_5;
  const SBool table0[] = {
      s0, s1, s2
  };
  const SWord32 s5 = s3 + 0x00000001UL;
  const SWord32 s7 = (0x00000003UL == 0) ? 0 : (s5 % 0x00000003UL);
  const SBool   s8 = table0[s7];

  return s8;
}
