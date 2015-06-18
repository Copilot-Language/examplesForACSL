/* File: "trigger_chksum_arg_1.c". Automatically generated by SBV. Do not edit! */

#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include "internal.h"

/*ACSL following*/
/*test 003*/
/*ACSL to write
 extern "crc_sbv(s0)"
*/
/*@
 assigns \nothing;
 ensures \result == ext_crc_sbv_1;
*/
SWord16 trigger_chksum_arg_1(const SWord16 ext_crc_sbv_1,
                             const SWord16 *queue_0, const SWord32 ptr_0)
{
  const SWord16 s0 = ext_crc_sbv_1;
  const SWord16 s1 = queue_0[0];
  const SWord32 s2 = ptr_0;
  return s0;
}
