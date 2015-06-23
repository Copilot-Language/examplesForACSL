/* File: "update_state_1.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 (extern "crc_sbv(s0)" ^ s1)
*/
/*@
 assigns \nothing;
 ensures \result == (((ext_crc_sbv_0) ^ (queue_1[ptr_1])));
*/
SWord16 update_state_1(const SWord16 ext_crc_sbv_0,
                       const SWord16 *queue_0, const SWord32 ptr_0,
                       const SWord16 *queue_1, const SWord32 ptr_1)
{
  const SWord16 s0 = ext_crc_sbv_0;
  const SWord16 s1 = queue_0[0];
  const SWord32 s2 = ptr_0;
  const SWord16 s3 = queue_1[0];
  const SWord32 s4 = ptr_1;
  const SWord16 s5 = s0 ^ s3;

  return s5;
}
