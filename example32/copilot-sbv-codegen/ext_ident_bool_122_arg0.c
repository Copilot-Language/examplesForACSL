/* File: "ext_ident_bool_122_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "verticalCriterionLoss_part2" (Extf_ident_bool(label "zCriterion_part1" (Extf_ident_bool(label "zCriterion_part1.1" ((Ext_ownship_velocity_z - Extf_ident_double(label "intVelocityZ" (if s0 then Ext_intruder_velocity_z else s11))) < 0.0)) || Extf_ident_bool(label "zCriterion_part1.2" ((Ext_ownship_velocity_z - Extf_ident_double(label "intVelocityZ" (if s0 then Ext_intruder_velocity_z else s11))) > 0.0)))) && (Extf_ident_bool(label "z_prop(sz,v'z)" (((Extf_ident_double(label "ownPositionZ" (if s0 then Ext_ownship_position_z else s9)) - Extf_ident_double(label "intPositionZ" (if s0 then Ext_intruder_position_z else s10))) * (Ext_ownship_velocity_z - Extf_ident_double(label "intVelocityZ" (if s0 then Ext_intruder_velocity_z else s11)))) >= 0.0)) && Extf_ident_bool(label "zCriterion_part2" (not Extf_ident_bool(label "z_prop(sz,v'z)" (((Extf_ident_double(label "ownPositionZ" (if s0 then Ext_ownship_position_z else s9)) - Extf_ident_double(label "intPositionZ" (if s0 then Ext_intruder_position_z else s10))) * (Ext_ownship_velocity_z - Extf_ident_double(label "intVelocityZ" (if s0 then Ext_intruder_velocity_z else s11)))) >= 0.0)) || Extf_ident_bool(label "zCriterion_part2.0" ((Extf_ident_bool(label "zCriterion_part2.2" ((Extf_ident_double(label "zCriterion_part2.2.1" signum (Extf_ident_double(label "ownVelocityZ" (if s0 then Ext_ownship_velocity_z else s12)) - Extf_ident_double(label "intVelocityZ" (if s0 then Ext_intruder_velocity_z else s11)))) * (Ext_ownship_velocity_z - Extf_ident_double(label "intVelocityZ" (if s0 then Ext_intruder_velocity_z else s11)))) >= 0.0)) && Extf_ident_bool(label "zCriterion_part2.1" (Extf_ident_bool(label "zCriterion_part2.1" ((Extf_ident_double(label "ownVelocityZ" (if s0 then Ext_ownship_velocity_z else s12)) - Extf_ident_double(label "intVelocityZ" (if s0 then Ext_intruder_velocity_z else s11))) < 0.0)) || Extf_ident_bool(label "zCriterion_part2.2" ((Extf_ident_double(label "ownVelocityZ" (if s0 then Ext_ownship_velocity_z else s12)) - Extf_ident_double(label "intVelocityZ" (if s0 then Ext_intruder_velocity_z else s11))) > 0.0))))) || (Extf_ident_bool(label "zCriterion_part2.3" ((Extf_ident_double(label "zCriterion_part2.3.1" Extf_ident_double(label "break_symetry" (if Extf_ident_bool(label "break_symetry_part1" (Extf_ident_bool(label "break_symetry_part1.1" ((Extf_ident_double(label "ownPositionZ" (if s0 then Ext_ownship_position_z else s9)) - Extf_ident_double(label "intPositionZ" (if s0 then Ext_intruder_position_z else s10))) < 0.0)) || Extf_ident_bool(label "break_symetry_part1.2" ((Extf_ident_double(label "ownPositionZ" (if s0 then Ext_ownship_position_z else s9)) - Extf_ident_double(label "intPositionZ" (if s0 then Ext_intruder_position_z else s10))) > 0.0)))) then Extf_ident_double(label "break_symetry_part2" signum (Extf_ident_double(label "ownPositionZ" (if s0 then Ext_ownship_position_z else s9)) - Extf_ident_double(label "intPositionZ" (if s0 then Ext_intruder_position_z else s10)))) else Extf_ident_double(label "break_symetry_part3" (if Extf_ident_bool(label "break_symetry_part3.1" (Extf_ident_bool(label "break_symetry_part3.1.1" ((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) < 0.0)) || Extf_ident_bool(label "break_symetry_part3.1.2" ((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) > 0.0)))) then Extf_ident_double(label "break_symetry_part3.2" signum (Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2)))) else Extf_ident_double(label "break_symetry_part3.3" (if Extf_ident_bool(label "break_symetry_part3.3.1" (Extf_ident_bool(label "break_symetry_part3.3.1.1" ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) <= 0.0)) && Extf_ident_bool(label "break_symetry_part3.3.1.2" ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) >= 0.0)))) then 1.0 else Extf_ident_double(label "break_symetry_part3.3.2" signum (Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))))))))))) * (Ext_ownship_velocity_z - Extf_ident_double(label "intVelocityZ" (if s0 then Ext_intruder_velocity_z else s11)))) > 0.0)) && not Extf_ident_bool(label "zCriterion_part2.1" (Extf_ident_bool(label "zCriterion_part2.1" ((Extf_ident_double(label "ownVelocityZ" (if s0 then Ext_ownship_velocity_z else s12)) - Extf_ident_double(label "intVelocityZ" (if s0 then Ext_intruder_velocity_z else s11))) < 0.0)) || Extf_ident_bool(label "zCriterion_part2.2" ((Extf_ident_double(label "ownVelocityZ" (if s0 then Ext_ownship_velocity_z else s12)) - Extf_ident_double(label "intVelocityZ" (if s0 then Ext_intruder_velocity_z else s11))) > 0.0)))))))))))
*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ident_bool_56) && (((ext_ident_bool_60) && (ext_ident_bool_121))))));
*/
SBool ext_ident_bool_122_arg0(const SBool ext_ident_bool_56,
                              const SBool ext_ident_bool_53,
                              const SDouble ext_ownship_velocity_z,
                              const SDouble ext_ident_double_52, const SBool *queue_0,
                              const SWord32 ptr_0, const SDouble ext_intruder_velocity_z,
                              const SDouble *queue_11, const SWord32 ptr_11,
                              const SBool ext_ident_bool_55, const SDouble ext_ident_double_54,
                              const SBool ext_ident_bool_60, const SDouble ext_ident_double_57,
                              const SDouble ext_ownship_position_z, const SDouble *queue_9,
                              const SWord32 ptr_9, const SDouble ext_ident_double_58,
                              const SDouble ext_intruder_position_z, const SDouble *queue_10,
                              const SWord32 ptr_10, const SDouble ext_ident_double_59,
                              const SBool ext_ident_bool_121, const SBool ext_ident_bool_64,
                              const SDouble ext_ident_double_61,
                              const SDouble ext_ident_double_62,
                              const SDouble ext_ident_double_63, const SBool ext_ident_bool_120,
                              const SBool ext_ident_bool_69, const SDouble ext_ident_double_67,
                              const SDouble ext_ident_double_65, const SDouble *queue_12,
                              const SWord32 ptr_12, const SDouble ext_ident_double_66,
                              const SDouble ext_ident_double_68, const SBool ext_ident_bool_76,
                              const SBool ext_ident_bool_72, const SDouble ext_ident_double_70,
                              const SDouble ext_ident_double_71, const SBool ext_ident_bool_75,
                              const SDouble ext_ident_double_73,
                              const SDouble ext_ident_double_74, const SBool ext_ident_bool_112,
                              const SDouble ext_ident_double_110,
                              const SDouble ext_ident_double_109, const SBool ext_ident_bool_83,
                              const SBool ext_ident_bool_79, const SDouble ext_ident_double_77,
                              const SDouble ext_ident_double_78, const SBool ext_ident_bool_82,
                              const SDouble ext_ident_double_80,
                              const SDouble ext_ident_double_81,
                              const SDouble ext_ident_double_86,
                              const SDouble ext_ident_double_84,
                              const SDouble ext_ident_double_85,
                              const SDouble ext_ident_double_108, const SBool ext_ident_bool_93,
                              const SBool ext_ident_bool_89, const SDouble ext_ident_double_87,
                              const SDouble ext_ownship_position_x, const SDouble *queue_1,
                              const SWord32 ptr_1, const SDouble ext_ident_double_88,
                              const SDouble ext_intruder_position_x, const SDouble *queue_2,
                              const SWord32 ptr_2, const SBool ext_ident_bool_92,
                              const SDouble ext_ident_double_90,
                              const SDouble ext_ident_double_91,
                              const SDouble ext_ident_double_96,
                              const SDouble ext_ident_double_94,
                              const SDouble ext_ident_double_95,
                              const SDouble ext_ident_double_107, const SBool ext_ident_bool_103,
                              const SBool ext_ident_bool_99, const SDouble ext_ident_double_97,
                              const SDouble ext_ownship_position_y, const SDouble *queue_4,
                              const SWord32 ptr_4, const SDouble ext_ident_double_98,
                              const SDouble ext_intruder_position_y, const SDouble *queue_5,
                              const SWord32 ptr_5, const SBool ext_ident_bool_102,
                              const SDouble ext_ident_double_100,
                              const SDouble ext_ident_double_101,
                              const SDouble ext_ident_double_106,
                              const SDouble ext_ident_double_104,
                              const SDouble ext_ident_double_105,
                              const SDouble ext_ident_double_111, const SBool ext_ident_bool_119,
                              const SBool ext_ident_bool_115, const SDouble ext_ident_double_113,
                              const SDouble ext_ident_double_114, const SBool ext_ident_bool_118,
                              const SDouble ext_ident_double_116,
                              const SDouble ext_ident_double_117)
{
  const SBool   s0 = ext_ident_bool_56;
  const SBool   s1 = ext_ident_bool_53;
  const SDouble s2 = ext_ownship_velocity_z;
  const SDouble s3 = ext_ident_double_52;
  const SBool   s4 = queue_0[0];
  const SWord32 s5 = ptr_0;
  const SDouble s6 = ext_intruder_velocity_z;
  const SDouble s7 = queue_11[0];
  const SWord32 s8 = ptr_11;
  const SBool   s9 = ext_ident_bool_55;
  const SDouble s10 = ext_ident_double_54;
  const SBool   s11 = ext_ident_bool_60;
  const SDouble s12 = ext_ident_double_57;
  const SDouble s13 = ext_ownship_position_z;
  const SDouble s14 = queue_9[0];
  const SWord32 s15 = ptr_9;
  const SDouble s16 = ext_ident_double_58;
  const SDouble s17 = ext_intruder_position_z;
  const SDouble s18 = queue_10[0];
  const SWord32 s19 = ptr_10;
  const SDouble s20 = ext_ident_double_59;
  const SBool   s21 = ext_ident_bool_121;
  const SBool   s22 = ext_ident_bool_64;
  const SDouble s23 = ext_ident_double_61;
  const SDouble s24 = ext_ident_double_62;
  const SDouble s25 = ext_ident_double_63;
  const SBool   s26 = ext_ident_bool_120;
  const SBool   s27 = ext_ident_bool_69;
  const SDouble s28 = ext_ident_double_67;
  const SDouble s29 = ext_ident_double_65;
  const SDouble s30 = queue_12[0];
  const SWord32 s31 = ptr_12;
  const SDouble s32 = ext_ident_double_66;
  const SDouble s33 = ext_ident_double_68;
  const SBool   s34 = ext_ident_bool_76;
  const SBool   s35 = ext_ident_bool_72;
  const SDouble s36 = ext_ident_double_70;
  const SDouble s37 = ext_ident_double_71;
  const SBool   s38 = ext_ident_bool_75;
  const SDouble s39 = ext_ident_double_73;
  const SDouble s40 = ext_ident_double_74;
  const SBool   s41 = ext_ident_bool_112;
  const SDouble s42 = ext_ident_double_110;
  const SDouble s43 = ext_ident_double_109;
  const SBool   s44 = ext_ident_bool_83;
  const SBool   s45 = ext_ident_bool_79;
  const SDouble s46 = ext_ident_double_77;
  const SDouble s47 = ext_ident_double_78;
  const SBool   s48 = ext_ident_bool_82;
  const SDouble s49 = ext_ident_double_80;
  const SDouble s50 = ext_ident_double_81;
  const SDouble s51 = ext_ident_double_86;
  const SDouble s52 = ext_ident_double_84;
  const SDouble s53 = ext_ident_double_85;
  const SDouble s54 = ext_ident_double_108;
  const SBool   s55 = ext_ident_bool_93;
  const SBool   s56 = ext_ident_bool_89;
  const SDouble s57 = ext_ident_double_87;
  const SDouble s58 = ext_ownship_position_x;
  const SDouble s59 = queue_1[0];
  const SWord32 s60 = ptr_1;
  const SDouble s61 = ext_ident_double_88;
  const SDouble s62 = ext_intruder_position_x;
  const SDouble s63 = queue_2[0];
  const SWord32 s64 = ptr_2;
  const SBool   s65 = ext_ident_bool_92;
  const SDouble s66 = ext_ident_double_90;
  const SDouble s67 = ext_ident_double_91;
  const SDouble s68 = ext_ident_double_96;
  const SDouble s69 = ext_ident_double_94;
  const SDouble s70 = ext_ident_double_95;
  const SDouble s71 = ext_ident_double_107;
  const SBool   s72 = ext_ident_bool_103;
  const SBool   s73 = ext_ident_bool_99;
  const SDouble s74 = ext_ident_double_97;
  const SDouble s75 = ext_ownship_position_y;
  const SDouble s76 = queue_4[0];
  const SWord32 s77 = ptr_4;
  const SDouble s78 = ext_ident_double_98;
  const SDouble s79 = ext_intruder_position_y;
  const SDouble s80 = queue_5[0];
  const SWord32 s81 = ptr_5;
  const SBool   s82 = ext_ident_bool_102;
  const SDouble s83 = ext_ident_double_100;
  const SDouble s84 = ext_ident_double_101;
  const SDouble s85 = ext_ident_double_106;
  const SDouble s86 = ext_ident_double_104;
  const SDouble s87 = ext_ident_double_105;
  const SDouble s88 = ext_ident_double_111;
  const SBool   s89 = ext_ident_bool_119;
  const SBool   s90 = ext_ident_bool_115;
  const SDouble s91 = ext_ident_double_113;
  const SDouble s92 = ext_ident_double_114;
  const SBool   s93 = ext_ident_bool_118;
  const SDouble s94 = ext_ident_double_116;
  const SDouble s95 = ext_ident_double_117;
  const SBool   s96 = s11 && s21;
  const SBool   s97 = s0 && s96;
  const SBool   s98 = s97 /* verticalCriterionLoss_part2 */;

  return s98;
}
