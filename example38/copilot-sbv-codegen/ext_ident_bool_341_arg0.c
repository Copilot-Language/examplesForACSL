/* File: "ext_ident_bool_341_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="label: wellClearViolation",color=plum, style=filled]
0 -> 1
2 [label="op2: &&",color=green4, style=filled]
1 -> 2
3 [label="ext_ident_bool_316",color=cyan4, style=filled]
2 -> 3
2030 [label="ext_ident_bool_340",color=cyan4, style=filled]
2 -> 2030


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ident_bool_316) && (ext_ident_bool_340))));
*/
SBool ext_ident_bool_341_arg0(const SBool ext_ident_bool_316,
                              const SDouble ext_ident_double_11, const SDouble ext_sqrt_10,
                              const SDouble ext_ident_double_9, const SDouble ext_ident_double_8,
                              const SDouble ext_ident_double_0,
                              const SDouble ext_ownship_x_position_ft,
                              const SDouble ext_ident_double_1,
                              const SDouble ext_intruder_x_position_ft,
                              const SDouble ext_ident_double_2, const SDouble ext_ident_double_3,
                              const SDouble ext_ident_double_4, const SDouble ext_ident_double_5,
                              const SDouble ext_intruder_y_position_ft,
                              const SDouble ext_ident_double_6, const SDouble ext_ident_double_7,
                              const SDouble ext_ident_double_12,
                              const SDouble ext_ident_double_128, const SDouble ext_sqrt_127,
                              const SDouble ext_ident_double_126,
                              const SDouble ext_ident_double_125,
                              const SDouble ext_ident_double_13,
                              const SDouble ext_ident_double_14,
                              const SDouble ext_ident_double_38,
                              const SDouble ext_ident_double_15, const SDouble ext_ownship_vx,
                              const SDouble ext_ident_double_16, const SDouble ext_intruder_vx,
                              const SDouble ext_ident_double_17, const SDouble ext_ownship_vy,
                              const SDouble ext_ident_double_18, const SDouble ext_intruder_vy,
                              const SDouble ext_ident_double_27,
                              const SDouble ext_ident_double_19,
                              const SDouble ext_ident_double_20,
                              const SDouble ext_ident_double_21,
                              const SDouble ext_ident_double_22,
                              const SDouble ext_ident_double_23,
                              const SDouble ext_ident_double_24,
                              const SDouble ext_ident_double_25,
                              const SDouble ext_ident_double_26,
                              const SDouble ext_ident_double_37,
                              const SDouble ext_ident_double_36,
                              const SDouble ext_ident_double_28,
                              const SDouble ext_ident_double_29,
                              const SDouble ext_ident_double_30,
                              const SDouble ext_ident_double_31,
                              const SDouble ext_ident_double_32,
                              const SDouble ext_ident_double_33,
                              const SDouble ext_ident_double_34,
                              const SDouble ext_ident_double_35,
                              const SDouble ext_ident_double_39,
                              const SDouble ext_ident_double_40,
                              const SDouble ext_ident_double_41,
                              const SDouble ext_ident_double_42,
                              const SDouble ext_ident_double_66,
                              const SDouble ext_ident_double_43,
                              const SDouble ext_ident_double_44,
                              const SDouble ext_ident_double_45,
                              const SDouble ext_ident_double_46,
                              const SDouble ext_ident_double_55,
                              const SDouble ext_ident_double_47,
                              const SDouble ext_ident_double_48,
                              const SDouble ext_ident_double_49,
                              const SDouble ext_ident_double_50,
                              const SDouble ext_ident_double_51,
                              const SDouble ext_ident_double_52,
                              const SDouble ext_ident_double_53,
                              const SDouble ext_ident_double_54,
                              const SDouble ext_ident_double_65,
                              const SDouble ext_ident_double_64,
                              const SDouble ext_ident_double_56,
                              const SDouble ext_ident_double_57,
                              const SDouble ext_ident_double_58,
                              const SDouble ext_ident_double_59,
                              const SDouble ext_ident_double_60,
                              const SDouble ext_ident_double_61,
                              const SDouble ext_ident_double_62,
                              const SDouble ext_ident_double_63,
                              const SDouble ext_ident_double_67,
                              const SDouble ext_ident_double_68,
                              const SDouble ext_ident_double_69,
                              const SDouble ext_ident_double_70,
                              const SDouble ext_ident_double_94,
                              const SDouble ext_ident_double_71,
                              const SDouble ext_ident_double_72,
                              const SDouble ext_ident_double_73,
                              const SDouble ext_ident_double_74,
                              const SDouble ext_ident_double_83,
                              const SDouble ext_ident_double_75,
                              const SDouble ext_ident_double_76,
                              const SDouble ext_ident_double_77,
                              const SDouble ext_ident_double_78,
                              const SDouble ext_ident_double_79,
                              const SDouble ext_ident_double_80,
                              const SDouble ext_ident_double_81,
                              const SDouble ext_ident_double_82,
                              const SDouble ext_ident_double_93,
                              const SDouble ext_ident_double_92,
                              const SDouble ext_ident_double_84,
                              const SDouble ext_ident_double_85,
                              const SDouble ext_ident_double_86,
                              const SDouble ext_ident_double_87,
                              const SDouble ext_ident_double_88,
                              const SDouble ext_ident_double_89,
                              const SDouble ext_ident_double_90,
                              const SDouble ext_ident_double_91,
                              const SDouble ext_ident_double_95,
                              const SDouble ext_ident_double_96,
                              const SDouble ext_ident_double_97,
                              const SDouble ext_ident_double_98,
                              const SDouble ext_ident_double_122,
                              const SDouble ext_ident_double_99,
                              const SDouble ext_ident_double_100,
                              const SDouble ext_ident_double_101,
                              const SDouble ext_ident_double_102,
                              const SDouble ext_ident_double_111,
                              const SDouble ext_ident_double_103,
                              const SDouble ext_ident_double_104,
                              const SDouble ext_ident_double_105,
                              const SDouble ext_ident_double_106,
                              const SDouble ext_ident_double_107,
                              const SDouble ext_ident_double_108,
                              const SDouble ext_ident_double_109,
                              const SDouble ext_ident_double_110,
                              const SDouble ext_ident_double_121,
                              const SDouble ext_ident_double_120,
                              const SDouble ext_ident_double_112,
                              const SDouble ext_ident_double_113,
                              const SDouble ext_ident_double_114,
                              const SDouble ext_ident_double_115,
                              const SDouble ext_ident_double_116,
                              const SDouble ext_ident_double_117,
                              const SDouble ext_ident_double_118,
                              const SDouble ext_ident_double_119,
                              const SDouble ext_ident_double_123,
                              const SDouble ext_ident_double_124,
                              const SDouble ext_ident_double_129,
                              const SDouble ext_ident_double_222,
                              const SDouble ext_ident_double_138,
                              const SDouble ext_ident_double_130,
                              const SDouble ext_ident_double_131,
                              const SDouble ext_ident_double_132,
                              const SDouble ext_ident_double_133,
                              const SDouble ext_ident_double_134,
                              const SDouble ext_ident_double_135,
                              const SDouble ext_ident_double_136,
                              const SDouble ext_ident_double_137,
                              const SDouble ext_ident_double_169,
                              const SDouble ext_ident_double_139,
                              const SDouble ext_ident_double_140,
                              const SDouble ext_ident_double_150,
                              const SDouble ext_ident_double_149,
                              const SDouble ext_ident_double_141,
                              const SDouble ext_ident_double_142,
                              const SDouble ext_ident_double_143,
                              const SDouble ext_ident_double_144,
                              const SDouble ext_ident_double_145,
                              const SDouble ext_ident_double_146,
                              const SDouble ext_ident_double_147,
                              const SDouble ext_ident_double_148,
                              const SDouble ext_ident_double_159,
                              const SDouble ext_ident_double_151,
                              const SDouble ext_ident_double_152,
                              const SDouble ext_ident_double_153,
                              const SDouble ext_ident_double_154,
                              const SDouble ext_ident_double_155,
                              const SDouble ext_ident_double_156,
                              const SDouble ext_ident_double_157,
                              const SDouble ext_ident_double_158,
                              const SDouble ext_ident_double_168,
                              const SDouble ext_ident_double_160,
                              const SDouble ext_ident_double_161,
                              const SDouble ext_ident_double_162,
                              const SDouble ext_ident_double_163,
                              const SDouble ext_ident_double_164,
                              const SDouble ext_ident_double_165,
                              const SDouble ext_ident_double_166,
                              const SDouble ext_ident_double_167,
                              const SDouble ext_ident_double_221,
                              const SDouble ext_ident_double_178,
                              const SDouble ext_ident_double_170,
                              const SDouble ext_ident_double_171,
                              const SDouble ext_ident_double_172,
                              const SDouble ext_ident_double_173,
                              const SDouble ext_ident_double_174,
                              const SDouble ext_ident_double_175,
                              const SDouble ext_ident_double_176,
                              const SDouble ext_ident_double_177, const SDouble ext_sqrt_210,
                              const SDouble ext_ident_double_209,
                              const SDouble ext_ident_double_179,
                              const SDouble ext_ident_double_180,
                              const SDouble ext_ident_double_190,
                              const SDouble ext_ident_double_189,
                              const SDouble ext_ident_double_181,
                              const SDouble ext_ident_double_182,
                              const SDouble ext_ident_double_183,
                              const SDouble ext_ident_double_184,
                              const SDouble ext_ident_double_185,
                              const SDouble ext_ident_double_186,
                              const SDouble ext_ident_double_187,
                              const SDouble ext_ident_double_188,
                              const SDouble ext_ident_double_199,
                              const SDouble ext_ident_double_191,
                              const SDouble ext_ident_double_192,
                              const SDouble ext_ident_double_193,
                              const SDouble ext_ident_double_194,
                              const SDouble ext_ident_double_195,
                              const SDouble ext_ident_double_196,
                              const SDouble ext_ident_double_197,
                              const SDouble ext_ident_double_198,
                              const SDouble ext_ident_double_208,
                              const SDouble ext_ident_double_200,
                              const SDouble ext_ident_double_201,
                              const SDouble ext_ident_double_202,
                              const SDouble ext_ident_double_203,
                              const SDouble ext_ident_double_204,
                              const SDouble ext_ident_double_205,
                              const SDouble ext_ident_double_206,
                              const SDouble ext_ident_double_207,
                              const SDouble ext_ident_double_220,
                              const SDouble ext_ident_double_219,
                              const SDouble ext_ident_double_211,
                              const SDouble ext_ident_double_212,
                              const SDouble ext_ident_double_213,
                              const SDouble ext_ident_double_214,
                              const SDouble ext_ident_double_215,
                              const SDouble ext_ident_double_216,
                              const SDouble ext_ident_double_217,
                              const SDouble ext_ident_double_218,
                              const SDouble ext_ident_double_315,
                              const SDouble ext_ident_double_231,
                              const SDouble ext_ident_double_223,
                              const SDouble ext_ident_double_224,
                              const SDouble ext_ident_double_225,
                              const SDouble ext_ident_double_226,
                              const SDouble ext_ident_double_227,
                              const SDouble ext_ident_double_228,
                              const SDouble ext_ident_double_229,
                              const SDouble ext_ident_double_230,
                              const SDouble ext_ident_double_262,
                              const SDouble ext_ident_double_232,
                              const SDouble ext_ident_double_233,
                              const SDouble ext_ident_double_243,
                              const SDouble ext_ident_double_242,
                              const SDouble ext_ident_double_234,
                              const SDouble ext_ident_double_235,
                              const SDouble ext_ident_double_236,
                              const SDouble ext_ident_double_237,
                              const SDouble ext_ident_double_238,
                              const SDouble ext_ident_double_239,
                              const SDouble ext_ident_double_240,
                              const SDouble ext_ident_double_241,
                              const SDouble ext_ident_double_252,
                              const SDouble ext_ident_double_244,
                              const SDouble ext_ident_double_245,
                              const SDouble ext_ident_double_246,
                              const SDouble ext_ident_double_247,
                              const SDouble ext_ident_double_248,
                              const SDouble ext_ident_double_249,
                              const SDouble ext_ident_double_250,
                              const SDouble ext_ident_double_251,
                              const SDouble ext_ident_double_261,
                              const SDouble ext_ident_double_253,
                              const SDouble ext_ident_double_254,
                              const SDouble ext_ident_double_255,
                              const SDouble ext_ident_double_256,
                              const SDouble ext_ident_double_257,
                              const SDouble ext_ident_double_258,
                              const SDouble ext_ident_double_259,
                              const SDouble ext_ident_double_260,
                              const SDouble ext_ident_double_314,
                              const SDouble ext_ident_double_271,
                              const SDouble ext_ident_double_263,
                              const SDouble ext_ident_double_264,
                              const SDouble ext_ident_double_265,
                              const SDouble ext_ident_double_266,
                              const SDouble ext_ident_double_267,
                              const SDouble ext_ident_double_268,
                              const SDouble ext_ident_double_269,
                              const SDouble ext_ident_double_270, const SDouble ext_sqrt_303,
                              const SDouble ext_ident_double_302,
                              const SDouble ext_ident_double_272,
                              const SDouble ext_ident_double_273,
                              const SDouble ext_ident_double_283,
                              const SDouble ext_ident_double_282,
                              const SDouble ext_ident_double_274,
                              const SDouble ext_ident_double_275,
                              const SDouble ext_ident_double_276,
                              const SDouble ext_ident_double_277,
                              const SDouble ext_ident_double_278,
                              const SDouble ext_ident_double_279,
                              const SDouble ext_ident_double_280,
                              const SDouble ext_ident_double_281,
                              const SDouble ext_ident_double_292,
                              const SDouble ext_ident_double_284,
                              const SDouble ext_ident_double_285,
                              const SDouble ext_ident_double_286,
                              const SDouble ext_ident_double_287,
                              const SDouble ext_ident_double_288,
                              const SDouble ext_ident_double_289,
                              const SDouble ext_ident_double_290,
                              const SDouble ext_ident_double_291,
                              const SDouble ext_ident_double_301,
                              const SDouble ext_ident_double_293,
                              const SDouble ext_ident_double_294,
                              const SDouble ext_ident_double_295,
                              const SDouble ext_ident_double_296,
                              const SDouble ext_ident_double_297,
                              const SDouble ext_ident_double_298,
                              const SDouble ext_ident_double_299,
                              const SDouble ext_ident_double_300,
                              const SDouble ext_ident_double_313,
                              const SDouble ext_ident_double_312,
                              const SDouble ext_ident_double_304,
                              const SDouble ext_ident_double_305,
                              const SDouble ext_ident_double_306,
                              const SDouble ext_ident_double_307,
                              const SDouble ext_ident_double_308,
                              const SDouble ext_ident_double_309,
                              const SDouble ext_ident_double_310,
                              const SDouble ext_ident_double_311, const SBool ext_ident_bool_340,
                              const SDouble ext_ident_double_317,
                              const SDouble ext_ownship_z_position_ft,
                              const SDouble ext_ident_double_318,
                              const SDouble ext_intruder_z_position_ft,
                              const SDouble ext_ident_double_321,
                              const SDouble ext_ident_double_319,
                              const SDouble ext_ident_double_320,
                              const SDouble ext_ident_double_330,
                              const SDouble ext_ident_double_322,
                              const SDouble ext_ident_double_323,
                              const SDouble ext_ident_double_324, const SDouble ext_ownship_vz,
                              const SDouble ext_ident_double_325, const SDouble ext_intruder_vz,
                              const SDouble ext_ident_double_326,
                              const SDouble ext_ident_double_327,
                              const SDouble ext_ident_double_328,
                              const SDouble ext_ident_double_329,
                              const SDouble ext_ident_double_339,
                              const SDouble ext_ident_double_331,
                              const SDouble ext_ident_double_332,
                              const SDouble ext_ident_double_333,
                              const SDouble ext_ident_double_334,
                              const SDouble ext_ident_double_335,
                              const SDouble ext_ident_double_336,
                              const SDouble ext_ident_double_337,
                              const SDouble ext_ident_double_338)
{
  const SBool   s0 = ext_ident_bool_316;
  const SBool   s324 = ext_ident_bool_340;
  const SBool   s352 = s0 && s324;
  const SBool   s353 = s352 /* wellClearViolation */;

  return s353;
}
