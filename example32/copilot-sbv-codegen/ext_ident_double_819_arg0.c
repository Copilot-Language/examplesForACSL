/* File: "ext_ident_double_819_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "theta_dir_3" Extf_ident_double(label "thetaVert" (Extf_ident_double(label "thetaVert_dividend" (Extf_ident_double(label "thetaVert_part1" (0.0 - Extf_ident_double(label "thetaVert_part1.1" (((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) * (Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3)))) + ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) * (Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6)))))))) + Extf_ident_double(label "thetaVert_part1.2" (Extf_ident_double(label "dirVert" (if Extf_ident_bool(label "dirVert_part1" (Extf_ident_double(label "dirVert_part1.1" (Extf_ident_double(label "dirVert_part1.1.1" (Extf_ident_double(label "ownPositionZ" (if s0 then Ext_ownship_position_z else s9)) - Extf_ident_double(label "intPositionZ" (if s0 then Ext_intruder_position_z else s10)))) * Extf_ident_double(label "absolute_value_splitting" signum Extf_ident_double(label "dirVert_part1.1.1" (Extf_ident_double(label "ownPositionZ" (if s0 then Ext_ownship_position_z else s9)) - Extf_ident_double(label "intPositionZ" (if s0 then Ext_intruder_position_z else s10))))))) >= Ext_minimal_vertical_separation)) then Extf_ident_double(label "dirVert_part2" (Ext_direction_parameter_vertical * Extf_ident_double(label "dirVert_part2.1" signum (Extf_ident_double(label "ownPositionZ" (if s0 then Ext_ownship_position_z else s9)) - Extf_ident_double(label "intPositionZ" (if s0 then Ext_intruder_position_z else s10)))))) else -1.0)) * Extf_ident_double(label "thetaVert_part2" Extf_sqrt(((Extf_ident_double(label "thetaVert_part2.1" (((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) * (Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3)))) + ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) * (Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6)))))) * Extf_ident_double(label "thetaVert_part2.2" (((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) * (Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3)))) + ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) * (Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6))))))) - Extf_ident_double(label "thetaVert_part2.3" (Extf_ident_double(label "thetaVert_part2.3.1" Extf_ident_double(label "normsq2dim" (((Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3))) * (Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3)))) + ((Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6))) * (Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6))))))) * Extf_ident_double(label "thetaVert_part2.3.2" (Extf_ident_double(label "normsq2dim" (((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) * (Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2)))) + ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) * (Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5)))))) - (Ext_minimal_horizontal_separation * Ext_minimal_horizontal_separation)))))))))))) / Extf_ident_double(label "thetaVert_divisor" Extf_ident_double(label "normsq2dim" (((Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3))) * (Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3)))) + ((Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6))) * (Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6)))))))))
*/
/*@
 assigns \nothing;
 ensures \result == ((ext_ident_double_818));
*/
SDouble ext_ident_double_819_arg0(const SDouble ext_ident_double_818,
                                  const SDouble ext_ident_double_807,
                                  const SDouble ext_ident_double_750,
                                  const SDouble ext_ident_double_749,
                                  const SDouble ext_ident_double_741, const SBool *queue_0,
                                  const SWord32 ptr_0, const SDouble ext_ownship_position_x,
                                  const SDouble *queue_1, const SWord32 ptr_1,
                                  const SDouble ext_ident_double_742,
                                  const SDouble ext_intruder_position_x, const SDouble *queue_2,
                                  const SWord32 ptr_2, const SDouble ext_ident_double_743,
                                  const SDouble ext_ownship_velocity_x, const SDouble *queue_7,
                                  const SWord32 ptr_7, const SDouble ext_ident_double_744,
                                  const SDouble ext_intruder_velocity_x, const SDouble *queue_3,
                                  const SWord32 ptr_3, const SDouble ext_ident_double_745,
                                  const SDouble ext_ownship_position_y, const SDouble *queue_4,
                                  const SWord32 ptr_4, const SDouble ext_ident_double_746,
                                  const SDouble ext_intruder_position_y, const SDouble *queue_5,
                                  const SWord32 ptr_5, const SDouble ext_ident_double_747,
                                  const SDouble ext_ownship_velocity_y, const SDouble *queue_8,
                                  const SWord32 ptr_8, const SDouble ext_ident_double_748,
                                  const SDouble ext_intruder_velocity_y, const SDouble *queue_6,
                                  const SWord32 ptr_6, const SDouble ext_ident_double_806,
                                  const SDouble ext_ident_double_764,
                                  const SBool ext_ident_bool_759,
                                  const SDouble ext_ident_double_758,
                                  const SDouble ext_ident_double_753,
                                  const SDouble ext_ident_double_751,
                                  const SDouble ext_ownship_position_z, const SDouble *queue_9,
                                  const SWord32 ptr_9, const SDouble ext_ident_double_752,
                                  const SDouble ext_intruder_position_z, const SDouble *queue_10,
                                  const SWord32 ptr_10, const SDouble ext_ident_double_757,
                                  const SDouble ext_ident_double_756,
                                  const SDouble ext_ident_double_754,
                                  const SDouble ext_ident_double_755,
                                  const SDouble ext_minimal_vertical_separation,
                                  const SDouble ext_ident_double_763,
                                  const SDouble ext_direction_parameter_vertical,
                                  const SDouble ext_ident_double_762,
                                  const SDouble ext_ident_double_760,
                                  const SDouble ext_ident_double_761,
                                  const SDouble ext_ident_double_805, const SDouble ext_sqrt_804,
                                  const SDouble ext_ident_double_773,
                                  const SDouble ext_ident_double_765,
                                  const SDouble ext_ident_double_766,
                                  const SDouble ext_ident_double_767,
                                  const SDouble ext_ident_double_768,
                                  const SDouble ext_ident_double_769,
                                  const SDouble ext_ident_double_770,
                                  const SDouble ext_ident_double_771,
                                  const SDouble ext_ident_double_772,
                                  const SDouble ext_ident_double_782,
                                  const SDouble ext_ident_double_774,
                                  const SDouble ext_ident_double_775,
                                  const SDouble ext_ident_double_776,
                                  const SDouble ext_ident_double_777,
                                  const SDouble ext_ident_double_778,
                                  const SDouble ext_ident_double_779,
                                  const SDouble ext_ident_double_780,
                                  const SDouble ext_ident_double_781,
                                  const SDouble ext_ident_double_803,
                                  const SDouble ext_ident_double_792,
                                  const SDouble ext_ident_double_791,
                                  const SDouble ext_ident_double_783,
                                  const SDouble ext_ident_double_784,
                                  const SDouble ext_ident_double_785,
                                  const SDouble ext_ident_double_786,
                                  const SDouble ext_ident_double_787,
                                  const SDouble ext_ident_double_788,
                                  const SDouble ext_ident_double_789,
                                  const SDouble ext_ident_double_790,
                                  const SDouble ext_ident_double_802,
                                  const SDouble ext_ident_double_801,
                                  const SDouble ext_ident_double_793,
                                  const SDouble ext_ident_double_794,
                                  const SDouble ext_ident_double_795,
                                  const SDouble ext_ident_double_796,
                                  const SDouble ext_ident_double_797,
                                  const SDouble ext_ident_double_798,
                                  const SDouble ext_ident_double_799,
                                  const SDouble ext_ident_double_800,
                                  const SDouble ext_minimal_horizontal_separation,
                                  const SDouble ext_ident_double_817,
                                  const SDouble ext_ident_double_816,
                                  const SDouble ext_ident_double_808,
                                  const SDouble ext_ident_double_809,
                                  const SDouble ext_ident_double_810,
                                  const SDouble ext_ident_double_811,
                                  const SDouble ext_ident_double_812,
                                  const SDouble ext_ident_double_813,
                                  const SDouble ext_ident_double_814,
                                  const SDouble ext_ident_double_815)
{
  const SDouble s0 = ext_ident_double_818;
  const SDouble s1 = ext_ident_double_807;
  const SDouble s2 = ext_ident_double_750;
  const SDouble s3 = ext_ident_double_749;
  const SDouble s4 = ext_ident_double_741;
  const SBool   s5 = queue_0[0];
  const SWord32 s6 = ptr_0;
  const SDouble s7 = ext_ownship_position_x;
  const SDouble s8 = queue_1[0];
  const SWord32 s9 = ptr_1;
  const SDouble s10 = ext_ident_double_742;
  const SDouble s11 = ext_intruder_position_x;
  const SDouble s12 = queue_2[0];
  const SWord32 s13 = ptr_2;
  const SDouble s14 = ext_ident_double_743;
  const SDouble s15 = ext_ownship_velocity_x;
  const SDouble s16 = queue_7[0];
  const SWord32 s17 = ptr_7;
  const SDouble s18 = ext_ident_double_744;
  const SDouble s19 = ext_intruder_velocity_x;
  const SDouble s20 = queue_3[0];
  const SWord32 s21 = ptr_3;
  const SDouble s22 = ext_ident_double_745;
  const SDouble s23 = ext_ownship_position_y;
  const SDouble s24 = queue_4[0];
  const SWord32 s25 = ptr_4;
  const SDouble s26 = ext_ident_double_746;
  const SDouble s27 = ext_intruder_position_y;
  const SDouble s28 = queue_5[0];
  const SWord32 s29 = ptr_5;
  const SDouble s30 = ext_ident_double_747;
  const SDouble s31 = ext_ownship_velocity_y;
  const SDouble s32 = queue_8[0];
  const SWord32 s33 = ptr_8;
  const SDouble s34 = ext_ident_double_748;
  const SDouble s35 = ext_intruder_velocity_y;
  const SDouble s36 = queue_6[0];
  const SWord32 s37 = ptr_6;
  const SDouble s38 = ext_ident_double_806;
  const SDouble s39 = ext_ident_double_764;
  const SBool   s40 = ext_ident_bool_759;
  const SDouble s41 = ext_ident_double_758;
  const SDouble s42 = ext_ident_double_753;
  const SDouble s43 = ext_ident_double_751;
  const SDouble s44 = ext_ownship_position_z;
  const SDouble s45 = queue_9[0];
  const SWord32 s46 = ptr_9;
  const SDouble s47 = ext_ident_double_752;
  const SDouble s48 = ext_intruder_position_z;
  const SDouble s49 = queue_10[0];
  const SWord32 s50 = ptr_10;
  const SDouble s51 = ext_ident_double_757;
  const SDouble s52 = ext_ident_double_756;
  const SDouble s53 = ext_ident_double_754;
  const SDouble s54 = ext_ident_double_755;
  const SDouble s55 = ext_minimal_vertical_separation;
  const SDouble s56 = ext_ident_double_763;
  const SDouble s57 = ext_direction_parameter_vertical;
  const SDouble s58 = ext_ident_double_762;
  const SDouble s59 = ext_ident_double_760;
  const SDouble s60 = ext_ident_double_761;
  const SDouble s61 = ext_ident_double_805;
  const SDouble s62 = ext_sqrt_804;
  const SDouble s63 = ext_ident_double_773;
  const SDouble s64 = ext_ident_double_765;
  const SDouble s65 = ext_ident_double_766;
  const SDouble s66 = ext_ident_double_767;
  const SDouble s67 = ext_ident_double_768;
  const SDouble s68 = ext_ident_double_769;
  const SDouble s69 = ext_ident_double_770;
  const SDouble s70 = ext_ident_double_771;
  const SDouble s71 = ext_ident_double_772;
  const SDouble s72 = ext_ident_double_782;
  const SDouble s73 = ext_ident_double_774;
  const SDouble s74 = ext_ident_double_775;
  const SDouble s75 = ext_ident_double_776;
  const SDouble s76 = ext_ident_double_777;
  const SDouble s77 = ext_ident_double_778;
  const SDouble s78 = ext_ident_double_779;
  const SDouble s79 = ext_ident_double_780;
  const SDouble s80 = ext_ident_double_781;
  const SDouble s81 = ext_ident_double_803;
  const SDouble s82 = ext_ident_double_792;
  const SDouble s83 = ext_ident_double_791;
  const SDouble s84 = ext_ident_double_783;
  const SDouble s85 = ext_ident_double_784;
  const SDouble s86 = ext_ident_double_785;
  const SDouble s87 = ext_ident_double_786;
  const SDouble s88 = ext_ident_double_787;
  const SDouble s89 = ext_ident_double_788;
  const SDouble s90 = ext_ident_double_789;
  const SDouble s91 = ext_ident_double_790;
  const SDouble s92 = ext_ident_double_802;
  const SDouble s93 = ext_ident_double_801;
  const SDouble s94 = ext_ident_double_793;
  const SDouble s95 = ext_ident_double_794;
  const SDouble s96 = ext_ident_double_795;
  const SDouble s97 = ext_ident_double_796;
  const SDouble s98 = ext_ident_double_797;
  const SDouble s99 = ext_ident_double_798;
  const SDouble s100 = ext_ident_double_799;
  const SDouble s101 = ext_ident_double_800;
  const SDouble s102 = ext_minimal_horizontal_separation;
  const SDouble s103 = ext_ident_double_817;
  const SDouble s104 = ext_ident_double_816;
  const SDouble s105 = ext_ident_double_808;
  const SDouble s106 = ext_ident_double_809;
  const SDouble s107 = ext_ident_double_810;
  const SDouble s108 = ext_ident_double_811;
  const SDouble s109 = ext_ident_double_812;
  const SDouble s110 = ext_ident_double_813;
  const SDouble s111 = ext_ident_double_814;
  const SDouble s112 = ext_ident_double_815;
  const SDouble s113 = s0 /* theta_dir_3 */;

  return s113;
}
