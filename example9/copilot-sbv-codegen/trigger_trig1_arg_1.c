/* File: "trigger_trig1_arg_1.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/*ACSL following*/
/*test 003*/
/*ACSL to write
 ((extern "e1" + extern "e2") + extern "e1")
*/
/*@
 assigns \nothing;
 ensures \result == ((ext_e1 + ext_e2) + ext_e1);
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
