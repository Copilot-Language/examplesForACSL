/* File: "update_state_31.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include "internal.h"

/*ACSL following*/
/*test 001*/
/*ACSL to write
 (extern "e" == 1)
*/
/*@
 assigns \nothing;
 ensures \result == (ext_e == 1);
*/
SBool update_state_31(const SInt8 ext_e)
{
  const SInt8 s0 = ext_e;
  const SBool s2 = s0 == 1;

  return s2;
}
