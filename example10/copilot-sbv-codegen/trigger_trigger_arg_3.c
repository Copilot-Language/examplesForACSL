/* File: "trigger_trigger_arg_3.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include "internal.h"

/*ACSL following*/
/*test 003*/
/*ACSL to write
 (extern "func0(extern "x", s0)" + extern "func0(extern "x", s0)")
*/
/*@
 assigns \nothing;
 ensures \result == (ext_func0_4 + ext_func0_5);
*/
SWord16 trigger_trigger_arg_3(const SWord16 ext_func0_4,
                              const SWord8 ext_x, const SWord16 *queue_0, const SWord32 ptr_0,
                              const SWord16 ext_func0_5)
{
  const SWord16 s0 = ext_func0_4;
  const SWord8  s1 = ext_x;
  const SWord16 s2 = queue_0[0];
  const SWord16 s3 = queue_0[1];
  const SWord32 s4 = ptr_0;
  const SWord16 s5 = ext_func0_5;
  const SWord16 s6 = s5 + s5;

  return s6;
}
