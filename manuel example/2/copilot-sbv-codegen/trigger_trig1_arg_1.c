/* File: "trigger_trig1_arg_1.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include "internal.h"

/*@
 assigns \nothing;
 ensures \result == ext_e1 + ext_e1 + ext_e2;

*/
SWord64 trigger_trig1_arg_1(const SWord64 ext_e1,
                            const SWord64 ext_e2)
{
  const SWord64 s0 = ext_e1;
  const SWord64 s1 = ext_e2;
  const SWord64 s2 = s0 + s1;
  const SWord64 s3 = s0 + s2;

  return s3;
}
