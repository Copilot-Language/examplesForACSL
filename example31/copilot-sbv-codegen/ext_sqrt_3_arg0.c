/* File: "ext_sqrt_3_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 ((((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_position_x - Ext_intruder_position_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_position_y - Ext_intruder_position_y))) - (Ext_minimal_horizontal_separation * Ext_minimal_horizontal_separation))
*/
/*@
 assigns \nothing;
 ensures \result == (((((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((ext_ownship_position_x) - (ext_intruder_position_x))))) + (((((ext_ownship_position_y) - (ext_intruder_position_y))) * (((ext_ownship_position_y) - (ext_intruder_position_y))))))) - (((ext_minimal_horizontal_separation) * (ext_minimal_horizontal_separation)))));
*/
SDouble ext_sqrt_3_arg0(const SDouble ext_ownship_position_x,
                        const SDouble ext_intruder_position_x,
                        const SDouble ext_ownship_position_y,
                        const SDouble ext_intruder_position_y,
                        const SDouble ext_minimal_horizontal_separation)
{
  const SDouble s0 = ext_ownship_position_x;
  const SDouble s1 = ext_intruder_position_x;
  const SDouble s2 = ext_ownship_position_y;
  const SDouble s3 = ext_intruder_position_y;
  const SDouble s4 = ext_minimal_horizontal_separation;
  const SDouble s5 = s0 - s1;
  const SDouble s6 = s5 * s5;
  const SDouble s7 = s2 - s3;
  const SDouble s8 = s7 * s7;
  const SDouble s9 = s6 + s8;
  const SDouble s10 = s4 * s4;
  const SDouble s11 = s9 - s10;

  return s11;
}
