/* File: "ext_ident_double_1102_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "dirVert_part1.1.1" (Extf_ident_double(label "ownPositionZ" (if s0 then Ext_ownship_position_z else s9)) - Extf_ident_double(label "intPositionZ" (if s0 then Ext_intruder_position_z else s10)))
*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ident_double_1100) - (ext_ident_double_1101))));
*/
SDouble ext_ident_double_1102_arg0(const SDouble ext_ident_double_1100,
                                   const SBool *queue_0, const SWord32 ptr_0,
                                   const SDouble ext_ownship_position_z, const SDouble *queue_9,
                                   const SWord32 ptr_9, const SDouble ext_ident_double_1101,
                                   const SDouble ext_intruder_position_z, const SDouble *queue_10,
                                   const SWord32 ptr_10)
{
  const SDouble s0 = ext_ident_double_1100;
  const SBool   s1 = queue_0[0];
  const SWord32 s2 = ptr_0;
  const SDouble s3 = ext_ownship_position_z;
  const SDouble s4 = queue_9[0];
  const SWord32 s5 = ptr_9;
  const SDouble s6 = ext_ident_double_1101;
  const SDouble s7 = ext_intruder_position_z;
  const SDouble s8 = queue_10[0];
  const SWord32 s9 = ptr_10;
  const SDouble s10 = s0 - s6;
  const SDouble s11 = s10 /* dirVert_part1.1.1 */;

  return s11;
}
