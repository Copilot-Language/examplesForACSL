/* File: "trigger_guard_h.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include "internal.h"

/*ACSL following*/
/*test 006*/
/*ACSL to write
 (extern "e3" /= s0)
*/
/*@
 assigns \nothing;
 ensures \result == (ext_e3 != queue_0[ptr_0]);
*/
SBool trigger_guard_h(const SWord64 ext_e3, const SWord64 *queue_0,
                      const SWord32 ptr_0)
{
  const SWord64 s0 = ext_e3;
  const SWord64 s1 = queue_0[0];
  const SWord64 s2 = queue_0[1];
  const SWord32 s3 = ptr_0;
  const SWord64 table0[] = {
      s1, s2
  };
  const SWord32 s5 = (0x00000002UL == 0) ? s3 : (s3 % 0x00000002UL);
  const SWord64 s6 = table0[s5];
  const SBool   s7 = s0 != s6;

  return s7;
}
