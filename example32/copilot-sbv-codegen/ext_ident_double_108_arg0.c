/* File: "ext_ident_double_108_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "break_symetry_part3" (if Extf_ident_bool(label "break_symetry_part3.1" (Extf_ident_bool(label "break_symetry_part3.1.1" ((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) < 0.0)) || Extf_ident_bool(label "break_symetry_part3.1.2" ((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) > 0.0)))) then Extf_ident_double(label "break_symetry_part3.2" signum (Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2)))) else Extf_ident_double(label "break_symetry_part3.3" (if Extf_ident_bool(label "break_symetry_part3.3.1" (Extf_ident_bool(label "break_symetry_part3.3.1.1" ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) <= 0.0)) && Extf_ident_bool(label "break_symetry_part3.3.1.2" ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) >= 0.0)))) then 1.0 else Extf_ident_double(label "break_symetry_part3.3.2" signum (Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5)))))))
*/
/*@
 assigns \nothing;
 ensures \result == ((( (ext_ident_bool_93) ? (ext_ident_double_96) : (ext_ident_double_107))));
*/
SDouble ext_ident_double_108_arg0(const SBool ext_ident_bool_93,
                                  const SBool ext_ident_bool_89, const SDouble ext_ident_double_87,
                                  const SBool *queue_0, const SWord32 ptr_0,
                                  const SDouble ext_ownship_position_x, const SDouble *queue_1,
                                  const SWord32 ptr_1, const SDouble ext_ident_double_88,
                                  const SDouble ext_intruder_position_x, const SDouble *queue_2,
                                  const SWord32 ptr_2, const SBool ext_ident_bool_92,
                                  const SDouble ext_ident_double_90,
                                  const SDouble ext_ident_double_91,
                                  const SDouble ext_ident_double_96,
                                  const SDouble ext_ident_double_94,
                                  const SDouble ext_ident_double_95,
                                  const SDouble ext_ident_double_107,
                                  const SBool ext_ident_bool_103, const SBool ext_ident_bool_99,
                                  const SDouble ext_ident_double_97,
                                  const SDouble ext_ownship_position_y, const SDouble *queue_4,
                                  const SWord32 ptr_4, const SDouble ext_ident_double_98,
                                  const SDouble ext_intruder_position_y, const SDouble *queue_5,
                                  const SWord32 ptr_5, const SBool ext_ident_bool_102,
                                  const SDouble ext_ident_double_100,
                                  const SDouble ext_ident_double_101,
                                  const SDouble ext_ident_double_106,
                                  const SDouble ext_ident_double_104,
                                  const SDouble ext_ident_double_105)
{
  const SBool   s0 = ext_ident_bool_93;
  const SBool   s1 = ext_ident_bool_89;
  const SDouble s2 = ext_ident_double_87;
  const SBool   s3 = queue_0[0];
  const SWord32 s4 = ptr_0;
  const SDouble s5 = ext_ownship_position_x;
  const SDouble s6 = queue_1[0];
  const SWord32 s7 = ptr_1;
  const SDouble s8 = ext_ident_double_88;
  const SDouble s9 = ext_intruder_position_x;
  const SDouble s10 = queue_2[0];
  const SWord32 s11 = ptr_2;
  const SBool   s12 = ext_ident_bool_92;
  const SDouble s13 = ext_ident_double_90;
  const SDouble s14 = ext_ident_double_91;
  const SDouble s15 = ext_ident_double_96;
  const SDouble s16 = ext_ident_double_94;
  const SDouble s17 = ext_ident_double_95;
  const SDouble s18 = ext_ident_double_107;
  const SBool   s19 = ext_ident_bool_103;
  const SBool   s20 = ext_ident_bool_99;
  const SDouble s21 = ext_ident_double_97;
  const SDouble s22 = ext_ownship_position_y;
  const SDouble s23 = queue_4[0];
  const SWord32 s24 = ptr_4;
  const SDouble s25 = ext_ident_double_98;
  const SDouble s26 = ext_intruder_position_y;
  const SDouble s27 = queue_5[0];
  const SWord32 s28 = ptr_5;
  const SBool   s29 = ext_ident_bool_102;
  const SDouble s30 = ext_ident_double_100;
  const SDouble s31 = ext_ident_double_101;
  const SDouble s32 = ext_ident_double_106;
  const SDouble s33 = ext_ident_double_104;
  const SDouble s34 = ext_ident_double_105;
  const SDouble s35 = s0 ? s15 : s18;
  const SDouble s36 = s35 /* break_symetry_part3 */;

  return s36;
}
