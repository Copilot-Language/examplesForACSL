/* File: "ext_ident_bool_42_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "zCriterion_part2.0" ((Extf_ident_bool(label "zCriterion_part2.2" ((Extf_ident_double(label "zCriterion_part2.2.1" signum (Ext_ownship_velocity_z - Ext_intruder_velocity_z)) * (Ext_ownship_planned_velocity_z - Ext_intruder_velocity_z)) >= 0.0)) && Extf_ident_bool(label "zCriterion_part2.1" (Extf_ident_bool(label "zCriterion_part2.1" ((Ext_ownship_velocity_z - Ext_intruder_velocity_z) < 0.0)) || Extf_ident_bool(label "zCriterion_part2.2" ((Ext_ownship_velocity_z - Ext_intruder_velocity_z) > 0.0))))) || (Extf_ident_bool(label "zCriterion_part2.3" ((Extf_ident_double(label "zCriterion_part2.3.1" Extf_ident_double(label "break_symetry" (if Extf_ident_bool(label "break_symetry_part1" (Extf_ident_bool(label "break_symetry_part1.1" ((Ext_ownship_position_z - Ext_intruder_position_z) < 0.0)) || Extf_ident_bool(label "break_symetry_part1.2" ((Ext_ownship_position_z - Ext_intruder_position_z) > 0.0)))) then Extf_ident_double(label "break_symetry_part2" signum (Ext_ownship_position_z - Ext_intruder_position_z)) else Extf_ident_double(label "break_symetry_part3" (if Extf_ident_bool(label "break_symetry_part3.1" (Extf_ident_bool(label "break_symetry_part3.1.1" ((Ext_ownship_position_x - Ext_intruder_position_x) < 0.0)) || Extf_ident_bool(label "break_symetry_part3.1.2" ((Ext_ownship_position_x - Ext_intruder_position_x) > 0.0)))) then Extf_ident_double(label "break_symetry_part3.2" signum (Ext_ownship_position_x - Ext_intruder_position_x)) else Extf_ident_double(label "break_symetry_part3.3" (if Extf_ident_bool(label "break_symetry_part3.3.1" (Extf_ident_bool(label "break_symetry_part3.3.1.1" ((Ext_ownship_position_y - Ext_intruder_position_y) <= 0.0)) && Extf_ident_bool(label "break_symetry_part3.3.1.2" ((Ext_ownship_position_y - Ext_intruder_position_y) >= 0.0)))) then 1.0 else Extf_ident_double(label "break_symetry_part3.3.2" signum (Ext_ownship_position_y - Ext_intruder_position_y))))))))) * (Ext_ownship_planned_velocity_z - Ext_intruder_velocity_z)) > 0.0)) && not Extf_ident_bool(label "zCriterion_part2.1" (Extf_ident_bool(label "zCriterion_part2.1" ((Ext_ownship_velocity_z - Ext_intruder_velocity_z) < 0.0)) || Extf_ident_bool(label "zCriterion_part2.2" ((Ext_ownship_velocity_z - Ext_intruder_velocity_z) > 0.0))))))
*/
/*@
 assigns \nothing;
 ensures \result == ((((((ext_ident_bool_18) && (ext_ident_bool_21))) || (((ext_ident_bool_38) && (! ((ext_ident_bool_41))))))));
*/
SBool ext_ident_bool_42_arg0(const SBool ext_ident_bool_18,
                             const SDouble ext_ident_double_17,
                             const SDouble ext_ownship_velocity_z,
                             const SDouble ext_intruder_velocity_z,
                             const SDouble ext_ownship_planned_velocity_z,
                             const SBool ext_ident_bool_21, const SBool ext_ident_bool_19,
                             const SBool ext_ident_bool_20, const SBool ext_ident_bool_38,
                             const SDouble ext_ident_double_37,
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
                             const SBool ext_ident_bool_41, const SBool ext_ident_bool_39,
                             const SBool ext_ident_bool_40)
{
  const SBool   s0 = ext_ident_bool_18;
  const SDouble s1 = ext_ident_double_17;
  const SDouble s2 = ext_ownship_velocity_z;
  const SDouble s3 = ext_intruder_velocity_z;
  const SDouble s4 = ext_ownship_planned_velocity_z;
  const SBool   s5 = ext_ident_bool_21;
  const SBool   s6 = ext_ident_bool_19;
  const SBool   s7 = ext_ident_bool_20;
  const SBool   s8 = ext_ident_bool_38;
  const SDouble s9 = ext_ident_double_37;
  const SDouble s10 = ext_ident_double_36;
  const SBool   s11 = ext_ident_bool_24;
  const SBool   s12 = ext_ident_bool_22;
  const SDouble s13 = ext_ownship_position_z;
  const SDouble s14 = ext_intruder_position_z;
  const SBool   s15 = ext_ident_bool_23;
  const SDouble s16 = ext_ident_double_25;
  const SDouble s17 = ext_ident_double_35;
  const SBool   s18 = ext_ident_bool_28;
  const SBool   s19 = ext_ident_bool_26;
  const SDouble s20 = ext_ownship_position_x;
  const SDouble s21 = ext_intruder_position_x;
  const SBool   s22 = ext_ident_bool_27;
  const SDouble s23 = ext_ident_double_29;
  const SDouble s24 = ext_ident_double_34;
  const SBool   s25 = ext_ident_bool_32;
  const SBool   s26 = ext_ident_bool_30;
  const SDouble s27 = ext_ownship_position_y;
  const SDouble s28 = ext_intruder_position_y;
  const SBool   s29 = ext_ident_bool_31;
  const SDouble s30 = ext_ident_double_33;
  const SBool   s31 = ext_ident_bool_41;
  const SBool   s32 = ext_ident_bool_39;
  const SBool   s33 = ext_ident_bool_40;
  const SBool   s34 = s0 && s5;
  const SBool   s35 = !s31;
  const SBool   s36 = s8 && s35;
  const SBool   s37 = s34 || s36;
  const SBool   s38 = s37 /* zCriterion_part2.0 */;

  return s38;
}