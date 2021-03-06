/* File: "trigger_guard_alert_3D_conflict_resolution_violation.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 006*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="op1: not",color=green4, style=filled]
0 -> 1
2 [label="op2: ||",color=green4, style=filled]
1 -> 2
3 [label="ext_ident_bool_62",color=cyan4, style=filled]
2 -> 3
97 [label="op2: &&",color=green4, style=filled]
2 -> 97
98 [label="ext_ident_bool_421",color=cyan4, style=filled]
97 -> 98
2655 [label="ext_ident_bool_431",color=cyan4, style=filled]
97 -> 2655


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (! ((((ext_ident_bool_62) || (((ext_ident_bool_421) && (ext_ident_bool_431)))))));
*/
SBool trigger_guard_alert_3D_conflict_resolution_violation(const SBool ext_ident_bool_62,
                                                           const SBool ext_ident_bool_56,
                                                           const SDouble ext_ident_double_54,
                                                           const SDouble ext_ident_double_53,
                                                           const SDouble ext_ownship_position_x,
                                                           const SDouble ext_intruder_position_x,
                                                           const SDouble ext_ownship_position_y,
                                                           const SDouble ext_intruder_position_y,
                                                           const SDouble ext_ident_double_55,
                                                           const SDouble ext_minimal_horizontal_separation,
                                                           const SBool ext_ident_bool_61,
                                                           const SDouble ext_ownship_planned_velocity_x,
                                                           const SDouble ext_intruder_velocity_x,
                                                           const SDouble ext_ownship_planned_velocity_y,
                                                           const SDouble ext_intruder_velocity_y,
                                                           const SDouble ext_direction_parameter_horizontal,
                                                           const SDouble ext_ident_double_59,
                                                           const SDouble ext_sqrt_58,
                                                           const SDouble ext_ident_double_57,
                                                           const SDouble ext_ident_double_60,
                                                           const SBool ext_ident_bool_421,
                                                           const SBool ext_ident_bool_70,
                                                           const SBool ext_ident_bool_67,
                                                           const SBool ext_ident_bool_64,
                                                           const SDouble ext_ident_double_63,
                                                           const SBool ext_ident_bool_66,
                                                           const SDouble ext_ident_double_65,
                                                           const SBool ext_ident_bool_68,
                                                           const SDouble ext_ownship_planned_velocity_z,
                                                           const SDouble ext_intruder_velocity_z,
                                                           const SBool ext_ident_bool_69,
                                                           const SDouble ext_direction_parameter_vertical,
                                                           const SDouble ext_ownship_position_z,
                                                           const SDouble ext_intruder_position_z,
                                                           const SDouble ext_minimal_vertical_separation,
                                                           const SBool ext_ident_bool_420,
                                                           const SBool ext_ident_bool_72,
                                                           const SDouble ext_ident_double_71,
                                                           const SDouble ext_ownship_velocity_x,
                                                           const SDouble ext_ownship_velocity_y,
                                                           const SBool ext_ident_bool_98,
                                                           const SDouble ext_ident_double_97,
                                                           const SDouble ext_ident_double_96,
                                                           const SDouble ext_ident_double_93,
                                                           const SDouble ext_ident_double_74,
                                                           const SDouble ext_ident_double_73,
                                                           const SDouble ext_ident_double_92,
                                                           const SDouble ext_ident_double_82,
                                                           const SBool ext_ident_bool_79,
                                                           const SDouble ext_ident_double_78,
                                                           const SDouble ext_ident_double_75,
                                                           const SDouble ext_ident_double_77,
                                                           const SDouble ext_ident_double_76,
                                                           const SDouble ext_ident_double_81,
                                                           const SDouble ext_ident_double_80,
                                                           const SDouble ext_ident_double_91,
                                                           const SDouble ext_sqrt_90,
                                                           const SDouble ext_ident_double_83,
                                                           const SDouble ext_ident_double_84,
                                                           const SDouble ext_ident_double_89,
                                                           const SDouble ext_ident_double_86,
                                                           const SDouble ext_ident_double_85,
                                                           const SDouble ext_ident_double_88,
                                                           const SDouble ext_ident_double_87,
                                                           const SDouble ext_ident_double_95,
                                                           const SDouble ext_ident_double_94,
                                                           const SBool ext_ident_bool_419,
                                                           const SBool ext_ident_bool_418,
                                                           const SBool ext_ident_bool_205,
                                                           const SBool ext_ident_bool_151,
                                                           const SDouble ext_ident_double_124,
                                                           const SDouble ext_ident_double_123,
                                                           const SDouble ext_ident_double_122,
                                                           const SDouble ext_ident_double_119,
                                                           const SDouble ext_ident_double_100,
                                                           const SDouble ext_ident_double_99,
                                                           const SDouble ext_ident_double_118,
                                                           const SDouble ext_ident_double_108,
                                                           const SBool ext_ident_bool_105,
                                                           const SDouble ext_ident_double_104,
                                                           const SDouble ext_ident_double_101,
                                                           const SDouble ext_ident_double_103,
                                                           const SDouble ext_ident_double_102,
                                                           const SDouble ext_ident_double_107,
                                                           const SDouble ext_ident_double_106,
                                                           const SDouble ext_ident_double_117,
                                                           const SDouble ext_sqrt_116,
                                                           const SDouble ext_ident_double_109,
                                                           const SDouble ext_ident_double_110,
                                                           const SDouble ext_ident_double_115,
                                                           const SDouble ext_ident_double_112,
                                                           const SDouble ext_ident_double_111,
                                                           const SDouble ext_ident_double_114,
                                                           const SDouble ext_ident_double_113,
                                                           const SDouble ext_ident_double_121,
                                                           const SDouble ext_ident_double_120,
                                                           const SDouble ext_ident_double_150,
                                                           const SDouble ext_ident_double_149,
                                                           const SDouble ext_ident_double_148,
                                                           const SDouble ext_ident_double_145,
                                                           const SDouble ext_ident_double_126,
                                                           const SDouble ext_ident_double_125,
                                                           const SDouble ext_ident_double_144,
                                                           const SDouble ext_ident_double_134,
                                                           const SBool ext_ident_bool_131,
                                                           const SDouble ext_ident_double_130,
                                                           const SDouble ext_ident_double_127,
                                                           const SDouble ext_ident_double_129,
                                                           const SDouble ext_ident_double_128,
                                                           const SDouble ext_ident_double_133,
                                                           const SDouble ext_ident_double_132,
                                                           const SDouble ext_ident_double_143,
                                                           const SDouble ext_sqrt_142,
                                                           const SDouble ext_ident_double_135,
                                                           const SDouble ext_ident_double_136,
                                                           const SDouble ext_ident_double_141,
                                                           const SDouble ext_ident_double_138,
                                                           const SDouble ext_ident_double_137,
                                                           const SDouble ext_ident_double_140,
                                                           const SDouble ext_ident_double_139,
                                                           const SDouble ext_ident_double_147,
                                                           const SDouble ext_ident_double_146,
                                                           const SBool ext_ident_bool_204,
                                                           const SDouble ext_ident_double_177,
                                                           const SDouble ext_ident_double_176,
                                                           const SDouble ext_ident_double_175,
                                                           const SDouble ext_ident_double_172,
                                                           const SDouble ext_ident_double_153,
                                                           const SDouble ext_ident_double_152,
                                                           const SDouble ext_ident_double_171,
                                                           const SDouble ext_ident_double_161,
                                                           const SBool ext_ident_bool_158,
                                                           const SDouble ext_ident_double_157,
                                                           const SDouble ext_ident_double_154,
                                                           const SDouble ext_ident_double_156,
                                                           const SDouble ext_ident_double_155,
                                                           const SDouble ext_ident_double_160,
                                                           const SDouble ext_ident_double_159,
                                                           const SDouble ext_ident_double_170,
                                                           const SDouble ext_sqrt_169,
                                                           const SDouble ext_ident_double_162,
                                                           const SDouble ext_ident_double_163,
                                                           const SDouble ext_ident_double_168,
                                                           const SDouble ext_ident_double_165,
                                                           const SDouble ext_ident_double_164,
                                                           const SDouble ext_ident_double_167,
                                                           const SDouble ext_ident_double_166,
                                                           const SDouble ext_ident_double_174,
                                                           const SDouble ext_ident_double_173,
                                                           const SDouble ext_ident_double_203,
                                                           const SDouble ext_ident_double_202,
                                                           const SDouble ext_ident_double_201,
                                                           const SDouble ext_ident_double_198,
                                                           const SDouble ext_ident_double_179,
                                                           const SDouble ext_ident_double_178,
                                                           const SDouble ext_ident_double_197,
                                                           const SDouble ext_ident_double_187,
                                                           const SBool ext_ident_bool_184,
                                                           const SDouble ext_ident_double_183,
                                                           const SDouble ext_ident_double_180,
                                                           const SDouble ext_ident_double_182,
                                                           const SDouble ext_ident_double_181,
                                                           const SDouble ext_ident_double_186,
                                                           const SDouble ext_ident_double_185,
                                                           const SDouble ext_ident_double_196,
                                                           const SDouble ext_sqrt_195,
                                                           const SDouble ext_ident_double_188,
                                                           const SDouble ext_ident_double_189,
                                                           const SDouble ext_ident_double_194,
                                                           const SDouble ext_ident_double_191,
                                                           const SDouble ext_ident_double_190,
                                                           const SDouble ext_ident_double_193,
                                                           const SDouble ext_ident_double_192,
                                                           const SDouble ext_ident_double_200,
                                                           const SDouble ext_ident_double_199,
                                                           const SBool ext_ident_bool_311,
                                                           const SDouble ext_ident_double_310,
                                                           const SDouble ext_ident_double_231,
                                                           const SDouble ext_ident_double_230,
                                                           const SDouble ext_ident_double_229,
                                                           const SDouble ext_ident_double_226,
                                                           const SDouble ext_ident_double_207,
                                                           const SDouble ext_ident_double_206,
                                                           const SDouble ext_ident_double_225,
                                                           const SDouble ext_ident_double_215,
                                                           const SBool ext_ident_bool_212,
                                                           const SDouble ext_ident_double_211,
                                                           const SDouble ext_ident_double_208,
                                                           const SDouble ext_ident_double_210,
                                                           const SDouble ext_ident_double_209,
                                                           const SDouble ext_ident_double_214,
                                                           const SDouble ext_ident_double_213,
                                                           const SDouble ext_ident_double_224,
                                                           const SDouble ext_sqrt_223,
                                                           const SDouble ext_ident_double_216,
                                                           const SDouble ext_ident_double_217,
                                                           const SDouble ext_ident_double_222,
                                                           const SDouble ext_ident_double_219,
                                                           const SDouble ext_ident_double_218,
                                                           const SDouble ext_ident_double_221,
                                                           const SDouble ext_ident_double_220,
                                                           const SDouble ext_ident_double_228,
                                                           const SDouble ext_ident_double_227,
                                                           const SDouble ext_ident_double_257,
                                                           const SDouble ext_ident_double_256,
                                                           const SDouble ext_ident_double_255,
                                                           const SDouble ext_ident_double_252,
                                                           const SDouble ext_ident_double_233,
                                                           const SDouble ext_ident_double_232,
                                                           const SDouble ext_ident_double_251,
                                                           const SDouble ext_ident_double_241,
                                                           const SBool ext_ident_bool_238,
                                                           const SDouble ext_ident_double_237,
                                                           const SDouble ext_ident_double_234,
                                                           const SDouble ext_ident_double_236,
                                                           const SDouble ext_ident_double_235,
                                                           const SDouble ext_ident_double_240,
                                                           const SDouble ext_ident_double_239,
                                                           const SDouble ext_ident_double_250,
                                                           const SDouble ext_sqrt_249,
                                                           const SDouble ext_ident_double_242,
                                                           const SDouble ext_ident_double_243,
                                                           const SDouble ext_ident_double_248,
                                                           const SDouble ext_ident_double_245,
                                                           const SDouble ext_ident_double_244,
                                                           const SDouble ext_ident_double_247,
                                                           const SDouble ext_ident_double_246,
                                                           const SDouble ext_ident_double_254,
                                                           const SDouble ext_ident_double_253,
                                                           const SDouble ext_ident_double_283,
                                                           const SDouble ext_ident_double_282,
                                                           const SDouble ext_ident_double_281,
                                                           const SDouble ext_ident_double_278,
                                                           const SDouble ext_ident_double_259,
                                                           const SDouble ext_ident_double_258,
                                                           const SDouble ext_ident_double_277,
                                                           const SDouble ext_ident_double_267,
                                                           const SBool ext_ident_bool_264,
                                                           const SDouble ext_ident_double_263,
                                                           const SDouble ext_ident_double_260,
                                                           const SDouble ext_ident_double_262,
                                                           const SDouble ext_ident_double_261,
                                                           const SDouble ext_ident_double_266,
                                                           const SDouble ext_ident_double_265,
                                                           const SDouble ext_ident_double_276,
                                                           const SDouble ext_sqrt_275,
                                                           const SDouble ext_ident_double_268,
                                                           const SDouble ext_ident_double_269,
                                                           const SDouble ext_ident_double_274,
                                                           const SDouble ext_ident_double_271,
                                                           const SDouble ext_ident_double_270,
                                                           const SDouble ext_ident_double_273,
                                                           const SDouble ext_ident_double_272,
                                                           const SDouble ext_ident_double_280,
                                                           const SDouble ext_ident_double_279,
                                                           const SDouble ext_ident_double_309,
                                                           const SDouble ext_ident_double_308,
                                                           const SDouble ext_ident_double_307,
                                                           const SDouble ext_ident_double_304,
                                                           const SDouble ext_ident_double_285,
                                                           const SDouble ext_ident_double_284,
                                                           const SDouble ext_ident_double_303,
                                                           const SDouble ext_ident_double_293,
                                                           const SBool ext_ident_bool_290,
                                                           const SDouble ext_ident_double_289,
                                                           const SDouble ext_ident_double_286,
                                                           const SDouble ext_ident_double_288,
                                                           const SDouble ext_ident_double_287,
                                                           const SDouble ext_ident_double_292,
                                                           const SDouble ext_ident_double_291,
                                                           const SDouble ext_ident_double_302,
                                                           const SDouble ext_sqrt_301,
                                                           const SDouble ext_ident_double_294,
                                                           const SDouble ext_ident_double_295,
                                                           const SDouble ext_ident_double_300,
                                                           const SDouble ext_ident_double_297,
                                                           const SDouble ext_ident_double_296,
                                                           const SDouble ext_ident_double_299,
                                                           const SDouble ext_ident_double_298,
                                                           const SDouble ext_ident_double_306,
                                                           const SDouble ext_ident_double_305,
                                                           const SBool ext_ident_bool_417,
                                                           const SDouble ext_ident_double_416,
                                                           const SDouble ext_ident_double_337,
                                                           const SDouble ext_ident_double_336,
                                                           const SDouble ext_ident_double_335,
                                                           const SDouble ext_ident_double_332,
                                                           const SDouble ext_ident_double_313,
                                                           const SDouble ext_ident_double_312,
                                                           const SDouble ext_ident_double_331,
                                                           const SDouble ext_ident_double_321,
                                                           const SBool ext_ident_bool_318,
                                                           const SDouble ext_ident_double_317,
                                                           const SDouble ext_ident_double_314,
                                                           const SDouble ext_ident_double_316,
                                                           const SDouble ext_ident_double_315,
                                                           const SDouble ext_ident_double_320,
                                                           const SDouble ext_ident_double_319,
                                                           const SDouble ext_ident_double_330,
                                                           const SDouble ext_sqrt_329,
                                                           const SDouble ext_ident_double_322,
                                                           const SDouble ext_ident_double_323,
                                                           const SDouble ext_ident_double_328,
                                                           const SDouble ext_ident_double_325,
                                                           const SDouble ext_ident_double_324,
                                                           const SDouble ext_ident_double_327,
                                                           const SDouble ext_ident_double_326,
                                                           const SDouble ext_ident_double_334,
                                                           const SDouble ext_ident_double_333,
                                                           const SDouble ext_ident_double_363,
                                                           const SDouble ext_ident_double_362,
                                                           const SDouble ext_ident_double_361,
                                                           const SDouble ext_ident_double_358,
                                                           const SDouble ext_ident_double_339,
                                                           const SDouble ext_ident_double_338,
                                                           const SDouble ext_ident_double_357,
                                                           const SDouble ext_ident_double_347,
                                                           const SBool ext_ident_bool_344,
                                                           const SDouble ext_ident_double_343,
                                                           const SDouble ext_ident_double_340,
                                                           const SDouble ext_ident_double_342,
                                                           const SDouble ext_ident_double_341,
                                                           const SDouble ext_ident_double_346,
                                                           const SDouble ext_ident_double_345,
                                                           const SDouble ext_ident_double_356,
                                                           const SDouble ext_sqrt_355,
                                                           const SDouble ext_ident_double_348,
                                                           const SDouble ext_ident_double_349,
                                                           const SDouble ext_ident_double_354,
                                                           const SDouble ext_ident_double_351,
                                                           const SDouble ext_ident_double_350,
                                                           const SDouble ext_ident_double_353,
                                                           const SDouble ext_ident_double_352,
                                                           const SDouble ext_ident_double_360,
                                                           const SDouble ext_ident_double_359,
                                                           const SDouble ext_ident_double_389,
                                                           const SDouble ext_ident_double_388,
                                                           const SDouble ext_ident_double_387,
                                                           const SDouble ext_ident_double_384,
                                                           const SDouble ext_ident_double_365,
                                                           const SDouble ext_ident_double_364,
                                                           const SDouble ext_ident_double_383,
                                                           const SDouble ext_ident_double_373,
                                                           const SBool ext_ident_bool_370,
                                                           const SDouble ext_ident_double_369,
                                                           const SDouble ext_ident_double_366,
                                                           const SDouble ext_ident_double_368,
                                                           const SDouble ext_ident_double_367,
                                                           const SDouble ext_ident_double_372,
                                                           const SDouble ext_ident_double_371,
                                                           const SDouble ext_ident_double_382,
                                                           const SDouble ext_sqrt_381,
                                                           const SDouble ext_ident_double_374,
                                                           const SDouble ext_ident_double_375,
                                                           const SDouble ext_ident_double_380,
                                                           const SDouble ext_ident_double_377,
                                                           const SDouble ext_ident_double_376,
                                                           const SDouble ext_ident_double_379,
                                                           const SDouble ext_ident_double_378,
                                                           const SDouble ext_ident_double_386,
                                                           const SDouble ext_ident_double_385,
                                                           const SDouble ext_ident_double_415,
                                                           const SDouble ext_ident_double_414,
                                                           const SDouble ext_ident_double_413,
                                                           const SDouble ext_ident_double_410,
                                                           const SDouble ext_ident_double_391,
                                                           const SDouble ext_ident_double_390,
                                                           const SDouble ext_ident_double_409,
                                                           const SDouble ext_ident_double_399,
                                                           const SBool ext_ident_bool_396,
                                                           const SDouble ext_ident_double_395,
                                                           const SDouble ext_ident_double_392,
                                                           const SDouble ext_ident_double_394,
                                                           const SDouble ext_ident_double_393,
                                                           const SDouble ext_ident_double_398,
                                                           const SDouble ext_ident_double_397,
                                                           const SDouble ext_ident_double_408,
                                                           const SDouble ext_sqrt_407,
                                                           const SDouble ext_ident_double_400,
                                                           const SDouble ext_ident_double_401,
                                                           const SDouble ext_ident_double_406,
                                                           const SDouble ext_ident_double_403,
                                                           const SDouble ext_ident_double_402,
                                                           const SDouble ext_ident_double_405,
                                                           const SDouble ext_ident_double_404,
                                                           const SDouble ext_ident_double_412,
                                                           const SDouble ext_ident_double_411,
                                                           const SBool ext_ident_bool_431,
                                                           const SBool ext_ident_bool_425,
                                                           const SDouble ext_ident_double_423,
                                                           const SDouble ext_ident_double_422,
                                                           const SDouble ext_ident_double_424,
                                                           const SBool ext_ident_bool_430,
                                                           const SDouble ext_ident_double_428,
                                                           const SDouble ext_sqrt_427,
                                                           const SDouble ext_ident_double_426,
                                                           const SDouble ext_ident_double_429)
{
  const SBool   s0 = ext_ident_bool_62;
  const SBool   s20 = ext_ident_bool_421;
  const SBool   s387 = ext_ident_bool_431;
  const SBool   s397 = s20 && s387;
  const SBool   s398 = s0 || s397;
  const SBool   s399 = !s398;

  return s399;
}
