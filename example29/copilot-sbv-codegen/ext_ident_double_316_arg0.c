/* File: "ext_ident_double_316_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "thetaVert_part2.3" (Extf_ident_double(label "thetaVert_part2.3.1" Extf_ident_double(label "normsq2dim" (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) * Extf_ident_double(label "thetaVert_part2.3.2" (Extf_ident_double(label "normsq2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_position_x - Ext_intruder_position_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_position_y - Ext_intruder_position_y)))) - (Ext_minimal_horizontal_separation * Ext_minimal_horizontal_separation))))
*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ident_double_313) * (ext_ident_double_315))));
*/
SDouble ext_ident_double_316_arg0(const SDouble ext_ident_double_313,
                                  const SDouble ext_ident_double_312,
                                  const SDouble ext_ownship_velocity_x,
                                  const SDouble ext_intruder_velocity_x,
                                  const SDouble ext_ownship_velocity_y,
                                  const SDouble ext_intruder_velocity_y,
                                  const SDouble ext_ident_double_315,
                                  const SDouble ext_ident_double_314,
                                  const SDouble ext_ownship_position_x,
                                  const SDouble ext_intruder_position_x,
                                  const SDouble ext_ownship_position_y,
                                  const SDouble ext_intruder_position_y,
                                  const SDouble ext_minimal_horizontal_separation)
{
  const SDouble s0 = ext_ident_double_313;
  const SDouble s1 = ext_ident_double_312;
  const SDouble s2 = ext_ownship_velocity_x;
  const SDouble s3 = ext_intruder_velocity_x;
  const SDouble s4 = ext_ownship_velocity_y;
  const SDouble s5 = ext_intruder_velocity_y;
  const SDouble s6 = ext_ident_double_315;
  const SDouble s7 = ext_ident_double_314;
  const SDouble s8 = ext_ownship_position_x;
  const SDouble s9 = ext_intruder_position_x;
  const SDouble s10 = ext_ownship_position_y;
  const SDouble s11 = ext_intruder_position_y;
  const SDouble s12 = ext_minimal_horizontal_separation;
  const SDouble s13 = s0 * s6;
  const SDouble s14 = s13 /* thetaVert_part2.3 */;

  return s14;
}
