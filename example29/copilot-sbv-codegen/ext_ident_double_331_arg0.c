/* File: "ext_ident_double_331_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "dirVert_part1.1" (Extf_ident_double(label "dirVert_part1.1.1" (Ext_ownship_position_z - Ext_intruder_position_z)) * Extf_ident_double(label "absolute_value_splitting" signum Extf_ident_double(label "dirVert_part1.1.1" (Ext_ownship_position_z - Ext_intruder_position_z))))
*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ident_double_328) * (ext_ident_double_330))));
*/
SDouble ext_ident_double_331_arg0(const SDouble ext_ident_double_328,
                                  const SDouble ext_ownship_position_z,
                                  const SDouble ext_intruder_position_z,
                                  const SDouble ext_ident_double_330,
                                  const SDouble ext_ident_double_329)
{
  const SDouble s0 = ext_ident_double_328;
  const SDouble s1 = ext_ownship_position_z;
  const SDouble s2 = ext_intruder_position_z;
  const SDouble s3 = ext_ident_double_330;
  const SDouble s4 = ext_ident_double_329;
  const SDouble s5 = s0 * s3;
  const SDouble s6 = s5 /* dirVert_part1.1 */;

  return s6;
}
