/* File: "trigger_trig1_arg_1.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/*ACSL following*/
/*test 003*/
/*ACSL to write
 (((extern "e1" + extern "e2") + extern "e3[(s1 + 6)]") + extern "ff(s1)")
*/
/*@
 assigns \nothing;
 ensures \result == (((ext_e1 + ext_e2) + ext_e3_0) + ext_ff_1);
*/
SWord64 trigger_trig1_arg_1(const SWord64 ext_e1,
                            const SWord64 ext_e2, const SWord64 ext_e3_0,
                            const SWord64 ext_ff_1, const SWord8 *queue_1, const SWord32 ptr_1)
{
  const SWord64 s0 = ext_e1;
  const SWord64 s1 = ext_e2;
  const SWord64 s2 = ext_e3_0;
  const SWord64 s3 = ext_ff_1;
  const SWord8  s4 = queue_1[0];
  const SWord8  s5 = queue_1[1];
  const SWord32 s6 = ptr_1;
  const SWord64 s7 = s0 + s1;
  const SWord64 s8 = s2 + s7;
  const SWord64 s9 = s3 + s8;

  return s9;
}