/* File: "ext_ident_double_260_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "dirVert_part1.1.1" (Ext_ownship_position_z - Ext_intruder_position_z)
*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ownship_position_z) - (ext_intruder_position_z))));
*/
SDouble ext_ident_double_260_arg0(const SDouble ext_ownship_position_z,
                                  const SDouble ext_intruder_position_z)
{
  const SDouble s0 = ext_ownship_position_z;
  const SDouble s1 = ext_intruder_position_z;
  const SDouble s2 = s0 - s1;
  const SDouble s3 = s2 /* dirVert_part1.1.1 */;

  return s3;
}
