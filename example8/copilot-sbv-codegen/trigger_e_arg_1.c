/* File: "trigger_e_arg_1.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 s4
*/
/*@
 assigns \nothing;
 ensures \result == (queue_4[ptr_4]);
*/
SWord64 trigger_e_arg_1(const SWord64 *queue_4,
                        const SWord32 ptr_4)
{
  const SWord64 s0 = queue_4[0];
  const SWord32 s1 = ptr_4;
  return s0;
}
