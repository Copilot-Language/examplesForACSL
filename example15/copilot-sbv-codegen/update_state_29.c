/* File: "update_state_29.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 (extern "e" == 0)
*/
/*@
 assigns \nothing;
 ensures \result == (((ext_e) == (0)));
*/
SBool update_state_29(const SInt8 ext_e)
{
  const SInt8 s0 = ext_e;
  const SBool s2 = s0 == 0;

  return s2;
}
