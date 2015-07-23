/* Driver for SBV program generated from Copilot. */
/* Edit as you see fit */

#include "internal.h"
#include "copilot.h"

/* Observers */


/* Variables */
static SDouble ext_intruder_altitude_ft = 0;
static SDouble ext_intruder_latitude = 0;
static SDouble ext_intruder_longitude = 0;
static SDouble ext_intruder_vx = 0;
static SDouble ext_intruder_vy = 0;
static SDouble ext_intruder_vz = 0;
static SDouble ext_ownship_altitude_ft = 0;
static SDouble ext_ownship_latitude = 0;
static SDouble ext_ownship_longitude = 0;
static SDouble ext_ownship_vx = 0;
static SDouble ext_ownship_vy = 0;
static SDouble ext_ownship_vz = 0;
static SDouble ext_tan_0 = 0;
static SDouble ext_log_1 = 0;
static SDouble ext_tan_2 = 0;
static SDouble ext_log_3 = 0;
static SDouble ext_tan_4 = 0;
static SDouble ext_log_5 = 0;
static SDouble ext_tan_6 = 0;
static SDouble ext_log_7 = 0;
static SDouble ext_sqrt_8 = 0;
static SDouble ext_tan_9 = 0;
static SDouble ext_log_10 = 0;
static SDouble ext_tan_11 = 0;
static SDouble ext_log_12 = 0;
static SDouble ext_tan_13 = 0;
static SDouble ext_log_14 = 0;
static SDouble ext_tan_15 = 0;
static SDouble ext_log_16 = 0;
static SDouble ext_tan_17 = 0;
static SDouble ext_log_18 = 0;
static SDouble ext_tan_19 = 0;
static SDouble ext_log_20 = 0;
static SDouble ext_tan_21 = 0;
static SDouble ext_log_22 = 0;
static SDouble ext_tan_23 = 0;
static SDouble ext_log_24 = 0;
static SDouble ext_tan_25 = 0;
static SDouble ext_log_26 = 0;
static SDouble ext_tan_27 = 0;
static SDouble ext_log_28 = 0;
static SDouble ext_tan_29 = 0;
static SDouble ext_log_30 = 0;
static SDouble ext_tan_31 = 0;
static SDouble ext_log_32 = 0;
static SDouble ext_sqrt_33 = 0;
static SDouble ext_tan_34 = 0;
static SDouble ext_log_35 = 0;
static SDouble ext_tan_36 = 0;
static SDouble ext_log_37 = 0;
static SDouble ext_tan_38 = 0;
static SDouble ext_log_39 = 0;
static SDouble ext_tan_40 = 0;
static SDouble ext_log_41 = 0;
static SDouble ext_tan_42 = 0;
static SDouble ext_log_43 = 0;
static SDouble ext_tan_44 = 0;
static SDouble ext_log_45 = 0;
static SDouble ext_tan_46 = 0;
static SDouble ext_log_47 = 0;
static SDouble ext_tan_48 = 0;
static SDouble ext_log_49 = 0;
static SDouble ext_tan_50 = 0;
static SDouble ext_log_51 = 0;
static SDouble ext_tan_52 = 0;
static SDouble ext_log_53 = 0;
static SDouble ext_tan_54 = 0;
static SDouble ext_log_55 = 0;
static SDouble ext_tan_56 = 0;
static SDouble ext_log_57 = 0;
static SDouble ext_sqrt_58 = 0;
static SDouble ext_tan_59 = 0;
static SDouble ext_log_60 = 0;
static SDouble ext_tan_61 = 0;
static SDouble ext_log_62 = 0;
static SDouble ext_tan_63 = 0;
static SDouble ext_log_64 = 0;
static SDouble ext_tan_65 = 0;
static SDouble ext_log_66 = 0;
static SDouble ext_tan_67 = 0;
static SDouble ext_log_68 = 0;
static SDouble ext_tan_69 = 0;
static SDouble ext_log_70 = 0;
static SDouble ext_tan_71 = 0;
static SDouble ext_log_72 = 0;
static SDouble ext_tan_73 = 0;
static SDouble ext_log_74 = 0;
static SDouble ext_tan_75 = 0;
static SDouble ext_log_76 = 0;
static SDouble ext_tan_77 = 0;
static SDouble ext_log_78 = 0;
static SDouble ext_tan_79 = 0;
static SDouble ext_log_80 = 0;
static SDouble ext_tan_81 = 0;
static SDouble ext_log_82 = 0;
static SDouble ext_sqrt_83 = 0;
static SDouble ext_tan_84 = 0;
static SDouble ext_log_85 = 0;
static SDouble ext_tan_86 = 0;
static SDouble ext_log_87 = 0;
static SDouble ext_tan_88 = 0;
static SDouble ext_log_89 = 0;
static SDouble ext_tan_90 = 0;
static SDouble ext_log_91 = 0;
static SDouble ext_sqrt_92 = 0;
static SDouble ext_tan_93 = 0;
static SDouble ext_log_94 = 0;
static SDouble ext_tan_95 = 0;
static SDouble ext_log_96 = 0;
static SDouble ext_tan_97 = 0;
static SDouble ext_log_98 = 0;
static SDouble ext_tan_99 = 0;
static SDouble ext_log_100 = 0;
static SDouble ext_tan_101 = 0;
static SDouble ext_log_102 = 0;
static SDouble ext_tan_103 = 0;
static SDouble ext_log_104 = 0;
static SDouble ext_tan_105 = 0;
static SDouble ext_log_106 = 0;
static SDouble ext_tan_107 = 0;
static SDouble ext_log_108 = 0;
static SDouble ext_tan_109 = 0;
static SDouble ext_log_110 = 0;
static SDouble ext_tan_111 = 0;
static SDouble ext_log_112 = 0;
static SDouble ext_tan_113 = 0;
static SDouble ext_log_114 = 0;
static SDouble ext_tan_115 = 0;
static SDouble ext_log_116 = 0;
static SDouble ext_sqrt_117 = 0;
static SDouble ext_tan_118 = 0;
static SDouble ext_log_119 = 0;
static SDouble ext_tan_120 = 0;
static SDouble ext_log_121 = 0;
static SDouble ext_tan_122 = 0;
static SDouble ext_log_123 = 0;
static SDouble ext_tan_124 = 0;
static SDouble ext_log_125 = 0;
static SDouble ext_tan_126 = 0;
static SDouble ext_log_127 = 0;
static SDouble ext_tan_128 = 0;
static SDouble ext_log_129 = 0;
static SDouble ext_tan_130 = 0;
static SDouble ext_log_131 = 0;
static SDouble ext_tan_132 = 0;
static SDouble ext_log_133 = 0;
static SDouble ext_tan_134 = 0;
static SDouble ext_log_135 = 0;
static SDouble ext_tan_136 = 0;
static SDouble ext_log_137 = 0;
static SDouble ext_tan_138 = 0;
static SDouble ext_log_139 = 0;
static SDouble ext_tan_140 = 0;
static SDouble ext_log_141 = 0;
static SDouble ext_tan_142 = 0;
static SDouble ext_log_143 = 0;
static SDouble ext_tan_144 = 0;
static SDouble ext_log_145 = 0;
static SDouble ext_tan_146 = 0;
static SDouble ext_log_147 = 0;
static SDouble ext_tan_148 = 0;
static SDouble ext_log_149 = 0;
static SDouble ext_tan_150 = 0;
static SDouble ext_log_151 = 0;
static SDouble ext_tan_152 = 0;
static SDouble ext_log_153 = 0;
static SDouble ext_tan_154 = 0;
static SDouble ext_log_155 = 0;
static SDouble ext_tan_156 = 0;
static SDouble ext_log_157 = 0;
static SDouble ext_sqrt_158 = 0;
static SDouble ext_tan_159 = 0;
static SDouble ext_log_160 = 0;
static SDouble ext_tan_161 = 0;
static SDouble ext_log_162 = 0;
static SDouble ext_tan_163 = 0;
static SDouble ext_log_164 = 0;
static SDouble ext_tan_165 = 0;
static SDouble ext_log_166 = 0;
static SDouble ext_tan_167 = 0;
static SDouble ext_log_168 = 0;
static SDouble ext_tan_169 = 0;
static SDouble ext_log_170 = 0;
static SDouble ext_tan_171 = 0;
static SDouble ext_log_172 = 0;
static SDouble ext_tan_173 = 0;
static SDouble ext_log_174 = 0;
static SDouble ext_tan_175 = 0;
static SDouble ext_log_176 = 0;
static SDouble ext_tan_177 = 0;
static SDouble ext_log_178 = 0;
static SDouble ext_tan_179 = 0;
static SDouble ext_log_180 = 0;
static SDouble ext_tan_181 = 0;
static SDouble ext_log_182 = 0;
static SDouble ext_sqrt_183 = 0;
static SDouble ext_tan_184 = 0;
static SDouble ext_log_185 = 0;
static SDouble ext_tan_186 = 0;
static SDouble ext_log_187 = 0;
static SDouble ext_tan_188 = 0;
static SDouble ext_log_189 = 0;
static SDouble ext_tan_190 = 0;
static SDouble ext_log_191 = 0;
static SDouble ext_tan_192 = 0;
static SDouble ext_log_193 = 0;
static SDouble ext_tan_194 = 0;
static SDouble ext_log_195 = 0;
static SDouble ext_tan_196 = 0;
static SDouble ext_log_197 = 0;
static SDouble ext_tan_198 = 0;
static SDouble ext_log_199 = 0;
static SDouble ext_sqrt_200 = 0;
static SDouble ext_tan_201 = 0;
static SDouble ext_log_202 = 0;
static SDouble ext_tan_203 = 0;
static SDouble ext_log_204 = 0;
static SDouble ext_tan_205 = 0;
static SDouble ext_log_206 = 0;
static SDouble ext_tan_207 = 0;
static SDouble ext_log_208 = 0;
static SDouble ext_tan_209 = 0;
static SDouble ext_log_210 = 0;
static SDouble ext_tan_211 = 0;
static SDouble ext_log_212 = 0;
static SDouble ext_tan_213 = 0;
static SDouble ext_log_214 = 0;
static SDouble ext_tan_215 = 0;
static SDouble ext_log_216 = 0;
static SDouble ext_tan_217 = 0;
static SDouble ext_log_218 = 0;
static SDouble ext_tan_219 = 0;
static SDouble ext_log_220 = 0;
static SDouble ext_tan_221 = 0;
static SDouble ext_log_222 = 0;
static SDouble ext_tan_223 = 0;
static SDouble ext_log_224 = 0;
static SDouble ext_sqrt_225 = 0;
static SDouble ext_tan_226 = 0;
static SDouble ext_log_227 = 0;
static SDouble ext_tan_228 = 0;
static SDouble ext_log_229 = 0;
static SDouble ext_tan_230 = 0;
static SDouble ext_log_231 = 0;
static SDouble ext_tan_232 = 0;
static SDouble ext_log_233 = 0;
static SDouble ext_tan_234 = 0;
static SDouble ext_log_235 = 0;
static SDouble ext_tan_236 = 0;
static SDouble ext_log_237 = 0;
static SDouble ext_tan_238 = 0;
static SDouble ext_log_239 = 0;
static SDouble ext_tan_240 = 0;
static SDouble ext_log_241 = 0;
static SDouble ext_tan_242 = 0;
static SDouble ext_log_243 = 0;
static SDouble ext_tan_244 = 0;
static SDouble ext_log_245 = 0;
static SDouble ext_tan_246 = 0;
static SDouble ext_log_247 = 0;
static SDouble ext_tan_248 = 0;
static SDouble ext_log_249 = 0;
static SDouble ext_tan_250 = 0;
static SDouble ext_log_251 = 0;
static SDouble ext_tan_252 = 0;
static SDouble ext_log_253 = 0;
static SDouble ext_tan_254 = 0;
static SDouble ext_log_255 = 0;
static SDouble ext_tan_256 = 0;
static SDouble ext_log_257 = 0;

