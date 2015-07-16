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
static SDouble ext_sqrt_2 = 0;
static SDouble ext_ident_double_3 = 0;
static SDouble ext_ident_double_4 = 0;
static SDouble ext_ident_double_5 = 0;
static SDouble ext_ident_double_6 = 0;
static SDouble ext_ident_double_7 = 0;
static SDouble ext_ident_double_8 = 0;
static SDouble ext_ident_double_9 = 0;
static SDouble ext_ident_double_10 = 0;
static SDouble ext_ident_double_11 = 0;
static SDouble ext_ident_double_12 = 0;
static SDouble ext_ident_double_13 = 0;
static SDouble ext_ident_double_14 = 0;
static SDouble ext_ident_double_15 = 0;
static SDouble ext_ident_double_16 = 0;
static SDouble ext_ident_double_17 = 0;
static SDouble ext_ident_double_18 = 0;
static SDouble ext_ident_double_19 = 0;
static SDouble ext_ident_double_20 = 0;
static SDouble ext_ident_double_21 = 0;
static SDouble ext_sqrt_22 = 0;
static SDouble ext_ident_double_23 = 0;
static SDouble ext_ident_double_24 = 0;
static SDouble ext_ident_double_25 = 0;
static SDouble ext_ident_double_26 = 0;
static SDouble ext_ident_double_27 = 0;
static SDouble ext_ident_double_28 = 0;
static SDouble ext_ident_double_29 = 0;
static SDouble ext_ident_double_30 = 0;
static SDouble ext_ident_double_31 = 0;
static SDouble ext_ident_double_32 = 0;
static SDouble ext_ident_double_33 = 0;
static SDouble ext_ident_double_34 = 0;
static SDouble ext_ident_double_35 = 0;
static SDouble ext_sqrt_36 = 0;
static SDouble ext_ident_double_37 = 0;
static SDouble ext_ident_double_38 = 0;
static SDouble ext_ident_double_39 = 0;
static SDouble ext_ident_double_40 = 0;
static SDouble ext_ident_double_41 = 0;
static SDouble ext_ident_double_42 = 0;
static SDouble ext_ident_double_43 = 0;
static SDouble ext_ident_double_44 = 0;
static SDouble ext_ident_double_45 = 0;
static SDouble ext_ident_double_46 = 0;
static SDouble ext_ident_double_47 = 0;
static SDouble ext_ident_double_48 = 0;
static SDouble ext_ident_double_49 = 0;
static SDouble ext_ident_double_50 = 0;
static SDouble ext_ident_double_51 = 0;
static SDouble ext_ident_double_52 = 0;
static SDouble ext_sqrt_53 = 0;
static SDouble ext_ident_double_54 = 0;
static SDouble ext_ident_double_55 = 0;
static SDouble ext_ident_double_56 = 0;
static SDouble ext_ident_double_57 = 0;
static SBool ext_ident_bool_58 = 0;
static SDouble ext_ident_double_59 = 0;
static SDouble ext_ident_double_60 = 0;
static SDouble ext_ident_double_61 = 0;
static SBool ext_ident_bool_62 = 0;
static SBool ext_ident_bool_63 = 0;
static SDouble ext_ident_double_64 = 0;
static SDouble ext_ident_double_65 = 0;
static SDouble ext_sqrt_66 = 0;
static SDouble ext_ident_double_67 = 0;
static SDouble ext_ident_double_68 = 0;
static SDouble ext_ident_double_69 = 0;
static SDouble ext_ident_double_70 = 0;
static SDouble ext_ident_double_71 = 0;
static SDouble ext_ident_double_72 = 0;
static SDouble ext_ident_double_73 = 0;
static SDouble ext_ident_double_74 = 0;
static SDouble ext_ident_double_75 = 0;
static SDouble ext_ident_double_76 = 0;
static SDouble ext_ident_double_77 = 0;
static SDouble ext_ident_double_78 = 0;
static SDouble ext_ident_double_79 = 0;
static SDouble ext_ident_double_80 = 0;
static SDouble ext_ident_double_81 = 0;
static SDouble ext_ident_double_82 = 0;
static SDouble ext_ident_double_83 = 0;
static SDouble ext_ident_double_84 = 0;
static SDouble ext_ident_double_85 = 0;
static SDouble ext_sqrt_86 = 0;
static SDouble ext_ident_double_87 = 0;
static SDouble ext_ident_double_88 = 0;
static SDouble ext_ident_double_89 = 0;
static SDouble ext_ident_double_90 = 0;
static SDouble ext_ident_double_91 = 0;
static SDouble ext_ident_double_92 = 0;
static SDouble ext_ident_double_93 = 0;
static SDouble ext_ident_double_94 = 0;
static SDouble ext_ident_double_95 = 0;
static SDouble ext_ident_double_96 = 0;
static SDouble ext_ident_double_97 = 0;
static SBool ext_ident_bool_98 = 0;
static SDouble ext_ident_double_99 = 0;
static SDouble ext_ident_double_100 = 0;
static SDouble ext_ident_double_101 = 0;
static SBool ext_ident_bool_102 = 0;
static SBool ext_ident_bool_103 = 0;
static SDouble ext_ident_double_104 = 0;
static SDouble ext_ident_double_105 = 0;
static SDouble ext_sqrt_106 = 0;
static SDouble ext_ident_double_107 = 0;
static SDouble ext_ident_double_108 = 0;
static SDouble ext_ident_double_109 = 0;
static SDouble ext_ident_double_110 = 0;
static SDouble ext_ident_double_111 = 0;
static SDouble ext_ident_double_112 = 0;
static SDouble ext_ident_double_113 = 0;
static SDouble ext_ident_double_114 = 0;
static SDouble ext_ident_double_115 = 0;
static SDouble ext_ident_double_116 = 0;
static SDouble ext_ident_double_117 = 0;
static SDouble ext_ident_double_118 = 0;
static SDouble ext_ident_double_119 = 0;
static SDouble ext_ident_double_120 = 0;
static SDouble ext_ident_double_121 = 0;
static SDouble ext_ident_double_122 = 0;
static SDouble ext_ident_double_123 = 0;
static SDouble ext_ident_double_124 = 0;
static SDouble ext_ident_double_125 = 0;
static SDouble ext_sqrt_126 = 0;
static SDouble ext_ident_double_127 = 0;
static SDouble ext_ident_double_128 = 0;
static SDouble ext_ident_double_129 = 0;
static SDouble ext_ident_double_130 = 0;
static SDouble ext_ident_double_131 = 0;
static SDouble ext_ident_double_132 = 0;
static SDouble ext_ident_double_133 = 0;
static SDouble ext_ident_double_134 = 0;
static SDouble ext_ident_double_135 = 0;
static SBool ext_ident_bool_136 = 0;
static SDouble ext_ident_double_137 = 0;
static SDouble ext_ident_double_138 = 0;
static SDouble ext_ident_double_139 = 0;
static SBool ext_ident_bool_140 = 0;
static SBool ext_ident_bool_141 = 0;
static SDouble ext_ident_double_142 = 0;
static SDouble ext_ident_double_143 = 0;
static SDouble ext_sqrt_144 = 0;
static SDouble ext_ident_double_145 = 0;
static SDouble ext_ident_double_146 = 0;
static SDouble ext_ident_double_147 = 0;
static SDouble ext_ident_double_148 = 0;
static SDouble ext_ident_double_149 = 0;
static SDouble ext_ident_double_150 = 0;
static SDouble ext_ident_double_151 = 0;
static SDouble ext_ident_double_152 = 0;
static SDouble ext_ident_double_153 = 0;
static SDouble ext_ident_double_154 = 0;
static SDouble ext_ident_double_155 = 0;
static SDouble ext_ident_double_156 = 0;
static SDouble ext_ident_double_157 = 0;
static SDouble ext_ident_double_158 = 0;
static SDouble ext_ident_double_159 = 0;
static SDouble ext_ident_double_160 = 0;
static SDouble ext_ident_double_161 = 0;
static SDouble ext_ident_double_162 = 0;
static SDouble ext_ident_double_163 = 0;
static SDouble ext_sqrt_164 = 0;
static SDouble ext_ident_double_165 = 0;
static SDouble ext_ident_double_166 = 0;
static SDouble ext_ident_double_167 = 0;
static SDouble ext_ident_double_168 = 0;
static SDouble ext_ident_double_169 = 0;
static SDouble ext_ident_double_170 = 0;
static SDouble ext_ident_double_171 = 0;
static SDouble ext_ident_double_172 = 0;
static SDouble ext_ident_double_173 = 0;
static SDouble ext_ident_double_174 = 0;
static SDouble ext_ident_double_175 = 0;
static SBool ext_ident_bool_176 = 0;
static SDouble ext_ident_double_177 = 0;
static SDouble ext_ident_double_178 = 0;
static SDouble ext_ident_double_179 = 0;
static SBool ext_ident_bool_180 = 0;
static SBool ext_ident_bool_181 = 0;

