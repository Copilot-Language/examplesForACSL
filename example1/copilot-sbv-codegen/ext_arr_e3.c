/* File: "ext_arr_e3.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "internal.h"

/* User given declarations: */
/*test 002*/
/*ACSL to write
 (s1 + 6)
*/
/*@
 assigns \nothing;
 ensures \result == (((queue_1[ptr_1]) + (6)));
*/
SWord8 ext_arr_e3(const SWord8 *queue_1, const SWord32 ptr_1)
{
  const SWord8  s0 = queue_1[0];
  const SWord8  s1 = queue_1[1];
  const SWord32 s2 = ptr_1;
  const SWord8 table0[] = {
      s0, s1
  };
  const SWord32 s4 = (0x00000002UL == 0) ? s2 : (s2 % 0x00000002UL);
  const SWord8  s5 = table0[s4];
  const SWord8  s7 = s5 + 6;

  return s7;
}
