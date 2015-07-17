/* Driver for SBV program generated from Copilot. */
/* Edit as you see fit */

#include "internal.h"
#include "copilot.h"

/* Observers */


/* Variables */
static SDouble ext_intruder_position_x = 0;
static SDouble ext_intruder_position_y = 0;
static SDouble ext_intruder_position_z = 0;
static SDouble ext_intruder_velocity_x = 0;
static SDouble ext_intruder_velocity_y = 0;
static SDouble ext_intruder_velocity_z = 0;
static SDouble ext_ownship_position_x = 0;
static SDouble ext_ownship_position_y = 0;
static SDouble ext_ownship_position_z = 0;
static SDouble ext_ownship_velocity_x = 0;
static SDouble ext_ownship_velocity_y = 0;
static SDouble ext_ownship_velocity_z = 0;
static SDouble ext_ident_double_0 = 0;
static SDouble ext_ident_double_1 = 0;
static SDouble ext_ident_double_2 = 0;
static SDouble ext_ident_double_3 = 0;
static SWord64 ext_ident_word64_4 = 0;
static SWord64 ext_ident_word64_5 = 0;
static SWord64 ext_ident_word64_6 = 0;
static SWord64 ext_ident_word64_7 = 0;
static SWord64 ext_ident_word64_8 = 0;
static SWord64 ext_ident_word64_9 = 0;
static SWord64 ext_ident_word64_10 = 0;
static SDouble ext_ident_double_11 = 0;
static SWord64 ext_ident_word64_12 = 0;
static SWord64 ext_ident_word64_13 = 0;
static SWord64 ext_ident_word64_14 = 0;
static SWord64 ext_ident_word64_15 = 0;
static SWord64 ext_ident_word64_16 = 0;
static SWord64 ext_ident_word64_17 = 0;
static SWord64 ext_ident_word64_18 = 0;
static SDouble ext_ident_double_19 = 0;
static SDouble ext_ident_double_20 = 0;
static SDouble ext_ident_double_21 = 0;
static SDouble ext_ident_double_22 = 0;
static SWord64 ext_ident_word64_23 = 0;
static SWord64 ext_ident_word64_24 = 0;
static SWord64 ext_ident_word64_25 = 0;
static SWord64 ext_ident_word64_26 = 0;
static SWord64 ext_ident_word64_27 = 0;
static SWord64 ext_ident_word64_28 = 0;
static SWord64 ext_ident_word64_29 = 0;
static SDouble ext_ident_double_30 = 0;
static SWord64 ext_ident_word64_31 = 0;
static SWord64 ext_ident_word64_32 = 0;
static SWord64 ext_ident_word64_33 = 0;
static SWord64 ext_ident_word64_34 = 0;
static SWord64 ext_ident_word64_35 = 0;
static SWord64 ext_ident_word64_36 = 0;
static SWord64 ext_ident_word64_37 = 0;
static SDouble ext_ident_double_38 = 0;
static SDouble ext_ident_double_39 = 0;
static SDouble ext_ident_double_40 = 0;
static SDouble ext_ident_double_41 = 0;
static SDouble ext_ident_double_42 = 0;
static SDouble ext_ident_double_43 = 0;
static SDouble ext_ident_double_44 = 0;
static SWord64 ext_ident_word64_45 = 0;
static SWord64 ext_ident_word64_46 = 0;
static SWord64 ext_ident_word64_47 = 0;
static SWord64 ext_ident_word64_48 = 0;
static SWord64 ext_ident_word64_49 = 0;
static SWord64 ext_ident_word64_50 = 0;
static SWord64 ext_ident_word64_51 = 0;
static SDouble ext_ident_double_52 = 0;
static SWord64 ext_ident_word64_53 = 0;
static SWord64 ext_ident_word64_54 = 0;
static SWord64 ext_ident_word64_55 = 0;
static SWord64 ext_ident_word64_56 = 0;
static SWord64 ext_ident_word64_57 = 0;
static SWord64 ext_ident_word64_58 = 0;
static SWord64 ext_ident_word64_59 = 0;
static SDouble ext_ident_double_60 = 0;
static SDouble ext_ident_double_61 = 0;
static SDouble ext_ident_double_62 = 0;
static SDouble ext_ident_double_63 = 0;
static SDouble ext_ident_double_64 = 0;
static SDouble ext_ident_double_65 = 0;
static SDouble ext_sqrt_66 = 0;
static SDouble ext_ident_double_67 = 0;
static SDouble ext_ident_double_68 = 0;
static SDouble ext_ident_double_69 = 0;
static SBool ext_ident_bool_70 = 0;
static SDouble ext_ident_double_71 = 0;
static SDouble ext_ident_double_72 = 0;
static SDouble ext_sqrt_73 = 0;
static SDouble ext_ident_double_74 = 0;
static SWord64 ext_ident_word64_75 = 0;
static SWord64 ext_ident_word64_76 = 0;
static SWord64 ext_ident_word64_77 = 0;
static SWord64 ext_ident_word64_78 = 0;
static SWord64 ext_ident_word64_79 = 0;
static SWord64 ext_ident_word64_80 = 0;
static SWord64 ext_ident_word64_81 = 0;
static SDouble ext_ident_double_82 = 0;
static SDouble ext_ident_double_83 = 0;
static SDouble ext_ident_double_84 = 0;
static SDouble ext_ident_double_85 = 0;
static SDouble ext_sqrt_86 = 0;
static SDouble ext_ident_double_87 = 0;
static SWord64 ext_ident_word64_88 = 0;
static SWord64 ext_ident_word64_89 = 0;
static SWord64 ext_ident_word64_90 = 0;
static SWord64 ext_ident_word64_91 = 0;
static SWord64 ext_ident_word64_92 = 0;
static SWord64 ext_ident_word64_93 = 0;
static SWord64 ext_ident_word64_94 = 0;
static SDouble ext_ident_double_95 = 0;
static SDouble ext_ident_double_96 = 0;
static SWord64 ext_ident_word64_97 = 0;
static SWord64 ext_ident_word64_98 = 0;
static SWord64 ext_ident_word64_99 = 0;
static SWord64 ext_ident_word64_100 = 0;
static SWord64 ext_ident_word64_101 = 0;
static SWord64 ext_ident_word64_102 = 0;
static SWord64 ext_ident_word64_103 = 0;
static SDouble ext_ident_double_104 = 0;
static SWord64 ext_ident_word64_105 = 0;
static SWord64 ext_ident_word64_106 = 0;
static SWord64 ext_ident_word64_107 = 0;
static SWord64 ext_ident_word64_108 = 0;
static SWord64 ext_ident_word64_109 = 0;
static SWord64 ext_ident_word64_110 = 0;
static SWord64 ext_ident_word64_111 = 0;
static SDouble ext_ident_double_112 = 0;
static SDouble ext_ident_double_113 = 0;
static SDouble ext_ident_double_114 = 0;
static SDouble ext_ident_double_115 = 0;
static SDouble ext_ident_double_116 = 0;
static SDouble ext_ident_double_117 = 0;
static SWord64 ext_ident_word64_118 = 0;
static SWord64 ext_ident_word64_119 = 0;
static SWord64 ext_ident_word64_120 = 0;
static SWord64 ext_ident_word64_121 = 0;
static SWord64 ext_ident_word64_122 = 0;
static SWord64 ext_ident_word64_123 = 0;
static SWord64 ext_ident_word64_124 = 0;
static SDouble ext_ident_double_125 = 0;
static SDouble ext_ident_double_126 = 0;
static SBool ext_ident_bool_127 = 0;
static SDouble ext_ident_double_128 = 0;
static SWord64 ext_ident_word64_129 = 0;
static SWord64 ext_ident_word64_130 = 0;
static SWord64 ext_ident_word64_131 = 0;
static SWord64 ext_ident_word64_132 = 0;
static SWord64 ext_ident_word64_133 = 0;
static SWord64 ext_ident_word64_134 = 0;
static SWord64 ext_ident_word64_135 = 0;
static SDouble ext_ident_double_136 = 0;
static SDouble ext_ident_double_137 = 0;
static SDouble ext_ident_double_138 = 0;
static SWord64 ext_ident_word64_139 = 0;
static SWord64 ext_ident_word64_140 = 0;
static SWord64 ext_ident_word64_141 = 0;
static SWord64 ext_ident_word64_142 = 0;
static SWord64 ext_ident_word64_143 = 0;
static SWord64 ext_ident_word64_144 = 0;
static SWord64 ext_ident_word64_145 = 0;
static SDouble ext_ident_double_146 = 0;
static SDouble ext_ident_double_147 = 0;
static SBool ext_ident_bool_148 = 0;
static SBool ext_ident_bool_149 = 0;

