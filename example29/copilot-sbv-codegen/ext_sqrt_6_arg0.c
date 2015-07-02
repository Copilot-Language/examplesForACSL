/* File: "ext_sqrt_6_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 (((((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))) * (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))) - ((((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))) * ((((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_position_x - Ext_intruder_position_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_position_y - Ext_intruder_position_y))) - (Ext_minimal_horizontal_separation * Ext_minimal_horizontal_separation))))
*/
/*@
 assigns \nothing;
 ensures \result == (((((((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((ext_ownship_velocity_x) - (ext_intruder_velocity_x))))) + (((((ext_ownship_position_y) - (ext_intruder_position_y))) * (((ext_ownship_velocity_y) - (ext_intruder_velocity_y))))))) * (((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((ext_ownship_velocity_x) - (ext_intruder_velocity_x))))) + (((((ext_ownship_position_y) - (ext_intruder_position_y))) * (((ext_ownship_velocity_y) - (ext_intruder_velocity_y))))))))) - (((((((((ext_ownship_velocity_x) - (ext_intruder_velocity_x))) * (((ext_ownship_velocity_x) - (ext_intruder_velocity_x))))) + (((((ext_ownship_velocity_y) - (ext_intruder_velocity_y))) * (((ext_ownship_velocity_y) - (ext_intruder_velocity_y))))))) * (((((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((ext_ownship_position_x) - (ext_intruder_position_x))))) + (((((ext_ownship_position_y) - (ext_intruder_position_y))) * (((ext_ownship_position_y) - (ext_intruder_position_y))))))) - (((ext_minimal_horizontal_separation) * (ext_minimal_horizontal_separation)))))))));
*/
SDouble ext_sqrt_6_arg0(const SDouble ext_ownship_position_x,
                        const SDouble ext_intruder_position_x,
                        const SDouble ext_ownship_velocity_x,
                        const SDouble ext_intruder_velocity_x,
                        const SDouble ext_ownship_position_y,
                        const SDouble ext_intruder_position_y,
                        const SDouble ext_ownship_velocity_y,
                        const SDouble ext_intruder_velocity_y,
                        const SDouble ext_minimal_horizontal_separation)
{
  const SDouble s0 = ext_ownship_position_x;
  const SDouble s1 = ext_intruder_position_x;
  const SDouble s2 = ext_ownship_velocity_x;
  const SDouble s3 = ext_intruder_velocity_x;
  const SDouble s4 = ext_ownship_position_y;
  const SDouble s5 = ext_intruder_position_y;
  const SDouble s6 = ext_ownship_velocity_y;
  const SDouble s7 = ext_intruder_velocity_y;
  const SDouble s8 = ext_minimal_horizontal_separation;
  const SDouble s9 = s0 - s1;
  const SDouble s10 = s2 - s3;
  const SDouble s11 = s9 * s10;
  const SDouble s12 = s4 - s5;
  const SDouble s13 = s6 - s7;
  const SDouble s14 = s12 * s13;
  const SDouble s15 = s11 + s14;
  const SDouble s16 = s15 * s15;
  const SDouble s17 = s10 * s10;
  const SDouble s18 = s13 * s13;
  const SDouble s19 = s17 + s18;
  const SDouble s20 = s9 * s9;
  const SDouble s21 = s12 * s12;
  const SDouble s22 = s20 + s21;
  const SDouble s23 = s8 * s8;
  const SDouble s24 = s22 - s23;
  const SDouble s25 = s19 * s24;
  const SDouble s26 = s16 - s25;

  return s26;
}
