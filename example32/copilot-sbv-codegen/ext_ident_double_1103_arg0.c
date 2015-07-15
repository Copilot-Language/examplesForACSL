/* File: "ext_ident_double_1103_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "absolute_value_splitting" signum Extf_ident_double(label "dirVert_part1.1.1" (Extf_ident_double(label "ownPositionZ" (if s0 then Ext_ownship_position_z else s9)) - Extf_ident_double(label "intPositionZ" (if s0 then Ext_intruder_position_z else s10))))
*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ident_double_1102) > 0)? 1 : ((ext_ident_double_1102) < 0 ? -1 : 0)));
*/
SDouble ext_ident_double_1103_arg0(const SDouble ext_ident_double_1102,
                                   const SDouble ext_ident_double_1100, const SBool *queue_0,
                                   const SWord32 ptr_0, const SDouble ext_ownship_position_z,
                                   const SDouble *queue_9, const SWord32 ptr_9,
                                   const SDouble ext_ident_double_1101,
                                   const SDouble ext_intruder_position_z, const SDouble *queue_10,
                                   const SWord32 ptr_10)
{
  const SDouble s0 = ext_ident_double_1102;
  const SDouble s1 = ext_ident_double_1100;
  const SBool   s2 = queue_0[0];
  const SWord32 s3 = ptr_0;
  const SDouble s4 = ext_ownship_position_z;
  const SDouble s5 = queue_9[0];
  const SWord32 s6 = ptr_9;
  const SDouble s7 = ext_ident_double_1101;
  const SDouble s8 = ext_intruder_position_z;
  const SDouble s9 = queue_10[0];
  const SWord32 s10 = ptr_10;
  const SBool   s12 = s0 > 0.0;
  const SBool   s14 = s0 < 0.0;
  const SDouble s16 = s14 ? -1.0 : s0;
  const SDouble s17 = s12 ? 1.0 : s16;
  const SDouble s18 = s17 /* absolute_value_splitting */;

  return s18;
}