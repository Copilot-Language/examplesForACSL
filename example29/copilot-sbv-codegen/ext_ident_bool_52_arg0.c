/* File: "ext_ident_bool_52_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "vertical_los_criterion" (Extf_ident_bool(label "verticalCriterionLoss_part1" (Extf_ident_double(label "verticalCriterionLoss_part1.1" ((Ext_ownship_position_z - Ext_intruder_position_z) * Extf_ident_double(label "absolute_value_splitting" signum (Ext_ownship_position_z - Ext_intruder_position_z)))) < Ext_minimal_vertical_separation)) && (Extf_ident_bool(label "verticalCriterionLoss_part2" (Extf_ident_bool(label "zCriterion_part1" (Extf_ident_bool(label "zCriterion_part1.1" ((Ext_ownship_planned_velocity_z - Ext_intruder_velocity_z) < 0.0)) || Extf_ident_bool(label "zCriterion_part1.2" ((Ext_ownship_planned_velocity_z - Ext_intruder_velocity_z) > 0.0)))) && (Extf_ident_bool(label "z_prop?(sz;v'z)" (((Ext_ownship_position_z - Ext_intruder_position_z) * (Ext_ownship_planned_velocity_z - Ext_intruder_velocity_z)) >= 0.0)) && Extf_ident_bool(label "zCriterion_part2" (not Extf_ident_bool(label "z_prop?(sz;v'z)" (((Ext_ownship_position_z - Ext_intruder_position_z) * (Ext_ownship_planned_velocity_z - Ext_intruder_velocity_z)) >= 0.0)) || Extf_ident_bool(label "zCriterion_part2.0" ((Extf_ident_bool(label "zCriterion_part2.2" ((Extf_ident_double(label "zCriterion_part2.2.1" signum (Ext_ownship_velocity_z - Ext_intruder_velocity_z)) * (Ext_ownship_planned_velocity_z - Ext_intruder_velocity_z)) >= 0.0)) && Extf_ident_bool(label "zCriterion_part2.1" (Extf_ident_bool(label "zCriterion_part2.1" ((Ext_ownship_velocity_z - Ext_intruder_velocity_z) < 0.0)) || Extf_ident_bool(label "zCriterion_part2.2" ((Ext_ownship_velocity_z - Ext_intruder_velocity_z) > 0.0))))) || (Extf_ident_bool(label "zCriterion_part2.3" ((Extf_ident_double(label "zCriterion_part2.3.1" Extf_ident_double(label "break_symetry" (if Extf_ident_bool(label "break_symetry_part1" (Extf_ident_bool(label "break_symetry_part1.1" ((Ext_ownship_position_z - Ext_intruder_position_z) < 0.0)) || Extf_ident_bool(label "break_symetry_part1.2" ((Ext_ownship_position_z - Ext_intruder_position_z) > 0.0)))) then Extf_ident_double(label "break_symetry_part2" signum (Ext_ownship_position_z - Ext_intruder_position_z)) else Extf_ident_double(label "break_symetry_part3" (if Extf_ident_bool(label "break_symetry_part3.1" (Extf_ident_bool(label "break_symetry_part3.1.1" ((Ext_ownship_position_x - Ext_intruder_position_x) < 0.0)) || Extf_ident_bool(label "break_symetry_part3.1.2" ((Ext_ownship_position_x - Ext_intruder_position_x) > 0.0)))) then Extf_ident_double(label "break_symetry_part3.2" signum (Ext_ownship_position_x - Ext_intruder_position_x)) else Extf_ident_double(label "break_symetry_part3.3" (if Extf_ident_bool(label "break_symetry_part3.3.1" (Extf_ident_bool(label "break_symetry_part3.3.1.1" ((Ext_ownship_position_y - Ext_intruder_position_y) <= 0.0)) && Extf_ident_bool(label "break_symetry_part3.3.1.2" ((Ext_ownship_position_y - Ext_intruder_position_y) >= 0.0)))) then 1.0 else Extf_ident_double(label "break_symetry_part3.3.2" signum (Ext_ownship_position_y - Ext_intruder_position_y))))))))) * (Ext_ownship_planned_velocity_z - Ext_intruder_velocity_z)) > 0.0)) && not Extf_ident_bool(label "zCriterion_part2.1" (Extf_ident_bool(label "zCriterion_part2.1" ((Ext_ownship_velocity_z - Ext_intruder_velocity_z) < 0.0)) || Extf_ident_bool(label "zCriterion_part2.2" ((Ext_ownship_velocity_z - Ext_intruder_velocity_z) > 0.0)))))))))))) && Extf_ident_bool(label "verticalCriterionLoss_part3" (Ext_maximum_time_for_violation >= Extf_ident_double(label "verticalCriterionLoss_part3.1" Extf_ident_double(label "ttez" (Extf_ident_double(label "ttez_dividend" ((Ext_minimal_vertical_separation * Extf_ident_double(label "ttez_part01" signum (Ext_ownship_velocity_z - Ext_intruder_velocity_z))) - Extf_ident_double(label "ttez_part02" (Ext_ownship_position_z - Ext_intruder_position_z)))) / Extf_ident_double(label "ttez_divisor" (Ext_ownship_velocity_z - Ext_intruder_velocity_z)))))))))
*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ident_bool_11) && (((ext_ident_bool_44) && (ext_ident_bool_51))))));
*/
SBool ext_ident_bool_52_arg0(const SBool ext_ident_bool_11,
                             const SDouble ext_ident_double_10,
                             const SDouble ext_ownship_position_z,
                             const SDouble ext_intruder_position_z,
                             const SDouble ext_ident_double_9,
                             const SDouble ext_minimal_vertical_separation,
                             const SBool ext_ident_bool_44, const SBool ext_ident_bool_14,
                             const SBool ext_ident_bool_12,
                             const SDouble ext_ownship_planned_velocity_z,
                             const SDouble ext_intruder_velocity_z,
                             const SBool ext_ident_bool_13, const SBool ext_ident_bool_15,
                             const SBool ext_ident_bool_43, const SBool ext_ident_bool_16,
                             const SBool ext_ident_bool_42, const SBool ext_ident_bool_18,
                             const SDouble ext_ident_double_17,
                             const SDouble ext_ownship_velocity_z,
                             const SBool ext_ident_bool_21, const SBool ext_ident_bool_19,
                             const SBool ext_ident_bool_20, const SBool ext_ident_bool_38,
                             const SDouble ext_ident_double_37,
                             const SDouble ext_ident_double_36, const SBool ext_ident_bool_24,
                             const SBool ext_ident_bool_22, const SBool ext_ident_bool_23,
                             const SDouble ext_ident_double_25,
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
                             const SBool ext_ident_bool_40, const SBool ext_ident_bool_51,
                             const SDouble ext_maximum_time_for_violation,
                             const SDouble ext_ident_double_50,
                             const SDouble ext_ident_double_49,
                             const SDouble ext_ident_double_47,
                             const SDouble ext_ident_double_45,
                             const SDouble ext_ident_double_46,
                             const SDouble ext_ident_double_48)
{
  const SBool   s0 = ext_ident_bool_11;
  const SDouble s1 = ext_ident_double_10;
  const SDouble s2 = ext_ownship_position_z;
  const SDouble s3 = ext_intruder_position_z;
  const SDouble s4 = ext_ident_double_9;
  const SDouble s5 = ext_minimal_vertical_separation;
  const SBool   s6 = ext_ident_bool_44;
  const SBool   s7 = ext_ident_bool_14;
  const SBool   s8 = ext_ident_bool_12;
  const SDouble s9 = ext_ownship_planned_velocity_z;
  const SDouble s10 = ext_intruder_velocity_z;
  const SBool   s11 = ext_ident_bool_13;
  const SBool   s12 = ext_ident_bool_15;
  const SBool   s13 = ext_ident_bool_43;
  const SBool   s14 = ext_ident_bool_16;
  const SBool   s15 = ext_ident_bool_42;
  const SBool   s16 = ext_ident_bool_18;
  const SDouble s17 = ext_ident_double_17;
  const SDouble s18 = ext_ownship_velocity_z;
  const SBool   s19 = ext_ident_bool_21;
  const SBool   s20 = ext_ident_bool_19;
  const SBool   s21 = ext_ident_bool_20;
  const SBool   s22 = ext_ident_bool_38;
  const SDouble s23 = ext_ident_double_37;
  const SDouble s24 = ext_ident_double_36;
  const SBool   s25 = ext_ident_bool_24;
  const SBool   s26 = ext_ident_bool_22;
  const SBool   s27 = ext_ident_bool_23;
  const SDouble s28 = ext_ident_double_25;
  const SDouble s29 = ext_ident_double_35;
  const SBool   s30 = ext_ident_bool_28;
  const SBool   s31 = ext_ident_bool_26;
  const SDouble s32 = ext_ownship_position_x;
  const SDouble s33 = ext_intruder_position_x;
  const SBool   s34 = ext_ident_bool_27;
  const SDouble s35 = ext_ident_double_29;
  const SDouble s36 = ext_ident_double_34;
  const SBool   s37 = ext_ident_bool_32;
  const SBool   s38 = ext_ident_bool_30;
  const SDouble s39 = ext_ownship_position_y;
  const SDouble s40 = ext_intruder_position_y;
  const SBool   s41 = ext_ident_bool_31;
  const SDouble s42 = ext_ident_double_33;
  const SBool   s43 = ext_ident_bool_41;
  const SBool   s44 = ext_ident_bool_39;
  const SBool   s45 = ext_ident_bool_40;
  const SBool   s46 = ext_ident_bool_51;
  const SDouble s47 = ext_maximum_time_for_violation;
  const SDouble s48 = ext_ident_double_50;
  const SDouble s49 = ext_ident_double_49;
  const SDouble s50 = ext_ident_double_47;
  const SDouble s51 = ext_ident_double_45;
  const SDouble s52 = ext_ident_double_46;
  const SDouble s53 = ext_ident_double_48;
  const SBool   s54 = s6 && s46;
  const SBool   s55 = s0 && s54;
  const SBool   s56 = s55 /* vertical_los_criterion */;

  return s56;
}
