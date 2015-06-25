/* File: "observer_obs2.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "internal.h"

/* User given declarations: */
/*test 005*/
/*ACSL to write
 s0
*/
/*@
 assigns \nothing;
 ensures \result == (queue_0[ptr_0]);
*/
SBool observer_obs2(const SBool *queue_0, const SWord32 ptr_0)
{
  const SBool   s0 = queue_0[0];
  const SBool   s1 = queue_0[1];
  const SWord32 s2 = ptr_0;
  const SBool table0[] = {
      s0, s1
  };
  const SWord32 s4 = (0x00000002UL == 0) ? s2 : (s2 % 0x00000002UL);
  const SBool   s5 = table0[s4];

  return s5;
}