void static sampleExts(void) {
  SDouble tmp_ext_ident_double_0 = ident_double(ext_ident_double_0_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_1 = ident_double(ext_ident_double_1_arg0(ext_ident_double_0, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_2 = ident_double(ext_ident_double_2_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_3 = ident_double(ext_ident_double_3_arg0(ext_ident_double_2, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SWord64 tmp_ext_ident_word64_4 = ident_word64(ext_ident_word64_4_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_5 = ident_word64(ext_ident_word64_5_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_6 = ident_word64(ext_ident_word64_6_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_7 = ident_word64(ext_ident_word64_7_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_8 = ident_word64(ext_ident_word64_8_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_9 = ident_word64(ext_ident_word64_9_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_10 = ident_word64(ext_ident_word64_10_arg0(ext_ownship_position_z));
  SDouble tmp_ext_ident_double_11 = ident_double(ext_ident_double_11_arg0(ext_ident_word64_4, ext_ownship_position_z, ext_ident_word64_5, ext_ident_word64_6, ext_ident_word64_7, ext_ident_word64_8, ext_ident_word64_9, ext_ident_word64_10));
  SWord64 tmp_ext_ident_word64_12 = ident_word64(ext_ident_word64_12_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_13 = ident_word64(ext_ident_word64_13_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_14 = ident_word64(ext_ident_word64_14_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_15 = ident_word64(ext_ident_word64_15_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_16 = ident_word64(ext_ident_word64_16_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_17 = ident_word64(ext_ident_word64_17_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_18 = ident_word64(ext_ident_word64_18_arg0(ext_ownship_position_z));
  SDouble tmp_ext_ident_double_19 = ident_double(ext_ident_double_19_arg0(ext_ident_word64_12, ext_ownship_position_z, ext_ident_word64_13, ext_ident_word64_14, ext_ident_word64_15, ext_ident_word64_16, ext_ident_word64_17, ext_ident_word64_18));
  SDouble tmp_ext_ident_double_20 = ident_double(ext_ident_double_20_arg0(ext_ident_double_11, ext_ident_word64_4, ext_ownship_position_z, ext_ident_word64_5, ext_ident_word64_6, ext_ident_word64_7, ext_ident_word64_8, ext_ident_word64_9, ext_ident_word64_10, ext_ident_double_19, ext_ident_word64_12, ext_ident_word64_13, ext_ident_word64_14, ext_ident_word64_15, ext_ident_word64_16, ext_ident_word64_17, ext_ident_word64_18));
  SDouble tmp_ext_ident_double_21 = ident_double(ext_ident_double_21_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_22 = ident_double(ext_ident_double_22_arg0(ext_ident_double_21, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SWord64 tmp_ext_ident_word64_23 = ident_word64(ext_ident_word64_23_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_24 = ident_word64(ext_ident_word64_24_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_25 = ident_word64(ext_ident_word64_25_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_26 = ident_word64(ext_ident_word64_26_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_27 = ident_word64(ext_ident_word64_27_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_28 = ident_word64(ext_ident_word64_28_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_29 = ident_word64(ext_ident_word64_29_arg0(ext_ownship_position_z));
  SDouble tmp_ext_ident_double_30 = ident_double(ext_ident_double_30_arg0(ext_ident_word64_23, ext_ownship_position_z, ext_ident_word64_24, ext_ident_word64_25, ext_ident_word64_26, ext_ident_word64_27, ext_ident_word64_28, ext_ident_word64_29));
  SWord64 tmp_ext_ident_word64_31 = ident_word64(ext_ident_word64_31_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_32 = ident_word64(ext_ident_word64_32_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_33 = ident_word64(ext_ident_word64_33_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_34 = ident_word64(ext_ident_word64_34_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_35 = ident_word64(ext_ident_word64_35_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_36 = ident_word64(ext_ident_word64_36_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_37 = ident_word64(ext_ident_word64_37_arg0(ext_ownship_position_z));
  SDouble tmp_ext_ident_double_38 = ident_double(ext_ident_double_38_arg0(ext_ident_word64_31, ext_ownship_position_z, ext_ident_word64_32, ext_ident_word64_33, ext_ident_word64_34, ext_ident_word64_35, ext_ident_word64_36, ext_ident_word64_37));
  SDouble tmp_ext_ident_double_39 = ident_double(ext_ident_double_39_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_40 = ident_double(ext_ident_double_40_arg0(ext_ident_double_39, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_41 = ident_double(ext_ident_double_41_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_42 = ident_double(ext_ident_double_42_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_43 = ident_double(ext_ident_double_43_arg0(ext_ident_double_30, ext_ident_word64_23, ext_ownship_position_z, ext_ident_word64_24, ext_ident_word64_25, ext_ident_word64_26, ext_ident_word64_27, ext_ident_word64_28, ext_ident_word64_29, ext_ident_double_38, ext_ident_word64_31, ext_ident_word64_32, ext_ident_word64_33, ext_ident_word64_34, ext_ident_word64_35, ext_ident_word64_36, ext_ident_word64_37, ext_ident_double_40, ext_ident_double_39, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_41, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_42));
  SDouble tmp_ext_ident_double_44 = ident_double(ext_ident_double_44_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SWord64 tmp_ext_ident_word64_45 = ident_word64(ext_ident_word64_45_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_46 = ident_word64(ext_ident_word64_46_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_47 = ident_word64(ext_ident_word64_47_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_48 = ident_word64(ext_ident_word64_48_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_49 = ident_word64(ext_ident_word64_49_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_50 = ident_word64(ext_ident_word64_50_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_51 = ident_word64(ext_ident_word64_51_arg0(ext_ownship_position_z));
  SDouble tmp_ext_ident_double_52 = ident_double(ext_ident_double_52_arg0(ext_ident_word64_45, ext_ownship_position_z, ext_ident_word64_46, ext_ident_word64_47, ext_ident_word64_48, ext_ident_word64_49, ext_ident_word64_50, ext_ident_word64_51));
  SWord64 tmp_ext_ident_word64_53 = ident_word64(ext_ident_word64_53_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_54 = ident_word64(ext_ident_word64_54_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_55 = ident_word64(ext_ident_word64_55_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_56 = ident_word64(ext_ident_word64_56_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_57 = ident_word64(ext_ident_word64_57_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_58 = ident_word64(ext_ident_word64_58_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_59 = ident_word64(ext_ident_word64_59_arg0(ext_ownship_position_z));
  SDouble tmp_ext_ident_double_60 = ident_double(ext_ident_double_60_arg0(ext_ident_word64_53, ext_ownship_position_z, ext_ident_word64_54, ext_ident_word64_55, ext_ident_word64_56, ext_ident_word64_57, ext_ident_word64_58, ext_ident_word64_59));
  SDouble tmp_ext_ident_double_61 = ident_double(ext_ident_double_61_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_62 = ident_double(ext_ident_double_62_arg0(ext_ident_double_61, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_63 = ident_double(ext_ident_double_63_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_64 = ident_double(ext_ident_double_64_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_65 = ident_double(ext_ident_double_65_arg0(ext_ident_double_52, ext_ident_word64_45, ext_ownship_position_z, ext_ident_word64_46, ext_ident_word64_47, ext_ident_word64_48, ext_ident_word64_49, ext_ident_word64_50, ext_ident_word64_51, ext_ident_double_60, ext_ident_word64_53, ext_ident_word64_54, ext_ident_word64_55, ext_ident_word64_56, ext_ident_word64_57, ext_ident_word64_58, ext_ident_word64_59, ext_ident_double_62, ext_ident_double_61, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_63, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_64));
  SDouble tmp_ext_sqrt_66 = sqrt(ext_sqrt_66_arg0(ext_ident_double_65, ext_ident_double_52, ext_ident_word64_45, ext_ownship_position_z, ext_ident_word64_46, ext_ident_word64_47, ext_ident_word64_48, ext_ident_word64_49, ext_ident_word64_50, ext_ident_word64_51, ext_ident_double_60, ext_ident_word64_53, ext_ident_word64_54, ext_ident_word64_55, ext_ident_word64_56, ext_ident_word64_57, ext_ident_word64_58, ext_ident_word64_59, ext_ident_double_62, ext_ident_double_61, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_63, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_64));
  SDouble tmp_ext_ident_double_67 = ident_double(ext_ident_double_67_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_68 = ident_double(ext_ident_double_68_arg0(ext_ident_double_67, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_69 = ident_double(ext_ident_double_69_arg0(ext_ident_double_44, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_sqrt_66, ext_ident_double_65, ext_ident_double_52, ext_ident_word64_45, ext_ownship_position_z, ext_ident_word64_46, ext_ident_word64_47, ext_ident_word64_48, ext_ident_word64_49, ext_ident_word64_50, ext_ident_word64_51, ext_ident_double_60, ext_ident_word64_53, ext_ident_word64_54, ext_ident_word64_55, ext_ident_word64_56, ext_ident_word64_57, ext_ident_word64_58, ext_ident_word64_59, ext_ident_double_62, ext_ident_double_61, ext_ident_double_63, ext_ident_double_64, ext_ident_double_68, ext_ident_double_67));
  SBool tmp_ext_ident_bool_70 = ident_bool(ext_ident_bool_70_arg0(ext_ident_double_1, ext_ident_double_0, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_3, ext_ident_double_2, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_20, ext_ident_double_11, ext_ident_word64_4, ext_ownship_position_z, ext_ident_word64_5, ext_ident_word64_6, ext_ident_word64_7, ext_ident_word64_8, ext_ident_word64_9, ext_ident_word64_10, ext_ident_double_19, ext_ident_word64_12, ext_ident_word64_13, ext_ident_word64_14, ext_ident_word64_15, ext_ident_word64_16, ext_ident_word64_17, ext_ident_word64_18, ext_ident_double_22, ext_ident_double_21, ext_ident_double_43, ext_ident_double_30, ext_ident_word64_23, ext_ident_word64_24, ext_ident_word64_25, ext_ident_word64_26, ext_ident_word64_27, ext_ident_word64_28, ext_ident_word64_29, ext_ident_double_38, ext_ident_word64_31, ext_ident_word64_32, ext_ident_word64_33, ext_ident_word64_34, ext_ident_word64_35, ext_ident_word64_36, ext_ident_word64_37, ext_ident_double_40, ext_ident_double_39, ext_ident_double_41, ext_ident_double_42, ext_ident_double_69, ext_ident_double_44, ext_sqrt_66, ext_ident_double_65, ext_ident_double_52, ext_ident_word64_45, ext_ident_word64_46, ext_ident_word64_47, ext_ident_word64_48, ext_ident_word64_49, ext_ident_word64_50, ext_ident_word64_51, ext_ident_double_60, ext_ident_word64_53, ext_ident_word64_54, ext_ident_word64_55, ext_ident_word64_56, ext_ident_word64_57, ext_ident_word64_58, ext_ident_word64_59, ext_ident_double_62, ext_ident_double_61, ext_ident_double_63, ext_ident_double_64, ext_ident_double_68, ext_ident_double_67));
  SDouble tmp_ext_ident_double_71 = ident_double(ext_ident_double_71_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_72 = ident_double(ext_ident_double_72_arg0(ext_ident_double_71, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_sqrt_73 = sqrt(ext_sqrt_73_arg0(ext_ident_double_72, ext_ident_double_71, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_74 = ident_double(ext_ident_double_74_arg0(ext_sqrt_73, ext_ident_double_72, ext_ident_double_71, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SWord64 tmp_ext_ident_word64_75 = ident_word64(ext_ident_word64_75_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_76 = ident_word64(ext_ident_word64_76_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_77 = ident_word64(ext_ident_word64_77_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_78 = ident_word64(ext_ident_word64_78_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_79 = ident_word64(ext_ident_word64_79_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_80 = ident_word64(ext_ident_word64_80_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_81 = ident_word64(ext_ident_word64_81_arg0(ext_ownship_position_z));
  SDouble tmp_ext_ident_double_82 = ident_double(ext_ident_double_82_arg0(ext_ident_word64_75, ext_ownship_position_z, ext_ident_word64_76, ext_ident_word64_77, ext_ident_word64_78, ext_ident_word64_79, ext_ident_word64_80, ext_ident_word64_81));
  SDouble tmp_ext_ident_double_83 = ident_double(ext_ident_double_83_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_84 = ident_double(ext_ident_double_84_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_85 = ident_double(ext_ident_double_85_arg0(ext_ident_double_84, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_sqrt_86 = sqrt(ext_sqrt_86_arg0(ext_ident_double_85, ext_ident_double_84, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_87 = ident_double(ext_ident_double_87_arg0(ext_sqrt_86, ext_ident_double_85, ext_ident_double_84, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SWord64 tmp_ext_ident_word64_88 = ident_word64(ext_ident_word64_88_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_89 = ident_word64(ext_ident_word64_89_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_90 = ident_word64(ext_ident_word64_90_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_91 = ident_word64(ext_ident_word64_91_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_92 = ident_word64(ext_ident_word64_92_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_93 = ident_word64(ext_ident_word64_93_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_94 = ident_word64(ext_ident_word64_94_arg0(ext_ownship_position_z));
  SDouble tmp_ext_ident_double_95 = ident_double(ext_ident_double_95_arg0(ext_ident_word64_88, ext_ownship_position_z, ext_ident_word64_89, ext_ident_word64_90, ext_ident_word64_91, ext_ident_word64_92, ext_ident_word64_93, ext_ident_word64_94));
  SDouble tmp_ext_ident_double_96 = ident_double(ext_ident_double_96_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SWord64 tmp_ext_ident_word64_97 = ident_word64(ext_ident_word64_97_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_98 = ident_word64(ext_ident_word64_98_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_99 = ident_word64(ext_ident_word64_99_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_100 = ident_word64(ext_ident_word64_100_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_101 = ident_word64(ext_ident_word64_101_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_102 = ident_word64(ext_ident_word64_102_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_103 = ident_word64(ext_ident_word64_103_arg0(ext_ownship_position_z));
  SDouble tmp_ext_ident_double_104 = ident_double(ext_ident_double_104_arg0(ext_ident_word64_97, ext_ownship_position_z, ext_ident_word64_98, ext_ident_word64_99, ext_ident_word64_100, ext_ident_word64_101, ext_ident_word64_102, ext_ident_word64_103));
  SWord64 tmp_ext_ident_word64_105 = ident_word64(ext_ident_word64_105_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_106 = ident_word64(ext_ident_word64_106_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_107 = ident_word64(ext_ident_word64_107_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_108 = ident_word64(ext_ident_word64_108_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_109 = ident_word64(ext_ident_word64_109_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_110 = ident_word64(ext_ident_word64_110_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_111 = ident_word64(ext_ident_word64_111_arg0(ext_ownship_position_z));
  SDouble tmp_ext_ident_double_112 = ident_double(ext_ident_double_112_arg0(ext_ident_word64_105, ext_ownship_position_z, ext_ident_word64_106, ext_ident_word64_107, ext_ident_word64_108, ext_ident_word64_109, ext_ident_word64_110, ext_ident_word64_111));
  SDouble tmp_ext_ident_double_113 = ident_double(ext_ident_double_113_arg0(ext_ident_double_104, ext_ident_word64_97, ext_ownship_position_z, ext_ident_word64_98, ext_ident_word64_99, ext_ident_word64_100, ext_ident_word64_101, ext_ident_word64_102, ext_ident_word64_103, ext_ident_double_112, ext_ident_word64_105, ext_ident_word64_106, ext_ident_word64_107, ext_ident_word64_108, ext_ident_word64_109, ext_ident_word64_110, ext_ident_word64_111));
  SDouble tmp_ext_ident_double_114 = ident_double(ext_ident_double_114_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_115 = ident_double(ext_ident_double_115_arg0(ext_ident_double_114, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_116 = ident_double(ext_ident_double_116_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_117 = ident_double(ext_ident_double_117_arg0(ext_ident_double_96, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_113, ext_ident_double_104, ext_ident_word64_97, ext_ownship_position_z, ext_ident_word64_98, ext_ident_word64_99, ext_ident_word64_100, ext_ident_word64_101, ext_ident_word64_102, ext_ident_word64_103, ext_ident_double_112, ext_ident_word64_105, ext_ident_word64_106, ext_ident_word64_107, ext_ident_word64_108, ext_ident_word64_109, ext_ident_word64_110, ext_ident_word64_111, ext_ident_double_115, ext_ident_double_114, ext_ident_double_116));
  SWord64 tmp_ext_ident_word64_118 = ident_word64(ext_ident_word64_118_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_119 = ident_word64(ext_ident_word64_119_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_120 = ident_word64(ext_ident_word64_120_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_121 = ident_word64(ext_ident_word64_121_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_122 = ident_word64(ext_ident_word64_122_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_123 = ident_word64(ext_ident_word64_123_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_124 = ident_word64(ext_ident_word64_124_arg0(ext_ownship_position_z));
  SDouble tmp_ext_ident_double_125 = ident_double(ext_ident_double_125_arg0(ext_ident_word64_118, ext_ownship_position_z, ext_ident_word64_119, ext_ident_word64_120, ext_ident_word64_121, ext_ident_word64_122, ext_ident_word64_123, ext_ident_word64_124));
  SDouble tmp_ext_ident_double_126 = ident_double(ext_ident_double_126_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SBool tmp_ext_ident_bool_127 = ident_bool(ext_ident_bool_127_arg0(ext_ident_double_74, ext_sqrt_73, ext_ident_double_72, ext_ident_double_71, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_82, ext_ident_word64_75, ext_ownship_position_z, ext_ident_word64_76, ext_ident_word64_77, ext_ident_word64_78, ext_ident_word64_79, ext_ident_word64_80, ext_ident_word64_81, ext_ident_double_83, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_87, ext_sqrt_86, ext_ident_double_85, ext_ident_double_84, ext_ident_double_95, ext_ident_word64_88, ext_ident_word64_89, ext_ident_word64_90, ext_ident_word64_91, ext_ident_word64_92, ext_ident_word64_93, ext_ident_word64_94, ext_ident_double_117, ext_ident_double_96, ext_ident_double_113, ext_ident_double_104, ext_ident_word64_97, ext_ident_word64_98, ext_ident_word64_99, ext_ident_word64_100, ext_ident_word64_101, ext_ident_word64_102, ext_ident_word64_103, ext_ident_double_112, ext_ident_word64_105, ext_ident_word64_106, ext_ident_word64_107, ext_ident_word64_108, ext_ident_word64_109, ext_ident_word64_110, ext_ident_word64_111, ext_ident_double_115, ext_ident_double_114, ext_ident_double_116, ext_ident_double_125, ext_ident_word64_118, ext_ident_word64_119, ext_ident_word64_120, ext_ident_word64_121, ext_ident_word64_122, ext_ident_word64_123, ext_ident_word64_124, ext_ident_double_126));
  SDouble tmp_ext_ident_double_128 = ident_double(ext_ident_double_128_arg0(ext_ownship_position_z, ext_intruder_position_z));
  SWord64 tmp_ext_ident_word64_129 = ident_word64(ext_ident_word64_129_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_130 = ident_word64(ext_ident_word64_130_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_131 = ident_word64(ext_ident_word64_131_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_132 = ident_word64(ext_ident_word64_132_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_133 = ident_word64(ext_ident_word64_133_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_134 = ident_word64(ext_ident_word64_134_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_135 = ident_word64(ext_ident_word64_135_arg0(ext_ownship_position_z));
  SDouble tmp_ext_ident_double_136 = ident_double(ext_ident_double_136_arg0(ext_ident_word64_129, ext_ownship_position_z, ext_ident_word64_130, ext_ident_word64_131, ext_ident_word64_132, ext_ident_word64_133, ext_ident_word64_134, ext_ident_word64_135));
  SDouble tmp_ext_ident_double_137 = ident_double(ext_ident_double_137_arg0(ext_ownship_position_z, ext_intruder_position_z, ext_ident_double_128, ext_ident_double_136, ext_ident_word64_129, ext_ident_word64_130, ext_ident_word64_131, ext_ident_word64_132, ext_ident_word64_133, ext_ident_word64_134, ext_ident_word64_135, ext_ownship_velocity_z, ext_intruder_velocity_z));
  SDouble tmp_ext_ident_double_138 = ident_double(ext_ident_double_138_arg0(ext_ownship_position_z, ext_intruder_position_z));
  SWord64 tmp_ext_ident_word64_139 = ident_word64(ext_ident_word64_139_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_140 = ident_word64(ext_ident_word64_140_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_141 = ident_word64(ext_ident_word64_141_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_142 = ident_word64(ext_ident_word64_142_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_143 = ident_word64(ext_ident_word64_143_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_144 = ident_word64(ext_ident_word64_144_arg0(ext_ownship_position_z));
  SWord64 tmp_ext_ident_word64_145 = ident_word64(ext_ident_word64_145_arg0(ext_ownship_position_z));
  SDouble tmp_ext_ident_double_146 = ident_double(ext_ident_double_146_arg0(ext_ident_word64_139, ext_ownship_position_z, ext_ident_word64_140, ext_ident_word64_141, ext_ident_word64_142, ext_ident_word64_143, ext_ident_word64_144, ext_ident_word64_145));
  SDouble tmp_ext_ident_double_147 = ident_double(ext_ident_double_147_arg0(ext_ownship_position_z, ext_intruder_position_z, ext_ident_double_138, ext_ident_double_146, ext_ident_word64_139, ext_ident_word64_140, ext_ident_word64_141, ext_ident_word64_142, ext_ident_word64_143, ext_ident_word64_144, ext_ident_word64_145, ext_ownship_velocity_z, ext_intruder_velocity_z));
  SBool tmp_ext_ident_bool_148 = ident_bool(ext_ident_bool_148_arg0(ext_ident_double_137, ext_ownship_position_z, ext_intruder_position_z, ext_ident_double_128, ext_ident_double_136, ext_ident_word64_129, ext_ident_word64_130, ext_ident_word64_131, ext_ident_word64_132, ext_ident_word64_133, ext_ident_word64_134, ext_ident_word64_135, ext_ownship_velocity_z, ext_intruder_velocity_z, ext_ident_double_147, ext_ident_double_138, ext_ident_double_146, ext_ident_word64_139, ext_ident_word64_140, ext_ident_word64_141, ext_ident_word64_142, ext_ident_word64_143, ext_ident_word64_144, ext_ident_word64_145));
  SBool tmp_ext_ident_bool_149 = ident_bool(ext_ident_bool_149_arg0(ext_ident_bool_70, ext_ident_double_1, ext_ident_double_0, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_3, ext_ident_double_2, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_20, ext_ident_double_11, ext_ident_word64_4, ext_ownship_position_z, ext_ident_word64_5, ext_ident_word64_6, ext_ident_word64_7, ext_ident_word64_8, ext_ident_word64_9, ext_ident_word64_10, ext_ident_double_19, ext_ident_word64_12, ext_ident_word64_13, ext_ident_word64_14, ext_ident_word64_15, ext_ident_word64_16, ext_ident_word64_17, ext_ident_word64_18, ext_ident_double_22, ext_ident_double_21, ext_ident_double_43, ext_ident_double_30, ext_ident_word64_23, ext_ident_word64_24, ext_ident_word64_25, ext_ident_word64_26, ext_ident_word64_27, ext_ident_word64_28, ext_ident_word64_29, ext_ident_double_38, ext_ident_word64_31, ext_ident_word64_32, ext_ident_word64_33, ext_ident_word64_34, ext_ident_word64_35, ext_ident_word64_36, ext_ident_word64_37, ext_ident_double_40, ext_ident_double_39, ext_ident_double_41, ext_ident_double_42, ext_ident_double_69, ext_ident_double_44, ext_sqrt_66, ext_ident_double_65, ext_ident_double_52, ext_ident_word64_45, ext_ident_word64_46, ext_ident_word64_47, ext_ident_word64_48, ext_ident_word64_49, ext_ident_word64_50, ext_ident_word64_51, ext_ident_double_60, ext_ident_word64_53, ext_ident_word64_54, ext_ident_word64_55, ext_ident_word64_56, ext_ident_word64_57, ext_ident_word64_58, ext_ident_word64_59, ext_ident_double_62, ext_ident_double_61, ext_ident_double_63, ext_ident_double_64, ext_ident_double_68, ext_ident_double_67, ext_ident_bool_127, ext_ident_double_74, ext_sqrt_73, ext_ident_double_72, ext_ident_double_71, ext_ident_double_82, ext_ident_word64_75, ext_ident_word64_76, ext_ident_word64_77, ext_ident_word64_78, ext_ident_word64_79, ext_ident_word64_80, ext_ident_word64_81, ext_ident_double_83, ext_ident_double_87, ext_sqrt_86, ext_ident_double_85, ext_ident_double_84, ext_ident_double_95, ext_ident_word64_88, ext_ident_word64_89, ext_ident_word64_90, ext_ident_word64_91, ext_ident_word64_92, ext_ident_word64_93, ext_ident_word64_94, ext_ident_double_117, ext_ident_double_96, ext_ident_double_113, ext_ident_double_104, ext_ident_word64_97, ext_ident_word64_98, ext_ident_word64_99, ext_ident_word64_100, ext_ident_word64_101, ext_ident_word64_102, ext_ident_word64_103, ext_ident_double_112, ext_ident_word64_105, ext_ident_word64_106, ext_ident_word64_107, ext_ident_word64_108, ext_ident_word64_109, ext_ident_word64_110, ext_ident_word64_111, ext_ident_double_115, ext_ident_double_114, ext_ident_double_116, ext_ident_double_125, ext_ident_word64_118, ext_ident_word64_119, ext_ident_word64_120, ext_ident_word64_121, ext_ident_word64_122, ext_ident_word64_123, ext_ident_word64_124, ext_ident_double_126, ext_ident_bool_148, ext_ident_double_137, ext_intruder_position_z, ext_ident_double_128, ext_ident_double_136, ext_ident_word64_129, ext_ident_word64_130, ext_ident_word64_131, ext_ident_word64_132, ext_ident_word64_133, ext_ident_word64_134, ext_ident_word64_135, ext_ownship_velocity_z, ext_intruder_velocity_z, ext_ident_double_147, ext_ident_double_138, ext_ident_double_146, ext_ident_word64_139, ext_ident_word64_140, ext_ident_word64_141, ext_ident_word64_142, ext_ident_word64_143, ext_ident_word64_144, ext_ident_word64_145));
  ext_intruder_position_x = intruder_position_x;
  ext_intruder_position_y = intruder_position_y;
  ext_intruder_position_z = intruder_position_z;
  ext_intruder_velocity_x = intruder_velocity_x;
  ext_intruder_velocity_y = intruder_velocity_y;
  ext_intruder_velocity_z = intruder_velocity_z;
  ext_ownship_position_x = ownship_position_x;
  ext_ownship_position_y = ownship_position_y;
  ext_ownship_position_z = ownship_position_z;
  ext_ownship_velocity_x = ownship_velocity_x;
  ext_ownship_velocity_y = ownship_velocity_y;
  ext_ownship_velocity_z = ownship_velocity_z;
  ext_ident_double_0 = tmp_ext_ident_double_0;
  ext_ident_double_1 = tmp_ext_ident_double_1;
  ext_ident_double_2 = tmp_ext_ident_double_2;
  ext_ident_double_3 = tmp_ext_ident_double_3;
  ext_ident_word64_4 = tmp_ext_ident_word64_4;
  ext_ident_word64_5 = tmp_ext_ident_word64_5;
  ext_ident_word64_6 = tmp_ext_ident_word64_6;
  ext_ident_word64_7 = tmp_ext_ident_word64_7;
  ext_ident_word64_8 = tmp_ext_ident_word64_8;
  ext_ident_word64_9 = tmp_ext_ident_word64_9;
  ext_ident_word64_10 = tmp_ext_ident_word64_10;
  ext_ident_double_11 = tmp_ext_ident_double_11;
  ext_ident_word64_12 = tmp_ext_ident_word64_12;
  ext_ident_word64_13 = tmp_ext_ident_word64_13;
  ext_ident_word64_14 = tmp_ext_ident_word64_14;
  ext_ident_word64_15 = tmp_ext_ident_word64_15;
  ext_ident_word64_16 = tmp_ext_ident_word64_16;
  ext_ident_word64_17 = tmp_ext_ident_word64_17;
  ext_ident_word64_18 = tmp_ext_ident_word64_18;
  ext_ident_double_19 = tmp_ext_ident_double_19;
  ext_ident_double_20 = tmp_ext_ident_double_20;
  ext_ident_double_21 = tmp_ext_ident_double_21;
  ext_ident_double_22 = tmp_ext_ident_double_22;
  ext_ident_word64_23 = tmp_ext_ident_word64_23;
  ext_ident_word64_24 = tmp_ext_ident_word64_24;
  ext_ident_word64_25 = tmp_ext_ident_word64_25;
  ext_ident_word64_26 = tmp_ext_ident_word64_26;
  ext_ident_word64_27 = tmp_ext_ident_word64_27;
  ext_ident_word64_28 = tmp_ext_ident_word64_28;
  ext_ident_word64_29 = tmp_ext_ident_word64_29;
  ext_ident_double_30 = tmp_ext_ident_double_30;
  ext_ident_word64_31 = tmp_ext_ident_word64_31;
  ext_ident_word64_32 = tmp_ext_ident_word64_32;
  ext_ident_word64_33 = tmp_ext_ident_word64_33;
  ext_ident_word64_34 = tmp_ext_ident_word64_34;
  ext_ident_word64_35 = tmp_ext_ident_word64_35;
  ext_ident_word64_36 = tmp_ext_ident_word64_36;
  ext_ident_word64_37 = tmp_ext_ident_word64_37;
  ext_ident_double_38 = tmp_ext_ident_double_38;
  ext_ident_double_39 = tmp_ext_ident_double_39;
  ext_ident_double_40 = tmp_ext_ident_double_40;
  ext_ident_double_41 = tmp_ext_ident_double_41;
  ext_ident_double_42 = tmp_ext_ident_double_42;
  ext_ident_double_43 = tmp_ext_ident_double_43;
  ext_ident_double_44 = tmp_ext_ident_double_44;
  ext_ident_word64_45 = tmp_ext_ident_word64_45;
  ext_ident_word64_46 = tmp_ext_ident_word64_46;
  ext_ident_word64_47 = tmp_ext_ident_word64_47;
  ext_ident_word64_48 = tmp_ext_ident_word64_48;
  ext_ident_word64_49 = tmp_ext_ident_word64_49;
  ext_ident_word64_50 = tmp_ext_ident_word64_50;
  ext_ident_word64_51 = tmp_ext_ident_word64_51;
  ext_ident_double_52 = tmp_ext_ident_double_52;
  ext_ident_word64_53 = tmp_ext_ident_word64_53;
  ext_ident_word64_54 = tmp_ext_ident_word64_54;
  ext_ident_word64_55 = tmp_ext_ident_word64_55;
  ext_ident_word64_56 = tmp_ext_ident_word64_56;
  ext_ident_word64_57 = tmp_ext_ident_word64_57;
  ext_ident_word64_58 = tmp_ext_ident_word64_58;
  ext_ident_word64_59 = tmp_ext_ident_word64_59;
  ext_ident_double_60 = tmp_ext_ident_double_60;
  ext_ident_double_61 = tmp_ext_ident_double_61;
  ext_ident_double_62 = tmp_ext_ident_double_62;
  ext_ident_double_63 = tmp_ext_ident_double_63;
  ext_ident_double_64 = tmp_ext_ident_double_64;
  ext_ident_double_65 = tmp_ext_ident_double_65;
  ext_sqrt_66 = tmp_ext_sqrt_66;
  ext_ident_double_67 = tmp_ext_ident_double_67;
  ext_ident_double_68 = tmp_ext_ident_double_68;
  ext_ident_double_69 = tmp_ext_ident_double_69;
  ext_ident_bool_70 = tmp_ext_ident_bool_70;
  ext_ident_double_71 = tmp_ext_ident_double_71;
  ext_ident_double_72 = tmp_ext_ident_double_72;
  ext_sqrt_73 = tmp_ext_sqrt_73;
  ext_ident_double_74 = tmp_ext_ident_double_74;
  ext_ident_word64_75 = tmp_ext_ident_word64_75;
  ext_ident_word64_76 = tmp_ext_ident_word64_76;
  ext_ident_word64_77 = tmp_ext_ident_word64_77;
  ext_ident_word64_78 = tmp_ext_ident_word64_78;
  ext_ident_word64_79 = tmp_ext_ident_word64_79;
  ext_ident_word64_80 = tmp_ext_ident_word64_80;
  ext_ident_word64_81 = tmp_ext_ident_word64_81;
  ext_ident_double_82 = tmp_ext_ident_double_82;
  ext_ident_double_83 = tmp_ext_ident_double_83;
  ext_ident_double_84 = tmp_ext_ident_double_84;
  ext_ident_double_85 = tmp_ext_ident_double_85;
  ext_sqrt_86 = tmp_ext_sqrt_86;
  ext_ident_double_87 = tmp_ext_ident_double_87;
  ext_ident_word64_88 = tmp_ext_ident_word64_88;
  ext_ident_word64_89 = tmp_ext_ident_word64_89;
  ext_ident_word64_90 = tmp_ext_ident_word64_90;
  ext_ident_word64_91 = tmp_ext_ident_word64_91;
  ext_ident_word64_92 = tmp_ext_ident_word64_92;
  ext_ident_word64_93 = tmp_ext_ident_word64_93;
  ext_ident_word64_94 = tmp_ext_ident_word64_94;
  ext_ident_double_95 = tmp_ext_ident_double_95;
  ext_ident_double_96 = tmp_ext_ident_double_96;
  ext_ident_word64_97 = tmp_ext_ident_word64_97;
  ext_ident_word64_98 = tmp_ext_ident_word64_98;
  ext_ident_word64_99 = tmp_ext_ident_word64_99;
  ext_ident_word64_100 = tmp_ext_ident_word64_100;
  ext_ident_word64_101 = tmp_ext_ident_word64_101;
  ext_ident_word64_102 = tmp_ext_ident_word64_102;
  ext_ident_word64_103 = tmp_ext_ident_word64_103;
  ext_ident_double_104 = tmp_ext_ident_double_104;
  ext_ident_word64_105 = tmp_ext_ident_word64_105;
  ext_ident_word64_106 = tmp_ext_ident_word64_106;
  ext_ident_word64_107 = tmp_ext_ident_word64_107;
  ext_ident_word64_108 = tmp_ext_ident_word64_108;
  ext_ident_word64_109 = tmp_ext_ident_word64_109;
  ext_ident_word64_110 = tmp_ext_ident_word64_110;
  ext_ident_word64_111 = tmp_ext_ident_word64_111;
  ext_ident_double_112 = tmp_ext_ident_double_112;
  ext_ident_double_113 = tmp_ext_ident_double_113;
  ext_ident_double_114 = tmp_ext_ident_double_114;
  ext_ident_double_115 = tmp_ext_ident_double_115;
  ext_ident_double_116 = tmp_ext_ident_double_116;
  ext_ident_double_117 = tmp_ext_ident_double_117;
  ext_ident_word64_118 = tmp_ext_ident_word64_118;
  ext_ident_word64_119 = tmp_ext_ident_word64_119;
  ext_ident_word64_120 = tmp_ext_ident_word64_120;
  ext_ident_word64_121 = tmp_ext_ident_word64_121;
  ext_ident_word64_122 = tmp_ext_ident_word64_122;
  ext_ident_word64_123 = tmp_ext_ident_word64_123;
  ext_ident_word64_124 = tmp_ext_ident_word64_124;
  ext_ident_double_125 = tmp_ext_ident_double_125;
  ext_ident_double_126 = tmp_ext_ident_double_126;
  ext_ident_bool_127 = tmp_ext_ident_bool_127;
  ext_ident_double_128 = tmp_ext_ident_double_128;
  ext_ident_word64_129 = tmp_ext_ident_word64_129;
  ext_ident_word64_130 = tmp_ext_ident_word64_130;
  ext_ident_word64_131 = tmp_ext_ident_word64_131;
  ext_ident_word64_132 = tmp_ext_ident_word64_132;
  ext_ident_word64_133 = tmp_ext_ident_word64_133;
  ext_ident_word64_134 = tmp_ext_ident_word64_134;
  ext_ident_word64_135 = tmp_ext_ident_word64_135;
  ext_ident_double_136 = tmp_ext_ident_double_136;
  ext_ident_double_137 = tmp_ext_ident_double_137;
  ext_ident_double_138 = tmp_ext_ident_double_138;
  ext_ident_word64_139 = tmp_ext_ident_word64_139;
  ext_ident_word64_140 = tmp_ext_ident_word64_140;
  ext_ident_word64_141 = tmp_ext_ident_word64_141;
  ext_ident_word64_142 = tmp_ext_ident_word64_142;
  ext_ident_word64_143 = tmp_ext_ident_word64_143;
  ext_ident_word64_144 = tmp_ext_ident_word64_144;
  ext_ident_word64_145 = tmp_ext_ident_word64_145;
  ext_ident_double_146 = tmp_ext_ident_double_146;
  ext_ident_double_147 = tmp_ext_ident_double_147;
  ext_ident_bool_148 = tmp_ext_ident_bool_148;
  ext_ident_bool_149 = tmp_ext_ident_bool_149;
}

void static fireTriggers(void) {
  if (trigger_guard_alert_TCASII_RA(ext_ident_bool_149, ext_ident_bool_70, ext_ident_double_1, ext_ident_double_0, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_3, ext_ident_double_2, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_20, ext_ident_double_11, ext_ident_word64_4, ext_ownship_position_z, ext_ident_word64_5, ext_ident_word64_6, ext_ident_word64_7, ext_ident_word64_8, ext_ident_word64_9, ext_ident_word64_10, ext_ident_double_19, ext_ident_word64_12, ext_ident_word64_13, ext_ident_word64_14, ext_ident_word64_15, ext_ident_word64_16, ext_ident_word64_17, ext_ident_word64_18, ext_ident_double_22, ext_ident_double_21, ext_ident_double_43, ext_ident_double_30, ext_ident_word64_23, ext_ident_word64_24, ext_ident_word64_25, ext_ident_word64_26, ext_ident_word64_27, ext_ident_word64_28, ext_ident_word64_29, ext_ident_double_38, ext_ident_word64_31, ext_ident_word64_32, ext_ident_word64_33, ext_ident_word64_34, ext_ident_word64_35, ext_ident_word64_36, ext_ident_word64_37, ext_ident_double_40, ext_ident_double_39, ext_ident_double_41, ext_ident_double_42, ext_ident_double_69, ext_ident_double_44, ext_sqrt_66, ext_ident_double_65, ext_ident_double_52, ext_ident_word64_45, ext_ident_word64_46, ext_ident_word64_47, ext_ident_word64_48, ext_ident_word64_49, ext_ident_word64_50, ext_ident_word64_51, ext_ident_double_60, ext_ident_word64_53, ext_ident_word64_54, ext_ident_word64_55, ext_ident_word64_56, ext_ident_word64_57, ext_ident_word64_58, ext_ident_word64_59, ext_ident_double_62, ext_ident_double_61, ext_ident_double_63, ext_ident_double_64, ext_ident_double_68, ext_ident_double_67, ext_ident_bool_127, ext_ident_double_74, ext_sqrt_73, ext_ident_double_72, ext_ident_double_71, ext_ident_double_82, ext_ident_word64_75, ext_ident_word64_76, ext_ident_word64_77, ext_ident_word64_78, ext_ident_word64_79, ext_ident_word64_80, ext_ident_word64_81, ext_ident_double_83, ext_ident_double_87, ext_sqrt_86, ext_ident_double_85, ext_ident_double_84, ext_ident_double_95, ext_ident_word64_88, ext_ident_word64_89, ext_ident_word64_90, ext_ident_word64_91, ext_ident_word64_92, ext_ident_word64_93, ext_ident_word64_94, ext_ident_double_117, ext_ident_double_96, ext_ident_double_113, ext_ident_double_104, ext_ident_word64_97, ext_ident_word64_98, ext_ident_word64_99, ext_ident_word64_100, ext_ident_word64_101, ext_ident_word64_102, ext_ident_word64_103, ext_ident_double_112, ext_ident_word64_105, ext_ident_word64_106, ext_ident_word64_107, ext_ident_word64_108, ext_ident_word64_109, ext_ident_word64_110, ext_ident_word64_111, ext_ident_double_115, ext_ident_double_114, ext_ident_double_116, ext_ident_double_125, ext_ident_word64_118, ext_ident_word64_119, ext_ident_word64_120, ext_ident_word64_121, ext_ident_word64_122, ext_ident_word64_123, ext_ident_word64_124, ext_ident_double_126, ext_ident_bool_148, ext_ident_double_137, ext_intruder_position_z, ext_ident_double_128, ext_ident_double_136, ext_ident_word64_129, ext_ident_word64_130, ext_ident_word64_131, ext_ident_word64_132, ext_ident_word64_133, ext_ident_word64_134, ext_ident_word64_135, ext_ownship_velocity_z, ext_intruder_velocity_z, ext_ident_double_147, ext_ident_double_138, ext_ident_double_146, ext_ident_word64_139, ext_ident_word64_140, ext_ident_word64_141, ext_ident_word64_142, ext_ident_word64_143, ext_ident_word64_144, ext_ident_word64_145))
    alert_TCASII_RA();
}

/*@
 assigns \nothing;
 */
void static updateObservers(void) {
}

/*@
 assigns \nothing;
 */
void static updateStates(void) {
}

/*@
 assigns \nothing;
 */
void static updateBuffers(void) {
}

/*@
 assigns \nothing;
 */
void static updatePtrs(void) {
}
/* Idents */

/*@
 assigns \nothing;
 */
SBool ident_bool(SBool a) {return a;}
/*@
 assigns \nothing;
 */
SWord8 ident_word8(SWord8 a) {return a;}
/*@
 assigns \nothing;
 */
SWord16 ident_word16(SWord16 a) {return a;}
/*@
 assigns \nothing;
 */
SWord32 ident_word32(SWord32 a) {return a;}
/*@
 assigns \nothing;
 */
SWord64 ident_word64(SWord64 a) {return a;}
/*@
 assigns \nothing;
 */
SInt8 ident_int8(SInt8 a) {return a;}
/*@
 assigns \nothing;
 */
SInt16 ident_int16(SInt16 a) {return a;}
/*@
 assigns \nothing;
 */
SInt32 ident_int32(SInt32 a) {return a;}
/*@
 assigns \nothing;
 */
SInt64 ident_int64(SInt64 a) {return a;}
/*@
 assigns \nothing;
 */
SFloat ident_float(SFloat a) {return a;}
/*@
 assigns \nothing;
 */
SDouble ident_double(SDouble a) {return a;}

void step(void) {
  sampleExts();
  fireTriggers();
  updateObservers();
  updateStates();
  updateBuffers();
  updatePtrs();
}

void testing(void) {
  for(;;) step();
}