void static sampleExts(void) {
  ext_intruder_altitude_ft = intruder_altitude_ft;
  ext_intruder_latitude = intruder_latitude;
  ext_intruder_longitude = intruder_longitude;
  ext_intruder_vx = intruder_vx;
  ext_intruder_vy = intruder_vy;
  ext_intruder_vz = intruder_vz;
  ext_ownship_altitude_ft = ownship_altitude_ft;
  ext_ownship_latitude = ownship_latitude;
  ext_ownship_longitude = ownship_longitude;
  ext_ownship_vx = ownship_vx;
  ext_ownship_vy = ownship_vy;
  ext_ownship_vz = ownship_vz;
  ext_tan_0 = tan(ext_tan_0_arg0(ext_ownship_latitude));
  ext_log_1 = log(ext_log_1_arg0(ext_tan_0, ext_ownship_latitude));
  ext_tan_2 = tan(ext_tan_2_arg0(ext_intruder_latitude));
  ext_log_3 = log(ext_log_3_arg0(ext_tan_2, ext_intruder_latitude));
  ext_tan_4 = tan(ext_tan_4_arg0(ext_ownship_latitude));
  ext_log_5 = log(ext_log_5_arg0(ext_tan_4, ext_ownship_latitude));
  ext_tan_6 = tan(ext_tan_6_arg0(ext_intruder_latitude));
  ext_log_7 = log(ext_log_7_arg0(ext_tan_6, ext_intruder_latitude));
  ext_sqrt_8 = sqrt(ext_sqrt_8_arg0(ext_ownship_longitude, ext_intruder_longitude, ext_log_1, ext_tan_0, ext_ownship_latitude, ext_log_3, ext_tan_2, ext_intruder_latitude, ext_log_5, ext_tan_4, ext_log_7, ext_tan_6));
  ext_tan_9 = tan(ext_tan_9_arg0(ext_ownship_latitude));
  ext_log_10 = log(ext_log_10_arg0(ext_tan_9, ext_ownship_latitude));
  ext_tan_11 = tan(ext_tan_11_arg0(ext_intruder_latitude));
  ext_log_12 = log(ext_log_12_arg0(ext_tan_11, ext_intruder_latitude));
  ext_tan_13 = tan(ext_tan_13_arg0(ext_ownship_latitude));
  ext_log_14 = log(ext_log_14_arg0(ext_tan_13, ext_ownship_latitude));
  ext_tan_15 = tan(ext_tan_15_arg0(ext_intruder_latitude));
  ext_log_16 = log(ext_log_16_arg0(ext_tan_15, ext_intruder_latitude));
  ext_tan_17 = tan(ext_tan_17_arg0(ext_ownship_latitude));
  ext_log_18 = log(ext_log_18_arg0(ext_tan_17, ext_ownship_latitude));
  ext_tan_19 = tan(ext_tan_19_arg0(ext_intruder_latitude));
  ext_log_20 = log(ext_log_20_arg0(ext_tan_19, ext_intruder_latitude));
  ext_tan_21 = tan(ext_tan_21_arg0(ext_ownship_latitude));
  ext_log_22 = log(ext_log_22_arg0(ext_tan_21, ext_ownship_latitude));
  ext_tan_23 = tan(ext_tan_23_arg0(ext_intruder_latitude));
  ext_log_24 = log(ext_log_24_arg0(ext_tan_23, ext_intruder_latitude));
  ext_tan_25 = tan(ext_tan_25_arg0(ext_ownship_latitude));
  ext_log_26 = log(ext_log_26_arg0(ext_tan_25, ext_ownship_latitude));
  ext_tan_27 = tan(ext_tan_27_arg0(ext_intruder_latitude));
  ext_log_28 = log(ext_log_28_arg0(ext_tan_27, ext_intruder_latitude));
  ext_tan_29 = tan(ext_tan_29_arg0(ext_ownship_latitude));
  ext_log_30 = log(ext_log_30_arg0(ext_tan_29, ext_ownship_latitude));
  ext_tan_31 = tan(ext_tan_31_arg0(ext_intruder_latitude));
  ext_log_32 = log(ext_log_32_arg0(ext_tan_31, ext_intruder_latitude));
  ext_sqrt_33 = sqrt(ext_sqrt_33_arg0(ext_ownship_longitude, ext_intruder_longitude, ext_ownship_vx, ext_intruder_vx, ext_ownship_vy, ext_intruder_vy, ext_log_10, ext_tan_9, ext_ownship_latitude, ext_log_12, ext_tan_11, ext_intruder_latitude, ext_log_14, ext_tan_13, ext_log_16, ext_tan_15, ext_log_18, ext_tan_17, ext_log_20, ext_tan_19, ext_log_22, ext_tan_21, ext_log_24, ext_tan_23, ext_log_26, ext_tan_25, ext_log_28, ext_tan_27, ext_log_30, ext_tan_29, ext_log_32, ext_tan_31));
  ext_tan_34 = tan(ext_tan_34_arg0(ext_ownship_latitude));
  ext_log_35 = log(ext_log_35_arg0(ext_tan_34, ext_ownship_latitude));
  ext_tan_36 = tan(ext_tan_36_arg0(ext_intruder_latitude));
  ext_log_37 = log(ext_log_37_arg0(ext_tan_36, ext_intruder_latitude));
  ext_tan_38 = tan(ext_tan_38_arg0(ext_ownship_latitude));
  ext_log_39 = log(ext_log_39_arg0(ext_tan_38, ext_ownship_latitude));
  ext_tan_40 = tan(ext_tan_40_arg0(ext_intruder_latitude));
  ext_log_41 = log(ext_log_41_arg0(ext_tan_40, ext_intruder_latitude));
  ext_tan_42 = tan(ext_tan_42_arg0(ext_ownship_latitude));
  ext_log_43 = log(ext_log_43_arg0(ext_tan_42, ext_ownship_latitude));
  ext_tan_44 = tan(ext_tan_44_arg0(ext_intruder_latitude));
  ext_log_45 = log(ext_log_45_arg0(ext_tan_44, ext_intruder_latitude));
  ext_tan_46 = tan(ext_tan_46_arg0(ext_ownship_latitude));
  ext_log_47 = log(ext_log_47_arg0(ext_tan_46, ext_ownship_latitude));
  ext_tan_48 = tan(ext_tan_48_arg0(ext_intruder_latitude));
  ext_log_49 = log(ext_log_49_arg0(ext_tan_48, ext_intruder_latitude));
  ext_tan_50 = tan(ext_tan_50_arg0(ext_ownship_latitude));
  ext_log_51 = log(ext_log_51_arg0(ext_tan_50, ext_ownship_latitude));
  ext_tan_52 = tan(ext_tan_52_arg0(ext_intruder_latitude));
  ext_log_53 = log(ext_log_53_arg0(ext_tan_52, ext_intruder_latitude));
  ext_tan_54 = tan(ext_tan_54_arg0(ext_ownship_latitude));
  ext_log_55 = log(ext_log_55_arg0(ext_tan_54, ext_ownship_latitude));
  ext_tan_56 = tan(ext_tan_56_arg0(ext_intruder_latitude));
  ext_log_57 = log(ext_log_57_arg0(ext_tan_56, ext_intruder_latitude));
  ext_sqrt_58 = sqrt(ext_sqrt_58_arg0(ext_ownship_vx, ext_intruder_vx, ext_ownship_vy, ext_intruder_vy, ext_ownship_longitude, ext_intruder_longitude, ext_log_51, ext_tan_50, ext_ownship_latitude, ext_log_53, ext_tan_52, ext_intruder_latitude, ext_log_55, ext_tan_54, ext_log_57, ext_tan_56));
  ext_tan_59 = tan(ext_tan_59_arg0(ext_ownship_latitude));
  ext_log_60 = log(ext_log_60_arg0(ext_tan_59, ext_ownship_latitude));
  ext_tan_61 = tan(ext_tan_61_arg0(ext_intruder_latitude));
  ext_log_62 = log(ext_log_62_arg0(ext_tan_61, ext_intruder_latitude));
  ext_tan_63 = tan(ext_tan_63_arg0(ext_ownship_latitude));
  ext_log_64 = log(ext_log_64_arg0(ext_tan_63, ext_ownship_latitude));
  ext_tan_65 = tan(ext_tan_65_arg0(ext_intruder_latitude));
  ext_log_66 = log(ext_log_66_arg0(ext_tan_65, ext_intruder_latitude));
  ext_tan_67 = tan(ext_tan_67_arg0(ext_ownship_latitude));
  ext_log_68 = log(ext_log_68_arg0(ext_tan_67, ext_ownship_latitude));
  ext_tan_69 = tan(ext_tan_69_arg0(ext_intruder_latitude));
  ext_log_70 = log(ext_log_70_arg0(ext_tan_69, ext_intruder_latitude));
  ext_tan_71 = tan(ext_tan_71_arg0(ext_ownship_latitude));
  ext_log_72 = log(ext_log_72_arg0(ext_tan_71, ext_ownship_latitude));
  ext_tan_73 = tan(ext_tan_73_arg0(ext_intruder_latitude));
  ext_log_74 = log(ext_log_74_arg0(ext_tan_73, ext_intruder_latitude));
  ext_tan_75 = tan(ext_tan_75_arg0(ext_ownship_latitude));
  ext_log_76 = log(ext_log_76_arg0(ext_tan_75, ext_ownship_latitude));
  ext_tan_77 = tan(ext_tan_77_arg0(ext_intruder_latitude));
  ext_log_78 = log(ext_log_78_arg0(ext_tan_77, ext_intruder_latitude));
  ext_tan_79 = tan(ext_tan_79_arg0(ext_ownship_latitude));
  ext_log_80 = log(ext_log_80_arg0(ext_tan_79, ext_ownship_latitude));
  ext_tan_81 = tan(ext_tan_81_arg0(ext_intruder_latitude));
  ext_log_82 = log(ext_log_82_arg0(ext_tan_81, ext_intruder_latitude));
  ext_sqrt_83 = sqrt(ext_sqrt_83_arg0(ext_ownship_vx, ext_intruder_vx, ext_ownship_vy, ext_intruder_vy, ext_ownship_longitude, ext_intruder_longitude, ext_log_76, ext_tan_75, ext_ownship_latitude, ext_log_78, ext_tan_77, ext_intruder_latitude, ext_log_80, ext_tan_79, ext_log_82, ext_tan_81));
  ext_tan_84 = tan(ext_tan_84_arg0(ext_ownship_latitude));
  ext_log_85 = log(ext_log_85_arg0(ext_tan_84, ext_ownship_latitude));
  ext_tan_86 = tan(ext_tan_86_arg0(ext_intruder_latitude));
  ext_log_87 = log(ext_log_87_arg0(ext_tan_86, ext_intruder_latitude));
  ext_tan_88 = tan(ext_tan_88_arg0(ext_ownship_latitude));
  ext_log_89 = log(ext_log_89_arg0(ext_tan_88, ext_ownship_latitude));
  ext_tan_90 = tan(ext_tan_90_arg0(ext_intruder_latitude));
  ext_log_91 = log(ext_log_91_arg0(ext_tan_90, ext_intruder_latitude));
  ext_sqrt_92 = sqrt(ext_sqrt_92_arg0(ext_ownship_longitude, ext_intruder_longitude, ext_log_85, ext_tan_84, ext_ownship_latitude, ext_log_87, ext_tan_86, ext_intruder_latitude, ext_log_89, ext_tan_88, ext_log_91, ext_tan_90));
  ext_tan_93 = tan(ext_tan_93_arg0(ext_ownship_latitude));
  ext_log_94 = log(ext_log_94_arg0(ext_tan_93, ext_ownship_latitude));
  ext_tan_95 = tan(ext_tan_95_arg0(ext_intruder_latitude));
  ext_log_96 = log(ext_log_96_arg0(ext_tan_95, ext_intruder_latitude));
  ext_tan_97 = tan(ext_tan_97_arg0(ext_ownship_latitude));
  ext_log_98 = log(ext_log_98_arg0(ext_tan_97, ext_ownship_latitude));
  ext_tan_99 = tan(ext_tan_99_arg0(ext_intruder_latitude));
  ext_log_100 = log(ext_log_100_arg0(ext_tan_99, ext_intruder_latitude));
  ext_tan_101 = tan(ext_tan_101_arg0(ext_ownship_latitude));
  ext_log_102 = log(ext_log_102_arg0(ext_tan_101, ext_ownship_latitude));
  ext_tan_103 = tan(ext_tan_103_arg0(ext_intruder_latitude));
  ext_log_104 = log(ext_log_104_arg0(ext_tan_103, ext_intruder_latitude));
  ext_tan_105 = tan(ext_tan_105_arg0(ext_ownship_latitude));
  ext_log_106 = log(ext_log_106_arg0(ext_tan_105, ext_ownship_latitude));
  ext_tan_107 = tan(ext_tan_107_arg0(ext_intruder_latitude));
  ext_log_108 = log(ext_log_108_arg0(ext_tan_107, ext_intruder_latitude));
  ext_tan_109 = tan(ext_tan_109_arg0(ext_ownship_latitude));
  ext_log_110 = log(ext_log_110_arg0(ext_tan_109, ext_ownship_latitude));
  ext_tan_111 = tan(ext_tan_111_arg0(ext_intruder_latitude));
  ext_log_112 = log(ext_log_112_arg0(ext_tan_111, ext_intruder_latitude));
  ext_tan_113 = tan(ext_tan_113_arg0(ext_ownship_latitude));
  ext_log_114 = log(ext_log_114_arg0(ext_tan_113, ext_ownship_latitude));
  ext_tan_115 = tan(ext_tan_115_arg0(ext_intruder_latitude));
  ext_log_116 = log(ext_log_116_arg0(ext_tan_115, ext_intruder_latitude));
  ext_sqrt_117 = sqrt(ext_sqrt_117_arg0(ext_ownship_longitude, ext_intruder_longitude, ext_ownship_vx, ext_intruder_vx, ext_ownship_vy, ext_intruder_vy, ext_log_94, ext_tan_93, ext_ownship_latitude, ext_log_96, ext_tan_95, ext_intruder_latitude, ext_log_98, ext_tan_97, ext_log_100, ext_tan_99, ext_log_102, ext_tan_101, ext_log_104, ext_tan_103, ext_log_106, ext_tan_105, ext_log_108, ext_tan_107, ext_log_110, ext_tan_109, ext_log_112, ext_tan_111, ext_log_114, ext_tan_113, ext_log_116, ext_tan_115));
  ext_tan_118 = tan(ext_tan_118_arg0(ext_ownship_latitude));
  ext_log_119 = log(ext_log_119_arg0(ext_tan_118, ext_ownship_latitude));
  ext_tan_120 = tan(ext_tan_120_arg0(ext_intruder_latitude));
  ext_log_121 = log(ext_log_121_arg0(ext_tan_120, ext_intruder_latitude));
  ext_tan_122 = tan(ext_tan_122_arg0(ext_ownship_latitude));
  ext_log_123 = log(ext_log_123_arg0(ext_tan_122, ext_ownship_latitude));
  ext_tan_124 = tan(ext_tan_124_arg0(ext_intruder_latitude));
  ext_log_125 = log(ext_log_125_arg0(ext_tan_124, ext_intruder_latitude));
  ext_tan_126 = tan(ext_tan_126_arg0(ext_ownship_latitude));
  ext_log_127 = log(ext_log_127_arg0(ext_tan_126, ext_ownship_latitude));
  ext_tan_128 = tan(ext_tan_128_arg0(ext_intruder_latitude));
  ext_log_129 = log(ext_log_129_arg0(ext_tan_128, ext_intruder_latitude));
  ext_tan_130 = tan(ext_tan_130_arg0(ext_ownship_latitude));
  ext_log_131 = log(ext_log_131_arg0(ext_tan_130, ext_ownship_latitude));
  ext_tan_132 = tan(ext_tan_132_arg0(ext_intruder_latitude));
  ext_log_133 = log(ext_log_133_arg0(ext_tan_132, ext_intruder_latitude));
  ext_tan_134 = tan(ext_tan_134_arg0(ext_ownship_latitude));
  ext_log_135 = log(ext_log_135_arg0(ext_tan_134, ext_ownship_latitude));
  ext_tan_136 = tan(ext_tan_136_arg0(ext_intruder_latitude));
  ext_log_137 = log(ext_log_137_arg0(ext_tan_136, ext_intruder_latitude));
  ext_tan_138 = tan(ext_tan_138_arg0(ext_ownship_latitude));
  ext_log_139 = log(ext_log_139_arg0(ext_tan_138, ext_ownship_latitude));
  ext_tan_140 = tan(ext_tan_140_arg0(ext_intruder_latitude));
  ext_log_141 = log(ext_log_141_arg0(ext_tan_140, ext_intruder_latitude));
  ext_tan_142 = tan(ext_tan_142_arg0(ext_ownship_latitude));
  ext_log_143 = log(ext_log_143_arg0(ext_tan_142, ext_ownship_latitude));
  ext_tan_144 = tan(ext_tan_144_arg0(ext_intruder_latitude));
  ext_log_145 = log(ext_log_145_arg0(ext_tan_144, ext_intruder_latitude));
  ext_tan_146 = tan(ext_tan_146_arg0(ext_ownship_latitude));
  ext_log_147 = log(ext_log_147_arg0(ext_tan_146, ext_ownship_latitude));
  ext_tan_148 = tan(ext_tan_148_arg0(ext_intruder_latitude));
  ext_log_149 = log(ext_log_149_arg0(ext_tan_148, ext_intruder_latitude));
  ext_tan_150 = tan(ext_tan_150_arg0(ext_ownship_latitude));
  ext_log_151 = log(ext_log_151_arg0(ext_tan_150, ext_ownship_latitude));
  ext_tan_152 = tan(ext_tan_152_arg0(ext_intruder_latitude));
  ext_log_153 = log(ext_log_153_arg0(ext_tan_152, ext_intruder_latitude));
  ext_tan_154 = tan(ext_tan_154_arg0(ext_ownship_latitude));
  ext_log_155 = log(ext_log_155_arg0(ext_tan_154, ext_ownship_latitude));
  ext_tan_156 = tan(ext_tan_156_arg0(ext_intruder_latitude));
  ext_log_157 = log(ext_log_157_arg0(ext_tan_156, ext_intruder_latitude));
  ext_sqrt_158 = sqrt(ext_sqrt_158_arg0(ext_ownship_longitude, ext_intruder_longitude, ext_log_151, ext_tan_150, ext_ownship_latitude, ext_log_153, ext_tan_152, ext_intruder_latitude, ext_log_155, ext_tan_154, ext_log_157, ext_tan_156));
  ext_tan_159 = tan(ext_tan_159_arg0(ext_ownship_latitude));
  ext_log_160 = log(ext_log_160_arg0(ext_tan_159, ext_ownship_latitude));
  ext_tan_161 = tan(ext_tan_161_arg0(ext_intruder_latitude));
  ext_log_162 = log(ext_log_162_arg0(ext_tan_161, ext_intruder_latitude));
  ext_tan_163 = tan(ext_tan_163_arg0(ext_ownship_latitude));
  ext_log_164 = log(ext_log_164_arg0(ext_tan_163, ext_ownship_latitude));
  ext_tan_165 = tan(ext_tan_165_arg0(ext_intruder_latitude));
  ext_log_166 = log(ext_log_166_arg0(ext_tan_165, ext_intruder_latitude));
  ext_tan_167 = tan(ext_tan_167_arg0(ext_ownship_latitude));
  ext_log_168 = log(ext_log_168_arg0(ext_tan_167, ext_ownship_latitude));
  ext_tan_169 = tan(ext_tan_169_arg0(ext_intruder_latitude));
  ext_log_170 = log(ext_log_170_arg0(ext_tan_169, ext_intruder_latitude));
  ext_tan_171 = tan(ext_tan_171_arg0(ext_ownship_latitude));
  ext_log_172 = log(ext_log_172_arg0(ext_tan_171, ext_ownship_latitude));
  ext_tan_173 = tan(ext_tan_173_arg0(ext_intruder_latitude));
  ext_log_174 = log(ext_log_174_arg0(ext_tan_173, ext_intruder_latitude));
  ext_tan_175 = tan(ext_tan_175_arg0(ext_ownship_latitude));
  ext_log_176 = log(ext_log_176_arg0(ext_tan_175, ext_ownship_latitude));
  ext_tan_177 = tan(ext_tan_177_arg0(ext_intruder_latitude));
  ext_log_178 = log(ext_log_178_arg0(ext_tan_177, ext_intruder_latitude));
  ext_tan_179 = tan(ext_tan_179_arg0(ext_ownship_latitude));
  ext_log_180 = log(ext_log_180_arg0(ext_tan_179, ext_ownship_latitude));
  ext_tan_181 = tan(ext_tan_181_arg0(ext_intruder_latitude));
  ext_log_182 = log(ext_log_182_arg0(ext_tan_181, ext_intruder_latitude));
  ext_sqrt_183 = sqrt(ext_sqrt_183_arg0(ext_ownship_longitude, ext_intruder_longitude, ext_ownship_vx, ext_intruder_vx, ext_ownship_vy, ext_intruder_vy, ext_log_160, ext_tan_159, ext_ownship_latitude, ext_log_162, ext_tan_161, ext_intruder_latitude, ext_log_164, ext_tan_163, ext_log_166, ext_tan_165, ext_log_168, ext_tan_167, ext_log_170, ext_tan_169, ext_log_172, ext_tan_171, ext_log_174, ext_tan_173, ext_log_176, ext_tan_175, ext_log_178, ext_tan_177, ext_log_180, ext_tan_179, ext_log_182, ext_tan_181));
  ext_tan_184 = tan(ext_tan_184_arg0(ext_ownship_latitude));
  ext_log_185 = log(ext_log_185_arg0(ext_tan_184, ext_ownship_latitude));
  ext_tan_186 = tan(ext_tan_186_arg0(ext_intruder_latitude));
  ext_log_187 = log(ext_log_187_arg0(ext_tan_186, ext_intruder_latitude));
  ext_tan_188 = tan(ext_tan_188_arg0(ext_ownship_latitude));
  ext_log_189 = log(ext_log_189_arg0(ext_tan_188, ext_ownship_latitude));
  ext_tan_190 = tan(ext_tan_190_arg0(ext_intruder_latitude));
  ext_log_191 = log(ext_log_191_arg0(ext_tan_190, ext_intruder_latitude));
  ext_tan_192 = tan(ext_tan_192_arg0(ext_ownship_latitude));
  ext_log_193 = log(ext_log_193_arg0(ext_tan_192, ext_ownship_latitude));
  ext_tan_194 = tan(ext_tan_194_arg0(ext_intruder_latitude));
  ext_log_195 = log(ext_log_195_arg0(ext_tan_194, ext_intruder_latitude));
  ext_tan_196 = tan(ext_tan_196_arg0(ext_ownship_latitude));
  ext_log_197 = log(ext_log_197_arg0(ext_tan_196, ext_ownship_latitude));
  ext_tan_198 = tan(ext_tan_198_arg0(ext_intruder_latitude));
  ext_log_199 = log(ext_log_199_arg0(ext_tan_198, ext_intruder_latitude));
  ext_sqrt_200 = sqrt(ext_sqrt_200_arg0(ext_ownship_longitude, ext_intruder_longitude, ext_log_193, ext_tan_192, ext_ownship_latitude, ext_log_195, ext_tan_194, ext_intruder_latitude, ext_log_197, ext_tan_196, ext_log_199, ext_tan_198));
  ext_tan_201 = tan(ext_tan_201_arg0(ext_ownship_latitude));
  ext_log_202 = log(ext_log_202_arg0(ext_tan_201, ext_ownship_latitude));
  ext_tan_203 = tan(ext_tan_203_arg0(ext_intruder_latitude));
  ext_log_204 = log(ext_log_204_arg0(ext_tan_203, ext_intruder_latitude));
  ext_tan_205 = tan(ext_tan_205_arg0(ext_ownship_latitude));
  ext_log_206 = log(ext_log_206_arg0(ext_tan_205, ext_ownship_latitude));
  ext_tan_207 = tan(ext_tan_207_arg0(ext_intruder_latitude));
  ext_log_208 = log(ext_log_208_arg0(ext_tan_207, ext_intruder_latitude));
  ext_tan_209 = tan(ext_tan_209_arg0(ext_ownship_latitude));
  ext_log_210 = log(ext_log_210_arg0(ext_tan_209, ext_ownship_latitude));
  ext_tan_211 = tan(ext_tan_211_arg0(ext_intruder_latitude));
  ext_log_212 = log(ext_log_212_arg0(ext_tan_211, ext_intruder_latitude));
  ext_tan_213 = tan(ext_tan_213_arg0(ext_ownship_latitude));
  ext_log_214 = log(ext_log_214_arg0(ext_tan_213, ext_ownship_latitude));
  ext_tan_215 = tan(ext_tan_215_arg0(ext_intruder_latitude));
  ext_log_216 = log(ext_log_216_arg0(ext_tan_215, ext_intruder_latitude));
  ext_tan_217 = tan(ext_tan_217_arg0(ext_ownship_latitude));
  ext_log_218 = log(ext_log_218_arg0(ext_tan_217, ext_ownship_latitude));
  ext_tan_219 = tan(ext_tan_219_arg0(ext_intruder_latitude));
  ext_log_220 = log(ext_log_220_arg0(ext_tan_219, ext_intruder_latitude));
  ext_tan_221 = tan(ext_tan_221_arg0(ext_ownship_latitude));
  ext_log_222 = log(ext_log_222_arg0(ext_tan_221, ext_ownship_latitude));
  ext_tan_223 = tan(ext_tan_223_arg0(ext_intruder_latitude));
  ext_log_224 = log(ext_log_224_arg0(ext_tan_223, ext_intruder_latitude));
  ext_sqrt_225 = sqrt(ext_sqrt_225_arg0(ext_ownship_longitude, ext_intruder_longitude, ext_ownship_vx, ext_intruder_vx, ext_ownship_vy, ext_intruder_vy, ext_log_202, ext_tan_201, ext_ownship_latitude, ext_log_204, ext_tan_203, ext_intruder_latitude, ext_log_206, ext_tan_205, ext_log_208, ext_tan_207, ext_log_210, ext_tan_209, ext_log_212, ext_tan_211, ext_log_214, ext_tan_213, ext_log_216, ext_tan_215, ext_log_218, ext_tan_217, ext_log_220, ext_tan_219, ext_log_222, ext_tan_221, ext_log_224, ext_tan_223));
  ext_tan_226 = tan(ext_tan_226_arg0(ext_ownship_latitude));
  ext_log_227 = log(ext_log_227_arg0(ext_tan_226, ext_ownship_latitude));
  ext_tan_228 = tan(ext_tan_228_arg0(ext_intruder_latitude));
  ext_log_229 = log(ext_log_229_arg0(ext_tan_228, ext_intruder_latitude));
  ext_tan_230 = tan(ext_tan_230_arg0(ext_ownship_latitude));
  ext_log_231 = log(ext_log_231_arg0(ext_tan_230, ext_ownship_latitude));
  ext_tan_232 = tan(ext_tan_232_arg0(ext_intruder_latitude));
  ext_log_233 = log(ext_log_233_arg0(ext_tan_232, ext_intruder_latitude));
  ext_tan_234 = tan(ext_tan_234_arg0(ext_ownship_latitude));
  ext_log_235 = log(ext_log_235_arg0(ext_tan_234, ext_ownship_latitude));
  ext_tan_236 = tan(ext_tan_236_arg0(ext_intruder_latitude));
  ext_log_237 = log(ext_log_237_arg0(ext_tan_236, ext_intruder_latitude));
  ext_tan_238 = tan(ext_tan_238_arg0(ext_ownship_latitude));
  ext_log_239 = log(ext_log_239_arg0(ext_tan_238, ext_ownship_latitude));
  ext_tan_240 = tan(ext_tan_240_arg0(ext_intruder_latitude));
  ext_log_241 = log(ext_log_241_arg0(ext_tan_240, ext_intruder_latitude));
  ext_tan_242 = tan(ext_tan_242_arg0(ext_ownship_latitude));
  ext_log_243 = log(ext_log_243_arg0(ext_tan_242, ext_ownship_latitude));
  ext_tan_244 = tan(ext_tan_244_arg0(ext_intruder_latitude));
  ext_log_245 = log(ext_log_245_arg0(ext_tan_244, ext_intruder_latitude));
  ext_tan_246 = tan(ext_tan_246_arg0(ext_ownship_latitude));
  ext_log_247 = log(ext_log_247_arg0(ext_tan_246, ext_ownship_latitude));
  ext_tan_248 = tan(ext_tan_248_arg0(ext_intruder_latitude));
  ext_log_249 = log(ext_log_249_arg0(ext_tan_248, ext_intruder_latitude));
  ext_tan_250 = tan(ext_tan_250_arg0(ext_ownship_latitude));
  ext_log_251 = log(ext_log_251_arg0(ext_tan_250, ext_ownship_latitude));
  ext_tan_252 = tan(ext_tan_252_arg0(ext_intruder_latitude));
  ext_log_253 = log(ext_log_253_arg0(ext_tan_252, ext_intruder_latitude));
  ext_tan_254 = tan(ext_tan_254_arg0(ext_ownship_latitude));
  ext_log_255 = log(ext_log_255_arg0(ext_tan_254, ext_ownship_latitude));
  ext_tan_256 = tan(ext_tan_256_arg0(ext_intruder_latitude));
  ext_log_257 = log(ext_log_257_arg0(ext_tan_256, ext_intruder_latitude));
}

