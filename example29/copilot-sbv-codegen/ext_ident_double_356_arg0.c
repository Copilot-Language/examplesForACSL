/* File: "ext_ident_double_356_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "absolute_value_splitting" signum Extf_ident_double(label "dirVert_part1.1.1" (Ext_ownship_position_z - Ext_intruder_position_z))
*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ident_double_355) > 0)? 1 : ((ext_ident_double_355) < 0 ? -1 : 0)));
*/
SDouble ext_ident_double_356_arg0(const SDouble ext_ident_double_355,
                                  const SDouble ext_ownship_position_z,
                                  const SDouble ext_intruder_position_z)
{
  const SDouble s0 = ext_ident_double_355;
  const SDouble s1 = ext_ownship_position_z;
  const SDouble s2 = ext_intruder_position_z;
  const SBool   s4 = s0 > 0.0;
  const SBool   s6 = s0 < 0.0;
  const SDouble s8 = s6 ? -1.0 : s0;
  const SDouble s9 = s4 ? 1.0 : s8;
  const SDouble s10 = s9 /* absolute_value_splitting */;

  return s10;
}
