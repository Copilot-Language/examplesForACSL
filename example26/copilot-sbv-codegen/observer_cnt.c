/* File: "observer_cnt.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "internal.h"

/* User given declarations: */
/*test 005*/
/*ACSL to write
 s0
*/
/*@
 assigns \nothing;
 ensures \result == (queue_0[ptr_0]);
*/
SWord64 observer_cnt(const SWord64 *queue_0, const SWord32 ptr_0)
{
  const SWord64 s0 = queue_0[0];
  const SWord32 s1 = ptr_0;
  return s0;
}