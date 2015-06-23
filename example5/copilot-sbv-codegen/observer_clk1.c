/* File: "observer_clk1.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "internal.h"

/* User given declarations: */
/*test 005*/
/*ACSL to write
 (s0 == 0)
*/
/*@
 assigns \nothing;
 ensures \result == (((queue_0[ptr_0]) == (0)));
*/
SBool observer_clk1(const SWord8 *queue_0, const SWord32 ptr_0)
{
  const SWord8  s0 = queue_0[0];
  const SWord32 s1 = ptr_0;
  const SBool   s3 = s0 == 0;

  return s3;
}
