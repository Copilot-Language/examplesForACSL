/* File: "ext_ident_bool_1391_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "criterion3D_part4" (Extf_ident_bool(label "criterion3D_part4.1" (Extf_ident_double(label "criterion3D_part4.1.1" Extf_ident_double(label "normsq2dim" (((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) * (Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2)))) + ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) * (Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))))))) < Extf_ident_double(label "criterion3D_part4.1.2" (Ext_minimal_horizontal_separation * Ext_minimal_horizontal_separation)))) || Extf_ident_bool(label "criterion3D_part5" ((((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) * ((Ext_ownship_velocity_x - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3))) - (Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3))))) + ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) * ((Ext_ownship_velocity_y - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6))) - (Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6)))))) >= ((Ext_direction_parameter_horizontal * (Extf_ident_double(label "hor_rr_dividend" Extf_sqrt((Extf_ident_double(label "normsq2dim" (((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) * (Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2)))) + ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) * (Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5)))))) - (Ext_minimal_horizontal_separation * Ext_minimal_horizontal_separation)))) / Extf_ident_double(label "hor_rr_divisor" Ext_minimal_horizontal_separation))) * (((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) * ((Ext_ownship_velocity_y - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6))) - (Extf_ident_double(label "ownVelocityY" (if s0 then Ext_ownship_velocity_y else s8)) - Extf_ident_double(label "intVelocityY" (if s0 then Ext_intruder_velocity_y else s6))))) - (((Ext_ownship_velocity_x - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3))) - (Extf_ident_double(label "ownVelocityX" (if s0 then Ext_ownship_velocity_x else s7)) - Extf_ident_double(label "intVelocityX" (if s0 then Ext_intruder_velocity_x else s3)))) * (Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5)))))))))
*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ident_bool_1357) || (ext_ident_bool_1390))));
*/
SBool ext_ident_bool_1391_arg0(const SBool ext_ident_bool_1357,
                               const SDouble ext_ident_double_1355,
                               const SDouble ext_ident_double_1354,
                               const SDouble ext_ident_double_1346, const SBool *queue_0,
                               const SWord32 ptr_0, const SDouble ext_ownship_position_x,
                               const SDouble *queue_1, const SWord32 ptr_1,
                               const SDouble ext_ident_double_1347,
                               const SDouble ext_intruder_position_x, const SDouble *queue_2,
                               const SWord32 ptr_2, const SDouble ext_ident_double_1348,
                               const SDouble ext_ident_double_1349,
                               const SDouble ext_ident_double_1350,
                               const SDouble ext_ownship_position_y, const SDouble *queue_4,
                               const SWord32 ptr_4, const SDouble ext_ident_double_1351,
                               const SDouble ext_intruder_position_y, const SDouble *queue_5,
                               const SWord32 ptr_5, const SDouble ext_ident_double_1352,
                               const SDouble ext_ident_double_1353,
                               const SDouble ext_ident_double_1356,
                               const SDouble ext_minimal_horizontal_separation,
                               const SBool ext_ident_bool_1390,
                               const SDouble ext_ident_double_1358,
                               const SDouble ext_ident_double_1359,
                               const SDouble ext_ownship_velocity_x,
                               const SDouble ext_ident_double_1360,
                               const SDouble ext_intruder_velocity_x, const SDouble *queue_3,
                               const SWord32 ptr_3, const SDouble ext_ident_double_1361,
                               const SDouble *queue_7, const SWord32 ptr_7,
                               const SDouble ext_ident_double_1362,
                               const SDouble ext_ident_double_1363,
                               const SDouble ext_ident_double_1364,
                               const SDouble ext_ownship_velocity_y,
                               const SDouble ext_ident_double_1365,
                               const SDouble ext_intruder_velocity_y, const SDouble *queue_6,
                               const SWord32 ptr_6, const SDouble ext_ident_double_1366,
                               const SDouble *queue_8, const SWord32 ptr_8,
                               const SDouble ext_ident_double_1367,
                               const SDouble ext_direction_parameter_horizontal,
                               const SDouble ext_ident_double_1378, const SDouble ext_sqrt_1377,
                               const SDouble ext_ident_double_1376,
                               const SDouble ext_ident_double_1368,
                               const SDouble ext_ident_double_1369,
                               const SDouble ext_ident_double_1370,
                               const SDouble ext_ident_double_1371,
                               const SDouble ext_ident_double_1372,
                               const SDouble ext_ident_double_1373,
                               const SDouble ext_ident_double_1374,
                               const SDouble ext_ident_double_1375,
                               const SDouble ext_ident_double_1379,
                               const SDouble ext_ident_double_1380,
                               const SDouble ext_ident_double_1381,
                               const SDouble ext_ident_double_1382,
                               const SDouble ext_ident_double_1383,
                               const SDouble ext_ident_double_1384,
                               const SDouble ext_ident_double_1385,
                               const SDouble ext_ident_double_1386,
                               const SDouble ext_ident_double_1387,
                               const SDouble ext_ident_double_1388,
                               const SDouble ext_ident_double_1389)
{
  const SBool   s0 = ext_ident_bool_1357;
  const SDouble s1 = ext_ident_double_1355;
  const SDouble s2 = ext_ident_double_1354;
  const SDouble s3 = ext_ident_double_1346;
  const SBool   s4 = queue_0[0];
  const SWord32 s5 = ptr_0;
  const SDouble s6 = ext_ownship_position_x;
  const SDouble s7 = queue_1[0];
  const SWord32 s8 = ptr_1;
  const SDouble s9 = ext_ident_double_1347;
  const SDouble s10 = ext_intruder_position_x;
  const SDouble s11 = queue_2[0];
  const SWord32 s12 = ptr_2;
  const SDouble s13 = ext_ident_double_1348;
  const SDouble s14 = ext_ident_double_1349;
  const SDouble s15 = ext_ident_double_1350;
  const SDouble s16 = ext_ownship_position_y;
  const SDouble s17 = queue_4[0];
  const SWord32 s18 = ptr_4;
  const SDouble s19 = ext_ident_double_1351;
  const SDouble s20 = ext_intruder_position_y;
  const SDouble s21 = queue_5[0];
  const SWord32 s22 = ptr_5;
  const SDouble s23 = ext_ident_double_1352;
  const SDouble s24 = ext_ident_double_1353;
  const SDouble s25 = ext_ident_double_1356;
  const SDouble s26 = ext_minimal_horizontal_separation;
  const SBool   s27 = ext_ident_bool_1390;
  const SDouble s28 = ext_ident_double_1358;
  const SDouble s29 = ext_ident_double_1359;
  const SDouble s30 = ext_ownship_velocity_x;
  const SDouble s31 = ext_ident_double_1360;
  const SDouble s32 = ext_intruder_velocity_x;
  const SDouble s33 = queue_3[0];
  const SWord32 s34 = ptr_3;
  const SDouble s35 = ext_ident_double_1361;
  const SDouble s36 = queue_7[0];
  const SWord32 s37 = ptr_7;
  const SDouble s38 = ext_ident_double_1362;
  const SDouble s39 = ext_ident_double_1363;
  const SDouble s40 = ext_ident_double_1364;
  const SDouble s41 = ext_ownship_velocity_y;
  const SDouble s42 = ext_ident_double_1365;
  const SDouble s43 = ext_intruder_velocity_y;
  const SDouble s44 = queue_6[0];
  const SWord32 s45 = ptr_6;
  const SDouble s46 = ext_ident_double_1366;
  const SDouble s47 = queue_8[0];
  const SWord32 s48 = ptr_8;
  const SDouble s49 = ext_ident_double_1367;
  const SDouble s50 = ext_direction_parameter_horizontal;
  const SDouble s51 = ext_ident_double_1378;
  const SDouble s52 = ext_sqrt_1377;
  const SDouble s53 = ext_ident_double_1376;
  const SDouble s54 = ext_ident_double_1368;
  const SDouble s55 = ext_ident_double_1369;
  const SDouble s56 = ext_ident_double_1370;
  const SDouble s57 = ext_ident_double_1371;
  const SDouble s58 = ext_ident_double_1372;
  const SDouble s59 = ext_ident_double_1373;
  const SDouble s60 = ext_ident_double_1374;
  const SDouble s61 = ext_ident_double_1375;
  const SDouble s62 = ext_ident_double_1379;
  const SDouble s63 = ext_ident_double_1380;
  const SDouble s64 = ext_ident_double_1381;
  const SDouble s65 = ext_ident_double_1382;
  const SDouble s66 = ext_ident_double_1383;
  const SDouble s67 = ext_ident_double_1384;
  const SDouble s68 = ext_ident_double_1385;
  const SDouble s69 = ext_ident_double_1386;
  const SDouble s70 = ext_ident_double_1387;
  const SDouble s71 = ext_ident_double_1388;
  const SDouble s72 = ext_ident_double_1389;
  const SBool   s73 = s0 || s27;
  const SBool   s74 = s73 /* criterion3D_part4 */;

  return s74;
}
