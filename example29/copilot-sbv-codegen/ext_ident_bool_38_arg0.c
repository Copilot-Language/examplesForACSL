/* File: "ext_ident_bool_38_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "zCriterion_part2.3" ((Extf_ident_double(label "zCriterion_part2.3.1" Extf_ident_double(label "break_symetry" (if Extf_ident_bool(label "break_symetry_part1" (Extf_ident_bool(label "break_symetry_part1.1" ((Ext_ownship_position_z - Ext_intruder_position_z) < 0.0)) || Extf_ident_bool(label "break_symetry_part1.2" ((Ext_ownship_position_z - Ext_intruder_position_z) > 0.0)))) then Extf_ident_double(label "break_symetry_part2" signum (Ext_ownship_position_z - Ext_intruder_position_z)) else Extf_ident_double(label "break_symetry_part3" (if Extf_ident_bool(label "break_symetry_part3.1" (Extf_ident_bool(label "break_symetry_part3.1.1" ((Ext_ownship_position_x - Ext_intruder_position_x) < 0.0)) || Extf_ident_bool(label "break_symetry_part3.1.2" ((Ext_ownship_position_x - Ext_intruder_position_x) > 0.0)))) then Extf_ident_double(label "break_symetry_part3.2" signum (Ext_ownship_position_x - Ext_intruder_position_x)) else Extf_ident_double(label "break_symetry_part3.3" (if Extf_ident_bool(label "break_symetry_part3.3.1" (Extf_ident_bool(label "break_symetry_part3.3.1.1" ((Ext_ownship_position_y - Ext_intruder_position_y) <= 0.0)) && Extf_ident_bool(label "break_symetry_part3.3.1.2" ((Ext_ownship_position_y - Ext_intruder_position_y) >= 0.0)))) then 1.0 else Extf_ident_double(label "break_symetry_part3.3.2" signum (Ext_ownship_position_y - Ext_intruder_position_y))))))))) * (Ext_ownship_planned_velocity_z - Ext_intruder_velocity_z)) > 0.0)
*/
/*@
 assigns \nothing;
 ensures \result == ((((((ext_ident_double_37) * (((ext_ownship_planned_velocity_z) - (ext_intruder_velocity_z))))) > (0.0))));
*/
SBool ext_ident_bool_38_arg0(const SDouble ext_ident_double_37,
                             const SDouble ext_ident_double_36, const SBool ext_ident_bool_24,
                             const SBool ext_ident_bool_22,
                             const SDouble ext_ownship_position_z,
                             const SDouble ext_intruder_position_z,
                             const SBool ext_ident_bool_23, const SDouble ext_ident_double_25,
                             const SDouble ext_ident_double_35, const SBool ext_ident_bool_28,
                             const SBool ext_ident_bool_26,
                             const SDouble ext_ownship_position_x,
                             const SDouble ext_intruder_position_x,
                             const SBool ext_ident_bool_27, const SDouble ext_ident_double_29,
                             const SDouble ext_ident_double_34, const SBool ext_ident_bool_32,
                             const SBool ext_ident_bool_30,
                             const SDouble ext_ownship_position_y,
                             const SDouble ext_intruder_position_y,
                             const SBool ext_ident_bool_31, const SDouble ext_ident_double_33,
                             const SDouble ext_ownship_planned_velocity_z,
                             const SDouble ext_intruder_velocity_z)
{
  const SDouble s0 = ext_ident_double_37;
  const SDouble s1 = ext_ident_double_36;
  const SBool   s2 = ext_ident_bool_24;
  const SBool   s3 = ext_ident_bool_22;
  const SDouble s4 = ext_ownship_position_z;
  const SDouble s5 = ext_intruder_position_z;
  const SBool   s6 = ext_ident_bool_23;
  const SDouble s7 = ext_ident_double_25;
  const SDouble s8 = ext_ident_double_35;
  const SBool   s9 = ext_ident_bool_28;
  const SBool   s10 = ext_ident_bool_26;
  const SDouble s11 = ext_ownship_position_x;
  const SDouble s12 = ext_intruder_position_x;
  const SBool   s13 = ext_ident_bool_27;
  const SDouble s14 = ext_ident_double_29;
  const SDouble s15 = ext_ident_double_34;
  const SBool   s16 = ext_ident_bool_32;
  const SBool   s17 = ext_ident_bool_30;
  const SDouble s18 = ext_ownship_position_y;
  const SDouble s19 = ext_intruder_position_y;
  const SBool   s20 = ext_ident_bool_31;
  const SDouble s21 = ext_ident_double_33;
  const SDouble s22 = ext_ownship_planned_velocity_z;
  const SDouble s23 = ext_intruder_velocity_z;
  const SDouble s24 = s22 - s23;
  const SDouble s25 = s0 * s24;
  const SBool   s27 = s25 > 0.0;
  const SBool   s28 = s27 /* zCriterion_part2.3 */;

  return s28;
}