void static fireTriggers(void) {
  if (trigger_guard_alert_WCVtau(ext_sqrt_200, ext_ownship_longitude, ext_intruder_longitude, ext_log_193, ext_tan_192, ext_ownship_latitude, ext_log_195, ext_tan_194, ext_intruder_latitude, ext_log_197, ext_tan_196, ext_log_199, ext_tan_198, ext_sqrt_225, ext_ownship_vx, ext_intruder_vx, ext_ownship_vy, ext_intruder_vy, ext_log_202, ext_tan_201, ext_log_204, ext_tan_203, ext_log_206, ext_tan_205, ext_log_208, ext_tan_207, ext_log_210, ext_tan_209, ext_log_212, ext_tan_211, ext_log_214, ext_tan_213, ext_log_216, ext_tan_215, ext_log_218, ext_tan_217, ext_log_220, ext_tan_219, ext_log_222, ext_tan_221, ext_log_224, ext_tan_223, ext_log_227, ext_tan_226, ext_log_229, ext_tan_228, ext_log_231, ext_tan_230, ext_log_233, ext_tan_232, ext_log_235, ext_tan_234, ext_log_237, ext_tan_236, ext_log_239, ext_tan_238, ext_log_241, ext_tan_240, ext_log_243, ext_tan_242, ext_log_245, ext_tan_244, ext_log_247, ext_tan_246, ext_log_249, ext_tan_248, ext_log_251, ext_tan_250, ext_log_253, ext_tan_252, ext_log_255, ext_tan_254, ext_log_257, ext_tan_256, ext_ownship_altitude_ft, ext_intruder_altitude_ft, ext_ownship_vz, ext_intruder_vz))
    alert_WCVtau();
  if (trigger_guard_alert_WCVtaumod(ext_sqrt_92, ext_ownship_longitude, ext_intruder_longitude, ext_log_85, ext_tan_84, ext_ownship_latitude, ext_log_87, ext_tan_86, ext_intruder_latitude, ext_log_89, ext_tan_88, ext_log_91, ext_tan_90, ext_sqrt_117, ext_ownship_vx, ext_intruder_vx, ext_ownship_vy, ext_intruder_vy, ext_log_94, ext_tan_93, ext_log_96, ext_tan_95, ext_log_98, ext_tan_97, ext_log_100, ext_tan_99, ext_log_102, ext_tan_101, ext_log_104, ext_tan_103, ext_log_106, ext_tan_105, ext_log_108, ext_tan_107, ext_log_110, ext_tan_109, ext_log_112, ext_tan_111, ext_log_114, ext_tan_113, ext_log_116, ext_tan_115, ext_log_119, ext_tan_118, ext_log_121, ext_tan_120, ext_log_123, ext_tan_122, ext_log_125, ext_tan_124, ext_log_127, ext_tan_126, ext_log_129, ext_tan_128, ext_log_131, ext_tan_130, ext_log_133, ext_tan_132, ext_log_135, ext_tan_134, ext_log_137, ext_tan_136, ext_log_139, ext_tan_138, ext_log_141, ext_tan_140, ext_log_143, ext_tan_142, ext_log_145, ext_tan_144, ext_log_147, ext_tan_146, ext_log_149, ext_tan_148, ext_ownship_altitude_ft, ext_intruder_altitude_ft, ext_ownship_vz, ext_intruder_vz))
    alert_WCVtaumod();
  if (trigger_guard_alert_WCVtcpa(ext_sqrt_158, ext_ownship_longitude, ext_intruder_longitude, ext_log_151, ext_tan_150, ext_ownship_latitude, ext_log_153, ext_tan_152, ext_intruder_latitude, ext_log_155, ext_tan_154, ext_log_157, ext_tan_156, ext_sqrt_183, ext_ownship_vx, ext_intruder_vx, ext_ownship_vy, ext_intruder_vy, ext_log_160, ext_tan_159, ext_log_162, ext_tan_161, ext_log_164, ext_tan_163, ext_log_166, ext_tan_165, ext_log_168, ext_tan_167, ext_log_170, ext_tan_169, ext_log_172, ext_tan_171, ext_log_174, ext_tan_173, ext_log_176, ext_tan_175, ext_log_178, ext_tan_177, ext_log_180, ext_tan_179, ext_log_182, ext_tan_181, ext_log_185, ext_tan_184, ext_log_187, ext_tan_186, ext_log_189, ext_tan_188, ext_log_191, ext_tan_190, ext_ownship_altitude_ft, ext_intruder_altitude_ft, ext_ownship_vz, ext_intruder_vz))
    alert_WCVtcpa();
  if (trigger_guard_alert_WCVtep(ext_sqrt_8, ext_ownship_longitude, ext_intruder_longitude, ext_log_1, ext_tan_0, ext_ownship_latitude, ext_log_3, ext_tan_2, ext_intruder_latitude, ext_log_5, ext_tan_4, ext_log_7, ext_tan_6, ext_sqrt_33, ext_ownship_vx, ext_intruder_vx, ext_ownship_vy, ext_intruder_vy, ext_log_10, ext_tan_9, ext_log_12, ext_tan_11, ext_log_14, ext_tan_13, ext_log_16, ext_tan_15, ext_log_18, ext_tan_17, ext_log_20, ext_tan_19, ext_log_22, ext_tan_21, ext_log_24, ext_tan_23, ext_log_26, ext_tan_25, ext_log_28, ext_tan_27, ext_log_30, ext_tan_29, ext_log_32, ext_tan_31, ext_log_35, ext_tan_34, ext_log_37, ext_tan_36, ext_log_39, ext_tan_38, ext_log_41, ext_tan_40, ext_log_43, ext_tan_42, ext_log_45, ext_tan_44, ext_log_47, ext_tan_46, ext_log_49, ext_tan_48, ext_sqrt_58, ext_log_51, ext_tan_50, ext_log_53, ext_tan_52, ext_log_55, ext_tan_54, ext_log_57, ext_tan_56, ext_log_60, ext_tan_59, ext_log_62, ext_tan_61, ext_log_64, ext_tan_63, ext_log_66, ext_tan_65, ext_log_68, ext_tan_67, ext_log_70, ext_tan_69, ext_log_72, ext_tan_71, ext_log_74, ext_tan_73, ext_sqrt_83, ext_log_76, ext_tan_75, ext_log_78, ext_tan_77, ext_log_80, ext_tan_79, ext_log_82, ext_tan_81, ext_ownship_altitude_ft, ext_intruder_altitude_ft, ext_ownship_vz, ext_intruder_vz))
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