void static sampleExts(void) {
  SDouble tmp_ext_ident_double_0 = ident_double(ext_ident_double_0_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_1 = ident_double(ext_ident_double_1_arg0(ext_ident_double_0, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_sqrt_2 = sqrt(ext_sqrt_2_arg0(ext_ident_double_1, ext_ident_double_0, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_3 = ident_double(ext_ident_double_3_arg0(ext_sqrt_2, ext_ident_double_1, ext_ident_double_0, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_4 = ident_double(ext_ident_double_4_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_5 = ident_double(ext_ident_double_5_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_6 = ident_double(ext_ident_double_6_arg0(ext_ident_double_5, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_7 = ident_double(ext_ident_double_7_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_4, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_6, ext_ident_double_5));
  SDouble tmp_ext_ident_double_8 = ident_double(ext_ident_double_8_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_9 = ident_double(ext_ident_double_9_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_10 = ident_double(ext_ident_double_10_arg0(ext_ident_double_9, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_11 = ident_double(ext_ident_double_11_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_8, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_10, ext_ident_double_9));
  SDouble tmp_ext_ident_double_12 = ident_double(ext_ident_double_12_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_13 = ident_double(ext_ident_double_13_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_14 = ident_double(ext_ident_double_14_arg0(ext_ident_double_13, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_15 = ident_double(ext_ident_double_15_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_12, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_14, ext_ident_double_13));
  SDouble tmp_ext_ident_double_16 = ident_double(ext_ident_double_16_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_17 = ident_double(ext_ident_double_17_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_18 = ident_double(ext_ident_double_18_arg0(ext_ident_double_17, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_19 = ident_double(ext_ident_double_19_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_16, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_18, ext_ident_double_17));
  SDouble tmp_ext_ident_double_20 = ident_double(ext_ident_double_20_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ident_double_7, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_4, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_6, ext_ident_double_5, ext_ident_double_11, ext_ident_double_8, ext_ident_double_10, ext_ident_double_9, ext_ident_double_15, ext_ident_double_12, ext_ident_double_14, ext_ident_double_13, ext_ident_double_19, ext_ident_double_16, ext_ident_double_18, ext_ident_double_17));
  SDouble tmp_ext_ident_double_21 = ident_double(ext_ident_double_21_arg0(ext_ident_double_20, ext_ownship_position_x, ext_intruder_position_x, ext_ident_double_7, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_4, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_6, ext_ident_double_5, ext_ident_double_11, ext_ident_double_8, ext_ident_double_10, ext_ident_double_9, ext_ident_double_15, ext_ident_double_12, ext_ident_double_14, ext_ident_double_13, ext_ident_double_19, ext_ident_double_16, ext_ident_double_18, ext_ident_double_17));
  SDouble tmp_ext_sqrt_22 = sqrt(ext_sqrt_22_arg0(ext_ident_double_21, ext_ident_double_20, ext_ownship_position_x, ext_intruder_position_x, ext_ident_double_7, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_4, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_6, ext_ident_double_5, ext_ident_double_11, ext_ident_double_8, ext_ident_double_10, ext_ident_double_9, ext_ident_double_15, ext_ident_double_12, ext_ident_double_14, ext_ident_double_13, ext_ident_double_19, ext_ident_double_16, ext_ident_double_18, ext_ident_double_17));
  SDouble tmp_ext_ident_double_23 = ident_double(ext_ident_double_23_arg0(ext_sqrt_22, ext_ident_double_21, ext_ident_double_20, ext_ownship_position_x, ext_intruder_position_x, ext_ident_double_7, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_4, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_6, ext_ident_double_5, ext_ident_double_11, ext_ident_double_8, ext_ident_double_10, ext_ident_double_9, ext_ident_double_15, ext_ident_double_12, ext_ident_double_14, ext_ident_double_13, ext_ident_double_19, ext_ident_double_16, ext_ident_double_18, ext_ident_double_17));
  SDouble tmp_ext_ident_double_24 = ident_double(ext_ident_double_24_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_25 = ident_double(ext_ident_double_25_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_26 = ident_double(ext_ident_double_26_arg0(ext_ident_double_25, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_27 = ident_double(ext_ident_double_27_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_28 = ident_double(ext_ident_double_28_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_29 = ident_double(ext_ident_double_29_arg0(ext_ident_double_26, ext_ident_double_25, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_27, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_28));
  SDouble tmp_ext_ident_double_30 = ident_double(ext_ident_double_30_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_31 = ident_double(ext_ident_double_31_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_32 = ident_double(ext_ident_double_32_arg0(ext_ident_double_31, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_33 = ident_double(ext_ident_double_33_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_34 = ident_double(ext_ident_double_34_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_35 = ident_double(ext_ident_double_35_arg0(ext_ident_double_32, ext_ident_double_31, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_33, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_34));
  SDouble tmp_ext_sqrt_36 = sqrt(ext_sqrt_36_arg0(ext_ident_double_35, ext_ident_double_32, ext_ident_double_31, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_33, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_34));
  SDouble tmp_ext_ident_double_37 = ident_double(ext_ident_double_37_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_38 = ident_double(ext_ident_double_38_arg0(ext_ident_double_37, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_39 = ident_double(ext_ident_double_39_arg0(ext_ident_double_30, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_sqrt_36, ext_ident_double_35, ext_ident_double_32, ext_ident_double_31, ext_ident_double_33, ext_ident_double_34, ext_ident_double_38, ext_ident_double_37));
  SDouble tmp_ext_ident_double_40 = ident_double(ext_ident_double_40_arg0(ext_ident_double_24, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_29, ext_ident_double_26, ext_ident_double_25, ext_ident_double_27, ext_ident_double_28, ext_ident_double_39, ext_ident_double_30, ext_sqrt_36, ext_ident_double_35, ext_ident_double_32, ext_ident_double_31, ext_ident_double_33, ext_ident_double_34, ext_ident_double_38, ext_ident_double_37));
  SDouble tmp_ext_ident_double_41 = ident_double(ext_ident_double_41_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_42 = ident_double(ext_ident_double_42_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_43 = ident_double(ext_ident_double_43_arg0(ext_ident_double_42, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_44 = ident_double(ext_ident_double_44_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_45 = ident_double(ext_ident_double_45_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_46 = ident_double(ext_ident_double_46_arg0(ext_ident_double_43, ext_ident_double_42, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_44, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_45));
  SDouble tmp_ext_ident_double_47 = ident_double(ext_ident_double_47_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_48 = ident_double(ext_ident_double_48_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_49 = ident_double(ext_ident_double_49_arg0(ext_ident_double_48, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_50 = ident_double(ext_ident_double_50_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_51 = ident_double(ext_ident_double_51_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_52 = ident_double(ext_ident_double_52_arg0(ext_ident_double_49, ext_ident_double_48, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_50, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_51));
  SDouble tmp_ext_sqrt_53 = sqrt(ext_sqrt_53_arg0(ext_ident_double_52, ext_ident_double_49, ext_ident_double_48, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_50, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_51));
  SDouble tmp_ext_ident_double_54 = ident_double(ext_ident_double_54_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_55 = ident_double(ext_ident_double_55_arg0(ext_ident_double_54, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_56 = ident_double(ext_ident_double_56_arg0(ext_ident_double_47, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_sqrt_53, ext_ident_double_52, ext_ident_double_49, ext_ident_double_48, ext_ident_double_50, ext_ident_double_51, ext_ident_double_55, ext_ident_double_54));
  SDouble tmp_ext_ident_double_57 = ident_double(ext_ident_double_57_arg0(ext_ident_double_41, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_46, ext_ident_double_43, ext_ident_double_42, ext_ident_double_44, ext_ident_double_45, ext_ident_double_56, ext_ident_double_47, ext_sqrt_53, ext_ident_double_52, ext_ident_double_49, ext_ident_double_48, ext_ident_double_50, ext_ident_double_51, ext_ident_double_55, ext_ident_double_54));
  SBool tmp_ext_ident_bool_58 = ident_bool(ext_ident_bool_58_arg0(ext_ident_double_3, ext_sqrt_2, ext_ident_double_1, ext_ident_double_0, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_23, ext_sqrt_22, ext_ident_double_21, ext_ident_double_20, ext_ident_double_7, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_4, ext_ident_double_6, ext_ident_double_5, ext_ident_double_11, ext_ident_double_8, ext_ident_double_10, ext_ident_double_9, ext_ident_double_15, ext_ident_double_12, ext_ident_double_14, ext_ident_double_13, ext_ident_double_19, ext_ident_double_16, ext_ident_double_18, ext_ident_double_17, ext_ident_double_40, ext_ident_double_24, ext_ident_double_29, ext_ident_double_26, ext_ident_double_25, ext_ident_double_27, ext_ident_double_28, ext_ident_double_39, ext_ident_double_30, ext_sqrt_36, ext_ident_double_35, ext_ident_double_32, ext_ident_double_31, ext_ident_double_33, ext_ident_double_34, ext_ident_double_38, ext_ident_double_37, ext_ident_double_57, ext_ident_double_41, ext_ident_double_46, ext_ident_double_43, ext_ident_double_42, ext_ident_double_44, ext_ident_double_45, ext_ident_double_56, ext_ident_double_47, ext_sqrt_53, ext_ident_double_52, ext_ident_double_49, ext_ident_double_48, ext_ident_double_50, ext_ident_double_51, ext_ident_double_55, ext_ident_double_54));
  SDouble tmp_ext_ident_double_59 = ident_double(ext_ident_double_59_arg0(ext_ownship_position_z, ext_intruder_position_z));
  SDouble tmp_ext_ident_double_60 = ident_double(ext_ident_double_60_arg0(ext_ownship_position_z, ext_intruder_position_z, ext_ownship_velocity_z, ext_intruder_velocity_z));
  SDouble tmp_ext_ident_double_61 = ident_double(ext_ident_double_61_arg0(ext_ownship_position_z, ext_intruder_position_z, ext_ownship_velocity_z, ext_intruder_velocity_z));
  SBool tmp_ext_ident_bool_62 = ident_bool(ext_ident_bool_62_arg0(ext_ownship_position_z, ext_intruder_position_z, ext_ident_double_59, ext_ident_double_60, ext_ownship_velocity_z, ext_intruder_velocity_z, ext_ident_double_61));
  SBool tmp_ext_ident_bool_63 = ident_bool(ext_ident_bool_63_arg0(ext_ident_bool_58, ext_ident_double_3, ext_sqrt_2, ext_ident_double_1, ext_ident_double_0, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_23, ext_sqrt_22, ext_ident_double_21, ext_ident_double_20, ext_ident_double_7, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_4, ext_ident_double_6, ext_ident_double_5, ext_ident_double_11, ext_ident_double_8, ext_ident_double_10, ext_ident_double_9, ext_ident_double_15, ext_ident_double_12, ext_ident_double_14, ext_ident_double_13, ext_ident_double_19, ext_ident_double_16, ext_ident_double_18, ext_ident_double_17, ext_ident_double_40, ext_ident_double_24, ext_ident_double_29, ext_ident_double_26, ext_ident_double_25, ext_ident_double_27, ext_ident_double_28, ext_ident_double_39, ext_ident_double_30, ext_sqrt_36, ext_ident_double_35, ext_ident_double_32, ext_ident_double_31, ext_ident_double_33, ext_ident_double_34, ext_ident_double_38, ext_ident_double_37, ext_ident_double_57, ext_ident_double_41, ext_ident_double_46, ext_ident_double_43, ext_ident_double_42, ext_ident_double_44, ext_ident_double_45, ext_ident_double_56, ext_ident_double_47, ext_sqrt_53, ext_ident_double_52, ext_ident_double_49, ext_ident_double_48, ext_ident_double_50, ext_ident_double_51, ext_ident_double_55, ext_ident_double_54, ext_ident_bool_62, ext_ownship_position_z, ext_intruder_position_z, ext_ident_double_59, ext_ident_double_60, ext_ownship_velocity_z, ext_intruder_velocity_z, ext_ident_double_61));
  SDouble tmp_ext_ident_double_64 = ident_double(ext_ident_double_64_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_65 = ident_double(ext_ident_double_65_arg0(ext_ident_double_64, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_sqrt_66 = sqrt(ext_sqrt_66_arg0(ext_ident_double_65, ext_ident_double_64, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_67 = ident_double(ext_ident_double_67_arg0(ext_sqrt_66, ext_ident_double_65, ext_ident_double_64, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_68 = ident_double(ext_ident_double_68_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_69 = ident_double(ext_ident_double_69_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_70 = ident_double(ext_ident_double_70_arg0(ext_ident_double_69, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_71 = ident_double(ext_ident_double_71_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_68, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_70, ext_ident_double_69));
  SDouble tmp_ext_ident_double_72 = ident_double(ext_ident_double_72_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_73 = ident_double(ext_ident_double_73_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_74 = ident_double(ext_ident_double_74_arg0(ext_ident_double_73, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_75 = ident_double(ext_ident_double_75_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_72, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_74, ext_ident_double_73));
  SDouble tmp_ext_ident_double_76 = ident_double(ext_ident_double_76_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_77 = ident_double(ext_ident_double_77_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_78 = ident_double(ext_ident_double_78_arg0(ext_ident_double_77, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_79 = ident_double(ext_ident_double_79_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_76, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_78, ext_ident_double_77));
  SDouble tmp_ext_ident_double_80 = ident_double(ext_ident_double_80_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_81 = ident_double(ext_ident_double_81_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_82 = ident_double(ext_ident_double_82_arg0(ext_ident_double_81, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_83 = ident_double(ext_ident_double_83_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_80, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_82, ext_ident_double_81));
  SDouble tmp_ext_ident_double_84 = ident_double(ext_ident_double_84_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ident_double_71, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_68, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_70, ext_ident_double_69, ext_ident_double_75, ext_ident_double_72, ext_ident_double_74, ext_ident_double_73, ext_ident_double_79, ext_ident_double_76, ext_ident_double_78, ext_ident_double_77, ext_ident_double_83, ext_ident_double_80, ext_ident_double_82, ext_ident_double_81));
  SDouble tmp_ext_ident_double_85 = ident_double(ext_ident_double_85_arg0(ext_ident_double_84, ext_ownship_position_x, ext_intruder_position_x, ext_ident_double_71, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_68, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_70, ext_ident_double_69, ext_ident_double_75, ext_ident_double_72, ext_ident_double_74, ext_ident_double_73, ext_ident_double_79, ext_ident_double_76, ext_ident_double_78, ext_ident_double_77, ext_ident_double_83, ext_ident_double_80, ext_ident_double_82, ext_ident_double_81));
  SDouble tmp_ext_sqrt_86 = sqrt(ext_sqrt_86_arg0(ext_ident_double_85, ext_ident_double_84, ext_ownship_position_x, ext_intruder_position_x, ext_ident_double_71, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_68, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_70, ext_ident_double_69, ext_ident_double_75, ext_ident_double_72, ext_ident_double_74, ext_ident_double_73, ext_ident_double_79, ext_ident_double_76, ext_ident_double_78, ext_ident_double_77, ext_ident_double_83, ext_ident_double_80, ext_ident_double_82, ext_ident_double_81));
  SDouble tmp_ext_ident_double_87 = ident_double(ext_ident_double_87_arg0(ext_sqrt_86, ext_ident_double_85, ext_ident_double_84, ext_ownship_position_x, ext_intruder_position_x, ext_ident_double_71, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_68, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_70, ext_ident_double_69, ext_ident_double_75, ext_ident_double_72, ext_ident_double_74, ext_ident_double_73, ext_ident_double_79, ext_ident_double_76, ext_ident_double_78, ext_ident_double_77, ext_ident_double_83, ext_ident_double_80, ext_ident_double_82, ext_ident_double_81));
  SDouble tmp_ext_ident_double_88 = ident_double(ext_ident_double_88_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_89 = ident_double(ext_ident_double_89_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_90 = ident_double(ext_ident_double_90_arg0(ext_ident_double_89, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_91 = ident_double(ext_ident_double_91_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_92 = ident_double(ext_ident_double_92_arg0(ext_ident_double_88, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_90, ext_ident_double_89, ext_ident_double_91));
  SDouble tmp_ext_ident_double_93 = ident_double(ext_ident_double_93_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_94 = ident_double(ext_ident_double_94_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_95 = ident_double(ext_ident_double_95_arg0(ext_ident_double_94, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_96 = ident_double(ext_ident_double_96_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_97 = ident_double(ext_ident_double_97_arg0(ext_ident_double_93, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_95, ext_ident_double_94, ext_ident_double_96));
  SBool tmp_ext_ident_bool_98 = ident_bool(ext_ident_bool_98_arg0(ext_ident_double_67, ext_sqrt_66, ext_ident_double_65, ext_ident_double_64, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_87, ext_sqrt_86, ext_ident_double_85, ext_ident_double_84, ext_ident_double_71, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_68, ext_ident_double_70, ext_ident_double_69, ext_ident_double_75, ext_ident_double_72, ext_ident_double_74, ext_ident_double_73, ext_ident_double_79, ext_ident_double_76, ext_ident_double_78, ext_ident_double_77, ext_ident_double_83, ext_ident_double_80, ext_ident_double_82, ext_ident_double_81, ext_ident_double_92, ext_ident_double_88, ext_ident_double_90, ext_ident_double_89, ext_ident_double_91, ext_ident_double_97, ext_ident_double_93, ext_ident_double_95, ext_ident_double_94, ext_ident_double_96));
  SDouble tmp_ext_ident_double_99 = ident_double(ext_ident_double_99_arg0(ext_ownship_position_z, ext_intruder_position_z));
  SDouble tmp_ext_ident_double_100 = ident_double(ext_ident_double_100_arg0(ext_ownship_position_z, ext_intruder_position_z, ext_ownship_velocity_z, ext_intruder_velocity_z));
  SDouble tmp_ext_ident_double_101 = ident_double(ext_ident_double_101_arg0(ext_ownship_position_z, ext_intruder_position_z, ext_ownship_velocity_z, ext_intruder_velocity_z));
  SBool tmp_ext_ident_bool_102 = ident_bool(ext_ident_bool_102_arg0(ext_ownship_position_z, ext_intruder_position_z, ext_ident_double_99, ext_ident_double_100, ext_ownship_velocity_z, ext_intruder_velocity_z, ext_ident_double_101));
  SBool tmp_ext_ident_bool_103 = ident_bool(ext_ident_bool_103_arg0(ext_ident_bool_98, ext_ident_double_67, ext_sqrt_66, ext_ident_double_65, ext_ident_double_64, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_87, ext_sqrt_86, ext_ident_double_85, ext_ident_double_84, ext_ident_double_71, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_68, ext_ident_double_70, ext_ident_double_69, ext_ident_double_75, ext_ident_double_72, ext_ident_double_74, ext_ident_double_73, ext_ident_double_79, ext_ident_double_76, ext_ident_double_78, ext_ident_double_77, ext_ident_double_83, ext_ident_double_80, ext_ident_double_82, ext_ident_double_81, ext_ident_double_92, ext_ident_double_88, ext_ident_double_90, ext_ident_double_89, ext_ident_double_91, ext_ident_double_97, ext_ident_double_93, ext_ident_double_95, ext_ident_double_94, ext_ident_double_96, ext_ident_bool_102, ext_ownship_position_z, ext_intruder_position_z, ext_ident_double_99, ext_ident_double_100, ext_ownship_velocity_z, ext_intruder_velocity_z, ext_ident_double_101));
  SDouble tmp_ext_ident_double_104 = ident_double(ext_ident_double_104_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_105 = ident_double(ext_ident_double_105_arg0(ext_ident_double_104, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_sqrt_106 = sqrt(ext_sqrt_106_arg0(ext_ident_double_105, ext_ident_double_104, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_107 = ident_double(ext_ident_double_107_arg0(ext_sqrt_106, ext_ident_double_105, ext_ident_double_104, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_108 = ident_double(ext_ident_double_108_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_109 = ident_double(ext_ident_double_109_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_110 = ident_double(ext_ident_double_110_arg0(ext_ident_double_109, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_111 = ident_double(ext_ident_double_111_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_108, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_110, ext_ident_double_109));
  SDouble tmp_ext_ident_double_112 = ident_double(ext_ident_double_112_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_113 = ident_double(ext_ident_double_113_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_114 = ident_double(ext_ident_double_114_arg0(ext_ident_double_113, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_115 = ident_double(ext_ident_double_115_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_112, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_114, ext_ident_double_113));
  SDouble tmp_ext_ident_double_116 = ident_double(ext_ident_double_116_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_117 = ident_double(ext_ident_double_117_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_118 = ident_double(ext_ident_double_118_arg0(ext_ident_double_117, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_119 = ident_double(ext_ident_double_119_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_116, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_118, ext_ident_double_117));
  SDouble tmp_ext_ident_double_120 = ident_double(ext_ident_double_120_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_121 = ident_double(ext_ident_double_121_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_122 = ident_double(ext_ident_double_122_arg0(ext_ident_double_121, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_123 = ident_double(ext_ident_double_123_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_120, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_122, ext_ident_double_121));
  SDouble tmp_ext_ident_double_124 = ident_double(ext_ident_double_124_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ident_double_111, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_108, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_110, ext_ident_double_109, ext_ident_double_115, ext_ident_double_112, ext_ident_double_114, ext_ident_double_113, ext_ident_double_119, ext_ident_double_116, ext_ident_double_118, ext_ident_double_117, ext_ident_double_123, ext_ident_double_120, ext_ident_double_122, ext_ident_double_121));
  SDouble tmp_ext_ident_double_125 = ident_double(ext_ident_double_125_arg0(ext_ident_double_124, ext_ownship_position_x, ext_intruder_position_x, ext_ident_double_111, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_108, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_110, ext_ident_double_109, ext_ident_double_115, ext_ident_double_112, ext_ident_double_114, ext_ident_double_113, ext_ident_double_119, ext_ident_double_116, ext_ident_double_118, ext_ident_double_117, ext_ident_double_123, ext_ident_double_120, ext_ident_double_122, ext_ident_double_121));
  SDouble tmp_ext_sqrt_126 = sqrt(ext_sqrt_126_arg0(ext_ident_double_125, ext_ident_double_124, ext_ownship_position_x, ext_intruder_position_x, ext_ident_double_111, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_108, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_110, ext_ident_double_109, ext_ident_double_115, ext_ident_double_112, ext_ident_double_114, ext_ident_double_113, ext_ident_double_119, ext_ident_double_116, ext_ident_double_118, ext_ident_double_117, ext_ident_double_123, ext_ident_double_120, ext_ident_double_122, ext_ident_double_121));
  SDouble tmp_ext_ident_double_127 = ident_double(ext_ident_double_127_arg0(ext_sqrt_126, ext_ident_double_125, ext_ident_double_124, ext_ownship_position_x, ext_intruder_position_x, ext_ident_double_111, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_108, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_110, ext_ident_double_109, ext_ident_double_115, ext_ident_double_112, ext_ident_double_114, ext_ident_double_113, ext_ident_double_119, ext_ident_double_116, ext_ident_double_118, ext_ident_double_117, ext_ident_double_123, ext_ident_double_120, ext_ident_double_122, ext_ident_double_121));
  SDouble tmp_ext_ident_double_128 = ident_double(ext_ident_double_128_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_129 = ident_double(ext_ident_double_129_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_130 = ident_double(ext_ident_double_130_arg0(ext_ident_double_129, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_131 = ident_double(ext_ident_double_131_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_128, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_130, ext_ident_double_129));
  SDouble tmp_ext_ident_double_132 = ident_double(ext_ident_double_132_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_133 = ident_double(ext_ident_double_133_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_134 = ident_double(ext_ident_double_134_arg0(ext_ident_double_133, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_135 = ident_double(ext_ident_double_135_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_132, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_134, ext_ident_double_133));
  SBool tmp_ext_ident_bool_136 = ident_bool(ext_ident_bool_136_arg0(ext_ident_double_107, ext_sqrt_106, ext_ident_double_105, ext_ident_double_104, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_127, ext_sqrt_126, ext_ident_double_125, ext_ident_double_124, ext_ident_double_111, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_108, ext_ident_double_110, ext_ident_double_109, ext_ident_double_115, ext_ident_double_112, ext_ident_double_114, ext_ident_double_113, ext_ident_double_119, ext_ident_double_116, ext_ident_double_118, ext_ident_double_117, ext_ident_double_123, ext_ident_double_120, ext_ident_double_122, ext_ident_double_121, ext_ident_double_131, ext_ident_double_128, ext_ident_double_130, ext_ident_double_129, ext_ident_double_135, ext_ident_double_132, ext_ident_double_134, ext_ident_double_133));
  SDouble tmp_ext_ident_double_137 = ident_double(ext_ident_double_137_arg0(ext_ownship_position_z, ext_intruder_position_z));
  SDouble tmp_ext_ident_double_138 = ident_double(ext_ident_double_138_arg0(ext_ownship_position_z, ext_intruder_position_z, ext_ownship_velocity_z, ext_intruder_velocity_z));
  SDouble tmp_ext_ident_double_139 = ident_double(ext_ident_double_139_arg0(ext_ownship_position_z, ext_intruder_position_z, ext_ownship_velocity_z, ext_intruder_velocity_z));
  SBool tmp_ext_ident_bool_140 = ident_bool(ext_ident_bool_140_arg0(ext_ownship_position_z, ext_intruder_position_z, ext_ident_double_137, ext_ident_double_138, ext_ownship_velocity_z, ext_intruder_velocity_z, ext_ident_double_139));
  SBool tmp_ext_ident_bool_141 = ident_bool(ext_ident_bool_141_arg0(ext_ident_bool_136, ext_ident_double_107, ext_sqrt_106, ext_ident_double_105, ext_ident_double_104, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_127, ext_sqrt_126, ext_ident_double_125, ext_ident_double_124, ext_ident_double_111, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_108, ext_ident_double_110, ext_ident_double_109, ext_ident_double_115, ext_ident_double_112, ext_ident_double_114, ext_ident_double_113, ext_ident_double_119, ext_ident_double_116, ext_ident_double_118, ext_ident_double_117, ext_ident_double_123, ext_ident_double_120, ext_ident_double_122, ext_ident_double_121, ext_ident_double_131, ext_ident_double_128, ext_ident_double_130, ext_ident_double_129, ext_ident_double_135, ext_ident_double_132, ext_ident_double_134, ext_ident_double_133, ext_ident_bool_140, ext_ownship_position_z, ext_intruder_position_z, ext_ident_double_137, ext_ident_double_138, ext_ownship_velocity_z, ext_intruder_velocity_z, ext_ident_double_139));
  SDouble tmp_ext_ident_double_142 = ident_double(ext_ident_double_142_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_143 = ident_double(ext_ident_double_143_arg0(ext_ident_double_142, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_sqrt_144 = sqrt(ext_sqrt_144_arg0(ext_ident_double_143, ext_ident_double_142, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_145 = ident_double(ext_ident_double_145_arg0(ext_sqrt_144, ext_ident_double_143, ext_ident_double_142, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_146 = ident_double(ext_ident_double_146_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_147 = ident_double(ext_ident_double_147_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_148 = ident_double(ext_ident_double_148_arg0(ext_ident_double_147, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_149 = ident_double(ext_ident_double_149_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_146, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_148, ext_ident_double_147));
  SDouble tmp_ext_ident_double_150 = ident_double(ext_ident_double_150_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_151 = ident_double(ext_ident_double_151_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_152 = ident_double(ext_ident_double_152_arg0(ext_ident_double_151, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_153 = ident_double(ext_ident_double_153_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_150, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_152, ext_ident_double_151));
  SDouble tmp_ext_ident_double_154 = ident_double(ext_ident_double_154_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_155 = ident_double(ext_ident_double_155_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_156 = ident_double(ext_ident_double_156_arg0(ext_ident_double_155, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_157 = ident_double(ext_ident_double_157_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_154, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_156, ext_ident_double_155));
  SDouble tmp_ext_ident_double_158 = ident_double(ext_ident_double_158_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_159 = ident_double(ext_ident_double_159_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_160 = ident_double(ext_ident_double_160_arg0(ext_ident_double_159, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_161 = ident_double(ext_ident_double_161_arg0(ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_158, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_160, ext_ident_double_159));
  SDouble tmp_ext_ident_double_162 = ident_double(ext_ident_double_162_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ident_double_149, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_146, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_148, ext_ident_double_147, ext_ident_double_153, ext_ident_double_150, ext_ident_double_152, ext_ident_double_151, ext_ident_double_157, ext_ident_double_154, ext_ident_double_156, ext_ident_double_155, ext_ident_double_161, ext_ident_double_158, ext_ident_double_160, ext_ident_double_159));
  SDouble tmp_ext_ident_double_163 = ident_double(ext_ident_double_163_arg0(ext_ident_double_162, ext_ownship_position_x, ext_intruder_position_x, ext_ident_double_149, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_146, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_148, ext_ident_double_147, ext_ident_double_153, ext_ident_double_150, ext_ident_double_152, ext_ident_double_151, ext_ident_double_157, ext_ident_double_154, ext_ident_double_156, ext_ident_double_155, ext_ident_double_161, ext_ident_double_158, ext_ident_double_160, ext_ident_double_159));
  SDouble tmp_ext_sqrt_164 = sqrt(ext_sqrt_164_arg0(ext_ident_double_163, ext_ident_double_162, ext_ownship_position_x, ext_intruder_position_x, ext_ident_double_149, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_146, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_148, ext_ident_double_147, ext_ident_double_153, ext_ident_double_150, ext_ident_double_152, ext_ident_double_151, ext_ident_double_157, ext_ident_double_154, ext_ident_double_156, ext_ident_double_155, ext_ident_double_161, ext_ident_double_158, ext_ident_double_160, ext_ident_double_159));
  SDouble tmp_ext_ident_double_165 = ident_double(ext_ident_double_165_arg0(ext_sqrt_164, ext_ident_double_163, ext_ident_double_162, ext_ownship_position_x, ext_intruder_position_x, ext_ident_double_149, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_146, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_148, ext_ident_double_147, ext_ident_double_153, ext_ident_double_150, ext_ident_double_152, ext_ident_double_151, ext_ident_double_157, ext_ident_double_154, ext_ident_double_156, ext_ident_double_155, ext_ident_double_161, ext_ident_double_158, ext_ident_double_160, ext_ident_double_159));
  SDouble tmp_ext_ident_double_166 = ident_double(ext_ident_double_166_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_167 = ident_double(ext_ident_double_167_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_168 = ident_double(ext_ident_double_168_arg0(ext_ident_double_167, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_169 = ident_double(ext_ident_double_169_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_170 = ident_double(ext_ident_double_170_arg0(ext_ident_double_166, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_168, ext_ident_double_167, ext_ident_double_169));
  SDouble tmp_ext_ident_double_171 = ident_double(ext_ident_double_171_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_172 = ident_double(ext_ident_double_172_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_173 = ident_double(ext_ident_double_173_arg0(ext_ident_double_172, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y));
  SDouble tmp_ext_ident_double_174 = ident_double(ext_ident_double_174_arg0(ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y));
  SDouble tmp_ext_ident_double_175 = ident_double(ext_ident_double_175_arg0(ext_ident_double_171, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_position_y, ext_intruder_position_y, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_173, ext_ident_double_172, ext_ident_double_174));
  SBool tmp_ext_ident_bool_176 = ident_bool(ext_ident_bool_176_arg0(ext_ident_double_145, ext_sqrt_144, ext_ident_double_143, ext_ident_double_142, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_165, ext_sqrt_164, ext_ident_double_163, ext_ident_double_162, ext_ident_double_149, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_146, ext_ident_double_148, ext_ident_double_147, ext_ident_double_153, ext_ident_double_150, ext_ident_double_152, ext_ident_double_151, ext_ident_double_157, ext_ident_double_154, ext_ident_double_156, ext_ident_double_155, ext_ident_double_161, ext_ident_double_158, ext_ident_double_160, ext_ident_double_159, ext_ident_double_170, ext_ident_double_166, ext_ident_double_168, ext_ident_double_167, ext_ident_double_169, ext_ident_double_175, ext_ident_double_171, ext_ident_double_173, ext_ident_double_172, ext_ident_double_174));
  SDouble tmp_ext_ident_double_177 = ident_double(ext_ident_double_177_arg0(ext_ownship_position_z, ext_intruder_position_z));
  SDouble tmp_ext_ident_double_178 = ident_double(ext_ident_double_178_arg0(ext_ownship_position_z, ext_intruder_position_z, ext_ownship_velocity_z, ext_intruder_velocity_z));
  SDouble tmp_ext_ident_double_179 = ident_double(ext_ident_double_179_arg0(ext_ownship_position_z, ext_intruder_position_z, ext_ownship_velocity_z, ext_intruder_velocity_z));
  SBool tmp_ext_ident_bool_180 = ident_bool(ext_ident_bool_180_arg0(ext_ownship_position_z, ext_intruder_position_z, ext_ident_double_177, ext_ident_double_178, ext_ownship_velocity_z, ext_intruder_velocity_z, ext_ident_double_179));
  SBool tmp_ext_ident_bool_181 = ident_bool(ext_ident_bool_181_arg0(ext_ident_bool_176, ext_ident_double_145, ext_sqrt_144, ext_ident_double_143, ext_ident_double_142, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_165, ext_sqrt_164, ext_ident_double_163, ext_ident_double_162, ext_ident_double_149, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_146, ext_ident_double_148, ext_ident_double_147, ext_ident_double_153, ext_ident_double_150, ext_ident_double_152, ext_ident_double_151, ext_ident_double_157, ext_ident_double_154, ext_ident_double_156, ext_ident_double_155, ext_ident_double_161, ext_ident_double_158, ext_ident_double_160, ext_ident_double_159, ext_ident_double_170, ext_ident_double_166, ext_ident_double_168, ext_ident_double_167, ext_ident_double_169, ext_ident_double_175, ext_ident_double_171, ext_ident_double_173, ext_ident_double_172, ext_ident_double_174, ext_ident_bool_180, ext_ownship_position_z, ext_intruder_position_z, ext_ident_double_177, ext_ident_double_178, ext_ownship_velocity_z, ext_intruder_velocity_z, ext_ident_double_179));
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
  ext_sqrt_2 = tmp_ext_sqrt_2;
  ext_ident_double_3 = tmp_ext_ident_double_3;
  ext_ident_double_4 = tmp_ext_ident_double_4;
  ext_ident_double_5 = tmp_ext_ident_double_5;
  ext_ident_double_6 = tmp_ext_ident_double_6;
  ext_ident_double_7 = tmp_ext_ident_double_7;
  ext_ident_double_8 = tmp_ext_ident_double_8;
  ext_ident_double_9 = tmp_ext_ident_double_9;
  ext_ident_double_10 = tmp_ext_ident_double_10;
  ext_ident_double_11 = tmp_ext_ident_double_11;
  ext_ident_double_12 = tmp_ext_ident_double_12;
  ext_ident_double_13 = tmp_ext_ident_double_13;
  ext_ident_double_14 = tmp_ext_ident_double_14;
  ext_ident_double_15 = tmp_ext_ident_double_15;
  ext_ident_double_16 = tmp_ext_ident_double_16;
  ext_ident_double_17 = tmp_ext_ident_double_17;
  ext_ident_double_18 = tmp_ext_ident_double_18;
  ext_ident_double_19 = tmp_ext_ident_double_19;
  ext_ident_double_20 = tmp_ext_ident_double_20;
  ext_ident_double_21 = tmp_ext_ident_double_21;
  ext_sqrt_22 = tmp_ext_sqrt_22;
  ext_ident_double_23 = tmp_ext_ident_double_23;
  ext_ident_double_24 = tmp_ext_ident_double_24;
  ext_ident_double_25 = tmp_ext_ident_double_25;
  ext_ident_double_26 = tmp_ext_ident_double_26;
  ext_ident_double_27 = tmp_ext_ident_double_27;
  ext_ident_double_28 = tmp_ext_ident_double_28;
  ext_ident_double_29 = tmp_ext_ident_double_29;
  ext_ident_double_30 = tmp_ext_ident_double_30;
  ext_ident_double_31 = tmp_ext_ident_double_31;
  ext_ident_double_32 = tmp_ext_ident_double_32;
  ext_ident_double_33 = tmp_ext_ident_double_33;
  ext_ident_double_34 = tmp_ext_ident_double_34;
  ext_ident_double_35 = tmp_ext_ident_double_35;
  ext_sqrt_36 = tmp_ext_sqrt_36;
  ext_ident_double_37 = tmp_ext_ident_double_37;
  ext_ident_double_38 = tmp_ext_ident_double_38;
  ext_ident_double_39 = tmp_ext_ident_double_39;
  ext_ident_double_40 = tmp_ext_ident_double_40;
  ext_ident_double_41 = tmp_ext_ident_double_41;
  ext_ident_double_42 = tmp_ext_ident_double_42;
  ext_ident_double_43 = tmp_ext_ident_double_43;
  ext_ident_double_44 = tmp_ext_ident_double_44;
  ext_ident_double_45 = tmp_ext_ident_double_45;
  ext_ident_double_46 = tmp_ext_ident_double_46;
  ext_ident_double_47 = tmp_ext_ident_double_47;
  ext_ident_double_48 = tmp_ext_ident_double_48;
  ext_ident_double_49 = tmp_ext_ident_double_49;
  ext_ident_double_50 = tmp_ext_ident_double_50;
  ext_ident_double_51 = tmp_ext_ident_double_51;
  ext_ident_double_52 = tmp_ext_ident_double_52;
  ext_sqrt_53 = tmp_ext_sqrt_53;
  ext_ident_double_54 = tmp_ext_ident_double_54;
  ext_ident_double_55 = tmp_ext_ident_double_55;
  ext_ident_double_56 = tmp_ext_ident_double_56;
  ext_ident_double_57 = tmp_ext_ident_double_57;
  ext_ident_bool_58 = tmp_ext_ident_bool_58;
  ext_ident_double_59 = tmp_ext_ident_double_59;
  ext_ident_double_60 = tmp_ext_ident_double_60;
  ext_ident_double_61 = tmp_ext_ident_double_61;
  ext_ident_bool_62 = tmp_ext_ident_bool_62;
  ext_ident_bool_63 = tmp_ext_ident_bool_63;
  ext_ident_double_64 = tmp_ext_ident_double_64;
  ext_ident_double_65 = tmp_ext_ident_double_65;
  ext_sqrt_66 = tmp_ext_sqrt_66;
  ext_ident_double_67 = tmp_ext_ident_double_67;
  ext_ident_double_68 = tmp_ext_ident_double_68;
  ext_ident_double_69 = tmp_ext_ident_double_69;
  ext_ident_double_70 = tmp_ext_ident_double_70;
  ext_ident_double_71 = tmp_ext_ident_double_71;
  ext_ident_double_72 = tmp_ext_ident_double_72;
  ext_ident_double_73 = tmp_ext_ident_double_73;
  ext_ident_double_74 = tmp_ext_ident_double_74;
  ext_ident_double_75 = tmp_ext_ident_double_75;
  ext_ident_double_76 = tmp_ext_ident_double_76;
  ext_ident_double_77 = tmp_ext_ident_double_77;
  ext_ident_double_78 = tmp_ext_ident_double_78;
  ext_ident_double_79 = tmp_ext_ident_double_79;
  ext_ident_double_80 = tmp_ext_ident_double_80;
  ext_ident_double_81 = tmp_ext_ident_double_81;
  ext_ident_double_82 = tmp_ext_ident_double_82;
  ext_ident_double_83 = tmp_ext_ident_double_83;
  ext_ident_double_84 = tmp_ext_ident_double_84;
  ext_ident_double_85 = tmp_ext_ident_double_85;
  ext_sqrt_86 = tmp_ext_sqrt_86;
  ext_ident_double_87 = tmp_ext_ident_double_87;
  ext_ident_double_88 = tmp_ext_ident_double_88;
  ext_ident_double_89 = tmp_ext_ident_double_89;
  ext_ident_double_90 = tmp_ext_ident_double_90;
  ext_ident_double_91 = tmp_ext_ident_double_91;
  ext_ident_double_92 = tmp_ext_ident_double_92;
  ext_ident_double_93 = tmp_ext_ident_double_93;
  ext_ident_double_94 = tmp_ext_ident_double_94;
  ext_ident_double_95 = tmp_ext_ident_double_95;
  ext_ident_double_96 = tmp_ext_ident_double_96;
  ext_ident_double_97 = tmp_ext_ident_double_97;
  ext_ident_bool_98 = tmp_ext_ident_bool_98;
  ext_ident_double_99 = tmp_ext_ident_double_99;
  ext_ident_double_100 = tmp_ext_ident_double_100;
  ext_ident_double_101 = tmp_ext_ident_double_101;
  ext_ident_bool_102 = tmp_ext_ident_bool_102;
  ext_ident_bool_103 = tmp_ext_ident_bool_103;
  ext_ident_double_104 = tmp_ext_ident_double_104;
  ext_ident_double_105 = tmp_ext_ident_double_105;
  ext_sqrt_106 = tmp_ext_sqrt_106;
  ext_ident_double_107 = tmp_ext_ident_double_107;
  ext_ident_double_108 = tmp_ext_ident_double_108;
  ext_ident_double_109 = tmp_ext_ident_double_109;
  ext_ident_double_110 = tmp_ext_ident_double_110;
  ext_ident_double_111 = tmp_ext_ident_double_111;
  ext_ident_double_112 = tmp_ext_ident_double_112;
  ext_ident_double_113 = tmp_ext_ident_double_113;
  ext_ident_double_114 = tmp_ext_ident_double_114;
  ext_ident_double_115 = tmp_ext_ident_double_115;
  ext_ident_double_116 = tmp_ext_ident_double_116;
  ext_ident_double_117 = tmp_ext_ident_double_117;
  ext_ident_double_118 = tmp_ext_ident_double_118;
  ext_ident_double_119 = tmp_ext_ident_double_119;
  ext_ident_double_120 = tmp_ext_ident_double_120;
  ext_ident_double_121 = tmp_ext_ident_double_121;
  ext_ident_double_122 = tmp_ext_ident_double_122;
  ext_ident_double_123 = tmp_ext_ident_double_123;
  ext_ident_double_124 = tmp_ext_ident_double_124;
  ext_ident_double_125 = tmp_ext_ident_double_125;
  ext_sqrt_126 = tmp_ext_sqrt_126;
  ext_ident_double_127 = tmp_ext_ident_double_127;
  ext_ident_double_128 = tmp_ext_ident_double_128;
  ext_ident_double_129 = tmp_ext_ident_double_129;
  ext_ident_double_130 = tmp_ext_ident_double_130;
  ext_ident_double_131 = tmp_ext_ident_double_131;
  ext_ident_double_132 = tmp_ext_ident_double_132;
  ext_ident_double_133 = tmp_ext_ident_double_133;
  ext_ident_double_134 = tmp_ext_ident_double_134;
  ext_ident_double_135 = tmp_ext_ident_double_135;
  ext_ident_bool_136 = tmp_ext_ident_bool_136;
  ext_ident_double_137 = tmp_ext_ident_double_137;
  ext_ident_double_138 = tmp_ext_ident_double_138;
  ext_ident_double_139 = tmp_ext_ident_double_139;
  ext_ident_bool_140 = tmp_ext_ident_bool_140;
  ext_ident_bool_141 = tmp_ext_ident_bool_141;
  ext_ident_double_142 = tmp_ext_ident_double_142;
  ext_ident_double_143 = tmp_ext_ident_double_143;
  ext_sqrt_144 = tmp_ext_sqrt_144;
  ext_ident_double_145 = tmp_ext_ident_double_145;
  ext_ident_double_146 = tmp_ext_ident_double_146;
  ext_ident_double_147 = tmp_ext_ident_double_147;
  ext_ident_double_148 = tmp_ext_ident_double_148;
  ext_ident_double_149 = tmp_ext_ident_double_149;
  ext_ident_double_150 = tmp_ext_ident_double_150;
  ext_ident_double_151 = tmp_ext_ident_double_151;
  ext_ident_double_152 = tmp_ext_ident_double_152;
  ext_ident_double_153 = tmp_ext_ident_double_153;
  ext_ident_double_154 = tmp_ext_ident_double_154;
  ext_ident_double_155 = tmp_ext_ident_double_155;
  ext_ident_double_156 = tmp_ext_ident_double_156;
  ext_ident_double_157 = tmp_ext_ident_double_157;
  ext_ident_double_158 = tmp_ext_ident_double_158;
  ext_ident_double_159 = tmp_ext_ident_double_159;
  ext_ident_double_160 = tmp_ext_ident_double_160;
  ext_ident_double_161 = tmp_ext_ident_double_161;
  ext_ident_double_162 = tmp_ext_ident_double_162;
  ext_ident_double_163 = tmp_ext_ident_double_163;
  ext_sqrt_164 = tmp_ext_sqrt_164;
  ext_ident_double_165 = tmp_ext_ident_double_165;
  ext_ident_double_166 = tmp_ext_ident_double_166;
  ext_ident_double_167 = tmp_ext_ident_double_167;
  ext_ident_double_168 = tmp_ext_ident_double_168;
  ext_ident_double_169 = tmp_ext_ident_double_169;
  ext_ident_double_170 = tmp_ext_ident_double_170;
  ext_ident_double_171 = tmp_ext_ident_double_171;
  ext_ident_double_172 = tmp_ext_ident_double_172;
  ext_ident_double_173 = tmp_ext_ident_double_173;
  ext_ident_double_174 = tmp_ext_ident_double_174;
  ext_ident_double_175 = tmp_ext_ident_double_175;
  ext_ident_bool_176 = tmp_ext_ident_bool_176;
  ext_ident_double_177 = tmp_ext_ident_double_177;
  ext_ident_double_178 = tmp_ext_ident_double_178;
  ext_ident_double_179 = tmp_ext_ident_double_179;
  ext_ident_bool_180 = tmp_ext_ident_bool_180;
  ext_ident_bool_181 = tmp_ext_ident_bool_181;
}

void static fireTriggers(void) {
  if (trigger_guard_alert_WCVtau(ext_ident_bool_181, ext_ident_bool_176, ext_ident_double_145, ext_sqrt_144, ext_ident_double_143, ext_ident_double_142, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_165, ext_sqrt_164, ext_ident_double_163, ext_ident_double_162, ext_ident_double_149, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_146, ext_ident_double_148, ext_ident_double_147, ext_ident_double_153, ext_ident_double_150, ext_ident_double_152, ext_ident_double_151, ext_ident_double_157, ext_ident_double_154, ext_ident_double_156, ext_ident_double_155, ext_ident_double_161, ext_ident_double_158, ext_ident_double_160, ext_ident_double_159, ext_ident_double_170, ext_ident_double_166, ext_ident_double_168, ext_ident_double_167, ext_ident_double_169, ext_ident_double_175, ext_ident_double_171, ext_ident_double_173, ext_ident_double_172, ext_ident_double_174, ext_ident_bool_180, ext_ownship_position_z, ext_intruder_position_z, ext_ident_double_177, ext_ident_double_178, ext_ownship_velocity_z, ext_intruder_velocity_z, ext_ident_double_179))
    alert_WCVtau();
  if (trigger_guard_alert_WCVtaumod(ext_ident_bool_103, ext_ident_bool_98, ext_ident_double_67, ext_sqrt_66, ext_ident_double_65, ext_ident_double_64, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_87, ext_sqrt_86, ext_ident_double_85, ext_ident_double_84, ext_ident_double_71, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_68, ext_ident_double_70, ext_ident_double_69, ext_ident_double_75, ext_ident_double_72, ext_ident_double_74, ext_ident_double_73, ext_ident_double_79, ext_ident_double_76, ext_ident_double_78, ext_ident_double_77, ext_ident_double_83, ext_ident_double_80, ext_ident_double_82, ext_ident_double_81, ext_ident_double_92, ext_ident_double_88, ext_ident_double_90, ext_ident_double_89, ext_ident_double_91, ext_ident_double_97, ext_ident_double_93, ext_ident_double_95, ext_ident_double_94, ext_ident_double_96, ext_ident_bool_102, ext_ownship_position_z, ext_intruder_position_z, ext_ident_double_99, ext_ident_double_100, ext_ownship_velocity_z, ext_intruder_velocity_z, ext_ident_double_101))
    alert_WCVtaumod();
  if (trigger_guard_alert_WCVtcpa(ext_ident_bool_141, ext_ident_bool_136, ext_ident_double_107, ext_sqrt_106, ext_ident_double_105, ext_ident_double_104, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_127, ext_sqrt_126, ext_ident_double_125, ext_ident_double_124, ext_ident_double_111, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_108, ext_ident_double_110, ext_ident_double_109, ext_ident_double_115, ext_ident_double_112, ext_ident_double_114, ext_ident_double_113, ext_ident_double_119, ext_ident_double_116, ext_ident_double_118, ext_ident_double_117, ext_ident_double_123, ext_ident_double_120, ext_ident_double_122, ext_ident_double_121, ext_ident_double_131, ext_ident_double_128, ext_ident_double_130, ext_ident_double_129, ext_ident_double_135, ext_ident_double_132, ext_ident_double_134, ext_ident_double_133, ext_ident_bool_140, ext_ownship_position_z, ext_intruder_position_z, ext_ident_double_137, ext_ident_double_138, ext_ownship_velocity_z, ext_intruder_velocity_z, ext_ident_double_139))
    alert_WCVtcpa();
  if (trigger_guard_alert_WCVtep(ext_ident_bool_63, ext_ident_bool_58, ext_ident_double_3, ext_sqrt_2, ext_ident_double_1, ext_ident_double_0, ext_ownship_position_x, ext_intruder_position_x, ext_ownship_position_y, ext_intruder_position_y, ext_ident_double_23, ext_sqrt_22, ext_ident_double_21, ext_ident_double_20, ext_ident_double_7, ext_ownship_velocity_x, ext_intruder_velocity_x, ext_ownship_velocity_y, ext_intruder_velocity_y, ext_ident_double_4, ext_ident_double_6, ext_ident_double_5, ext_ident_double_11, ext_ident_double_8, ext_ident_double_10, ext_ident_double_9, ext_ident_double_15, ext_ident_double_12, ext_ident_double_14, ext_ident_double_13, ext_ident_double_19, ext_ident_double_16, ext_ident_double_18, ext_ident_double_17, ext_ident_double_40, ext_ident_double_24, ext_ident_double_29, ext_ident_double_26, ext_ident_double_25, ext_ident_double_27, ext_ident_double_28, ext_ident_double_39, ext_ident_double_30, ext_sqrt_36, ext_ident_double_35, ext_ident_double_32, ext_ident_double_31, ext_ident_double_33, ext_ident_double_34, ext_ident_double_38, ext_ident_double_37, ext_ident_double_57, ext_ident_double_41, ext_ident_double_46, ext_ident_double_43, ext_ident_double_42, ext_ident_double_44, ext_ident_double_45, ext_ident_double_56, ext_ident_double_47, ext_sqrt_53, ext_ident_double_52, ext_ident_double_49, ext_ident_double_48, ext_ident_double_50, ext_ident_double_51, ext_ident_double_55, ext_ident_double_54, ext_ident_bool_62, ext_ownship_position_z, ext_intruder_position_z, ext_ident_double_59, ext_ident_double_60, ext_ownship_velocity_z, ext_intruder_velocity_z, ext_ident_double_61))
    alert_WCVtep();
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
