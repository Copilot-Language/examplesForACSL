/* File: "ext_ident_bool_389_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "criterion3D_part5" ((((Ext_ownship_position_x - Ext_intruder_position_x) * ((Ext_ownship_planned_velocity_x - Ext_intruder_velocity_x) - (Ext_ownship_velocity_x - Ext_intruder_velocity_x))) + ((Ext_ownship_position_y - Ext_intruder_position_y) * ((Ext_ownship_planned_velocity_y - Ext_intruder_velocity_y) - (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))) >= ((Ext_direction_parameter_horizontal * (Extf_ident_double(label "hor_rr_dividend" Extf_sqrt((Extf_ident_double(label "normsq2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_position_x - Ext_intruder_position_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_position_y - Ext_intruder_position_y)))) - (Ext_minimal_horizontal_separation * Ext_minimal_horizontal_separation)))) / Extf_ident_double(label "hor_rr_divisor" Ext_minimal_horizontal_separation))) * (((Ext_ownship_position_x - Ext_intruder_position_x) * ((Ext_ownship_planned_velocity_y - Ext_intruder_velocity_y) - (Ext_ownship_velocity_y - Ext_intruder_velocity_y))) - (((Ext_ownship_planned_velocity_x - Ext_intruder_velocity_x) - (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) * (Ext_ownship_position_y - Ext_intruder_position_y)))))
*/
/*@
 assigns \nothing;
 ensures \result == ((((((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((((ext_ownship_planned_velocity_x) - (ext_intruder_velocity_x))) - (((ext_ownship_velocity_x) - (ext_intruder_velocity_x))))))) + (((((ext_ownship_position_y) - (ext_intruder_position_y))) * (((((ext_ownship_planned_velocity_y) - (ext_intruder_velocity_y))) - (((ext_ownship_velocity_y) - (ext_intruder_velocity_y))))))))) >= (((((ext_direction_parameter_horizontal) * (((ext_ident_double_387) / (ext_ident_double_388))))) * (((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((((ext_ownship_planned_velocity_y) - (ext_intruder_velocity_y))) - (((ext_ownship_velocity_y) - (ext_intruder_velocity_y))))))) - (((((((ext_ownship_planned_velocity_x) - (ext_intruder_velocity_x))) - (((ext_ownship_velocity_x) - (ext_intruder_velocity_x))))) * (((ext_ownship_position_y) - (ext_intruder_position_y))))))))))));
*/
SBool ext_ident_bool_389_arg0(const SDouble ext_ownship_position_x,
                              const SDouble ext_intruder_position_x,
                              const SDouble ext_ownship_planned_velocity_x,
                              const SDouble ext_intruder_velocity_x,
                              const SDouble ext_ownship_velocity_x,
                              const SDouble ext_ownship_position_y,
                              const SDouble ext_intruder_position_y,
                              const SDouble ext_ownship_planned_velocity_y,
                              const SDouble ext_intruder_velocity_y,
                              const SDouble ext_ownship_velocity_y,
                              const SDouble ext_direction_parameter_horizontal,
                              const SDouble ext_ident_double_387, const SDouble ext_sqrt_386,
                              const SDouble ext_ident_double_385,
                              const SDouble ext_minimal_horizontal_separation,
                              const SDouble ext_ident_double_388)
{
  const SDouble s0 = ext_ownship_position_x;
  const SDouble s1 = ext_intruder_position_x;
  const SDouble s2 = ext_ownship_planned_velocity_x;
  const SDouble s3 = ext_intruder_velocity_x;
  const SDouble s4 = ext_ownship_velocity_x;
  const SDouble s5 = ext_ownship_position_y;
  const SDouble s6 = ext_intruder_position_y;
  const SDouble s7 = ext_ownship_planned_velocity_y;
  const SDouble s8 = ext_intruder_velocity_y;
  const SDouble s9 = ext_ownship_velocity_y;
  const SDouble s10 = ext_direction_parameter_horizontal;
  const SDouble s11 = ext_ident_double_387;
  const SDouble s12 = ext_sqrt_386;
  const SDouble s13 = ext_ident_double_385;
  const SDouble s14 = ext_minimal_horizontal_separation;
  const SDouble s15 = ext_ident_double_388;
  const SDouble s16 = s0 - s1;
  const SDouble s17 = s2 - s3;
  const SDouble s18 = s4 - s3;
  const SDouble s19 = s17 - s18;
  const SDouble s20 = s16 * s19;
  const SDouble s21 = s5 - s6;
  const SDouble s22 = s7 - s8;
  const SDouble s23 = s9 - s8;
  const SDouble s24 = s22 - s23;
  const SDouble s25 = s21 * s24;
  const SDouble s26 = s20 + s25;
  const SDouble s27 = s11 / s15;
  const SDouble s28 = s10 * s27;
  const SDouble s29 = s16 * s24;
  const SDouble s30 = s19 * s21;
  const SDouble s31 = s29 - s30;
  const SDouble s32 = s28 * s31;
  const SBool   s33 = s26 >= s32;
  const SBool   s34 = s33 /* criterion3D_part5 */;

  return s34;
}