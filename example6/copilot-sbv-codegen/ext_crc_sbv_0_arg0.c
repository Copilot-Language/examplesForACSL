/* File: "ext_crc_sbv_0_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/*ACSL following*/
/*test 003*/
/*ACSL to write
 s0
*/
/*@
 assigns \nothing;
 ensures \result == queue_0[ptr_0];
*/
SWord16 ext_crc_sbv_0_arg0(const SWord16 *queue_0,
                           const SWord32 ptr_0)
{
  const SWord16 s0 = queue_0[0];
  const SWord32 s1 = ptr_0;
  return s0;
}
