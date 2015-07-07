/* File: "ext_ident_double_168_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "thetaVert_part1.1" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))
*/
/*@
 assigns \nothing;
 ensures \result == ((((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((ext_ownship_velocity_x) - (ext_intruder_velocity_x))))) + (((((ext_ownship_position_y) - (ext_intruder_position_y))) * (((ext_ownship_velocity_y) - (ext_intruder_velocity_y))))))));
*/
SDouble ext_ident_double_168_arg0(const SDouble ext_ownship_position_x,
                                  const SDouble ext_intruder_position_x,
                                  const SDouble ext_ownship_velocity_x,
                                  const SDouble ext_intruder_velocity_x,
                                  const SDouble ext_ownship_position_y,
                                  const SDouble ext_intruder_position_y,
                                  const SDouble ext_ownship_velocity_y,
                                  const SDouble ext_intruder_velocity_y)
{
  const SDouble s0 = ext_ownship_position_x;
  const SDouble s1 = ext_intruder_position_x;
  const SDouble s2 = ext_ownship_velocity_x;
  const SDouble s3 = ext_intruder_velocity_x;
  const SDouble s4 = ext_ownship_position_y;
  const SDouble s5 = ext_intruder_position_y;
  const SDouble s6 = ext_ownship_velocity_y;
  const SDouble s7 = ext_intruder_velocity_y;
  const SDouble s8 = s0 - s1;
  const SDouble s9 = s2 - s3;
  const SDouble s10 = s8 * s9;
  const SDouble s11 = s4 - s5;
  const SDouble s12 = s6 - s7;
  const SDouble s13 = s11 * s12;
  const SDouble s14 = s10 + s13;
  const SDouble s15 = s14 /* thetaVert_part1.1 */;

  return s15;
}
