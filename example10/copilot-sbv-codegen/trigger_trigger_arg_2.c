/* File: "trigger_trigger_arg_2.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 extern "func0(3, 4)"
*/
/*@
 assigns \nothing;
 ensures \result == (ext_func0_3);
*/
SWord16 trigger_trigger_arg_2(const SWord16 ext_func0_3)
{
  const SWord16 s0 = ext_func0_3;
  return s0;
}
