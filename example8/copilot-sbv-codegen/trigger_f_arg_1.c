/* File: "trigger_f_arg_1.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 (extern "e1" + extern "e2")
*/
/*@
 assigns \nothing;
 ensures \result == (((ext_e1) + (ext_e2)));
*/
SWord64 trigger_f_arg_1(const SWord64 ext_e1, const SWord64 ext_e2)
{
  const SWord64 s0 = ext_e1;
  const SWord64 s1 = ext_e2;
  const SWord64 s2 = s0 + s1;

  return s2;
}
