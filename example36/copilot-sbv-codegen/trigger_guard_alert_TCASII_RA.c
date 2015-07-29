/* File: "trigger_guard_alert_TCASII_RA.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 006*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="ext_ident_bool_149",color=cyan4, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (ext_ident_bool_149);
*/
SBool trigger_guard_alert_TCASII_RA(const SBool ext_ident_bool_149,
                                    const SBool ext_ident_bool_70, const SDouble ext_ident_double_1,
                                    const SDouble ext_ident_double_0,
                                    const SDouble ext_ownship_velocity_x,
                                    const SDouble ext_intruder_velocity_x,
                                    const SDouble ext_ownship_velocity_y,
                                    const SDouble ext_intruder_velocity_y,
                                    const SDouble ext_ident_double_3,
                                    const SDouble ext_ident_double_2,
                                    const SDouble ext_ownship_position_x,
                                    const SDouble ext_intruder_position_x,
                                    const SDouble ext_ownship_position_y,
                                    const SDouble ext_intruder_position_y,
                                    const SDouble ext_ident_double_20,
                                    const SDouble ext_ident_double_11,
                                    const SWord64 ext_ident_word64_4,
                                    const SDouble ext_ownship_position_z,
                                    const SWord64 ext_ident_word64_5,
                                    const SWord64 ext_ident_word64_6,
                                    const SWord64 ext_ident_word64_7,
                                    const SWord64 ext_ident_word64_8,
                                    const SWord64 ext_ident_word64_9,
                                    const SWord64 ext_ident_word64_10,
                                    const SDouble ext_ident_double_19,
                                    const SWord64 ext_ident_word64_12,
                                    const SWord64 ext_ident_word64_13,
                                    const SWord64 ext_ident_word64_14,
                                    const SWord64 ext_ident_word64_15,
                                    const SWord64 ext_ident_word64_16,
                                    const SWord64 ext_ident_word64_17,
                                    const SWord64 ext_ident_word64_18,
                                    const SDouble ext_ident_double_22,
                                    const SDouble ext_ident_double_21,
                                    const SDouble ext_ident_double_43,
                                    const SDouble ext_ident_double_30,
                                    const SWord64 ext_ident_word64_23,
                                    const SWord64 ext_ident_word64_24,
                                    const SWord64 ext_ident_word64_25,
                                    const SWord64 ext_ident_word64_26,
                                    const SWord64 ext_ident_word64_27,
                                    const SWord64 ext_ident_word64_28,
                                    const SWord64 ext_ident_word64_29,
                                    const SDouble ext_ident_double_38,
                                    const SWord64 ext_ident_word64_31,
                                    const SWord64 ext_ident_word64_32,
                                    const SWord64 ext_ident_word64_33,
                                    const SWord64 ext_ident_word64_34,
                                    const SWord64 ext_ident_word64_35,
                                    const SWord64 ext_ident_word64_36,
                                    const SWord64 ext_ident_word64_37,
                                    const SDouble ext_ident_double_40,
                                    const SDouble ext_ident_double_39,
                                    const SDouble ext_ident_double_41,
                                    const SDouble ext_ident_double_42,
                                    const SDouble ext_ident_double_69,
                                    const SDouble ext_ident_double_44, const SDouble ext_sqrt_66,
                                    const SDouble ext_ident_double_65,
                                    const SDouble ext_ident_double_52,
                                    const SWord64 ext_ident_word64_45,
                                    const SWord64 ext_ident_word64_46,
                                    const SWord64 ext_ident_word64_47,
                                    const SWord64 ext_ident_word64_48,
                                    const SWord64 ext_ident_word64_49,
                                    const SWord64 ext_ident_word64_50,
                                    const SWord64 ext_ident_word64_51,
                                    const SDouble ext_ident_double_60,
                                    const SWord64 ext_ident_word64_53,
                                    const SWord64 ext_ident_word64_54,
                                    const SWord64 ext_ident_word64_55,
                                    const SWord64 ext_ident_word64_56,
                                    const SWord64 ext_ident_word64_57,
                                    const SWord64 ext_ident_word64_58,
                                    const SWord64 ext_ident_word64_59,
                                    const SDouble ext_ident_double_62,
                                    const SDouble ext_ident_double_61,
                                    const SDouble ext_ident_double_63,
                                    const SDouble ext_ident_double_64,
                                    const SDouble ext_ident_double_68,
                                    const SDouble ext_ident_double_67,
                                    const SBool ext_ident_bool_127,
                                    const SDouble ext_ident_double_74, const SDouble ext_sqrt_73,
                                    const SDouble ext_ident_double_72,
                                    const SDouble ext_ident_double_71,
                                    const SDouble ext_ident_double_82,
                                    const SWord64 ext_ident_word64_75,
                                    const SWord64 ext_ident_word64_76,
                                    const SWord64 ext_ident_word64_77,
                                    const SWord64 ext_ident_word64_78,
                                    const SWord64 ext_ident_word64_79,
                                    const SWord64 ext_ident_word64_80,
                                    const SWord64 ext_ident_word64_81,
                                    const SDouble ext_ident_double_83,
                                    const SDouble ext_ident_double_87, const SDouble ext_sqrt_86,
                                    const SDouble ext_ident_double_85,
                                    const SDouble ext_ident_double_84,
                                    const SDouble ext_ident_double_95,
                                    const SWord64 ext_ident_word64_88,
                                    const SWord64 ext_ident_word64_89,
                                    const SWord64 ext_ident_word64_90,
                                    const SWord64 ext_ident_word64_91,
                                    const SWord64 ext_ident_word64_92,
                                    const SWord64 ext_ident_word64_93,
                                    const SWord64 ext_ident_word64_94,
                                    const SDouble ext_ident_double_117,
                                    const SDouble ext_ident_double_96,
                                    const SDouble ext_ident_double_113,
                                    const SDouble ext_ident_double_104,
                                    const SWord64 ext_ident_word64_97,
                                    const SWord64 ext_ident_word64_98,
                                    const SWord64 ext_ident_word64_99,
                                    const SWord64 ext_ident_word64_100,
                                    const SWord64 ext_ident_word64_101,
                                    const SWord64 ext_ident_word64_102,
                                    const SWord64 ext_ident_word64_103,
                                    const SDouble ext_ident_double_112,
                                    const SWord64 ext_ident_word64_105,
                                    const SWord64 ext_ident_word64_106,
                                    const SWord64 ext_ident_word64_107,
                                    const SWord64 ext_ident_word64_108,
                                    const SWord64 ext_ident_word64_109,
                                    const SWord64 ext_ident_word64_110,
                                    const SWord64 ext_ident_word64_111,
                                    const SDouble ext_ident_double_115,
                                    const SDouble ext_ident_double_114,
                                    const SDouble ext_ident_double_116,
                                    const SDouble ext_ident_double_125,
                                    const SWord64 ext_ident_word64_118,
                                    const SWord64 ext_ident_word64_119,
                                    const SWord64 ext_ident_word64_120,
                                    const SWord64 ext_ident_word64_121,
                                    const SWord64 ext_ident_word64_122,
                                    const SWord64 ext_ident_word64_123,
                                    const SWord64 ext_ident_word64_124,
                                    const SDouble ext_ident_double_126,
                                    const SBool ext_ident_bool_148,
                                    const SDouble ext_ident_double_137,
                                    const SDouble ext_intruder_position_z,
                                    const SDouble ext_ident_double_128,
                                    const SDouble ext_ident_double_136,
                                    const SWord64 ext_ident_word64_129,
                                    const SWord64 ext_ident_word64_130,
                                    const SWord64 ext_ident_word64_131,
                                    const SWord64 ext_ident_word64_132,
                                    const SWord64 ext_ident_word64_133,
                                    const SWord64 ext_ident_word64_134,
                                    const SWord64 ext_ident_word64_135,
                                    const SDouble ext_ownship_velocity_z,
                                    const SDouble ext_intruder_velocity_z,
                                    const SDouble ext_ident_double_147,
                                    const SDouble ext_ident_double_138,
                                    const SDouble ext_ident_double_146,
                                    const SWord64 ext_ident_word64_139,
                                    const SWord64 ext_ident_word64_140,
                                    const SWord64 ext_ident_word64_141,
                                    const SWord64 ext_ident_word64_142,
                                    const SWord64 ext_ident_word64_143,
                                    const SWord64 ext_ident_word64_144,
                                    const SWord64 ext_ident_word64_145)
{
  const SBool   s0 = ext_ident_bool_149;
  return s0;
}
