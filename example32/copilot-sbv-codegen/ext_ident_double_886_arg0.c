/* File: "ext_ident_double_886_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "normsq2dim" (((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) * (Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2)))) + ((Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5))) * (Extf_ident_double(label "ownPositionY" (if s0 then Ext_ownship_position_y else s4)) - Extf_ident_double(label "intPositionY" (if s0 then Ext_intruder_position_y else s5)))))
*/
/*@
 assigns \nothing;
 ensures \result == ((((((((ext_ident_double_878) - (ext_ident_double_879))) * (((ext_ident_double_880) - (ext_ident_double_881))))) + (((((ext_ident_double_882) - (ext_ident_double_883))) * (((ext_ident_double_884) - (ext_ident_double_885))))))));
*/
SDouble ext_ident_double_886_arg0(const SDouble ext_ident_double_878,
                                  const SBool *queue_0, const SWord32 ptr_0,
                                  const SDouble ext_ownship_position_x, const SDouble *queue_1,
                                  const SWord32 ptr_1, const SDouble ext_ident_double_879,
                                  const SDouble ext_intruder_position_x, const SDouble *queue_2,
                                  const SWord32 ptr_2, const SDouble ext_ident_double_880,
                                  const SDouble ext_ident_double_881,
                                  const SDouble ext_ident_double_882,
                                  const SDouble ext_ownship_position_y, const SDouble *queue_4,
                                  const SWord32 ptr_4, const SDouble ext_ident_double_883,
                                  const SDouble ext_intruder_position_y, const SDouble *queue_5,
                                  const SWord32 ptr_5, const SDouble ext_ident_double_884,
                                  const SDouble ext_ident_double_885)
{
  const SDouble s0 = ext_ident_double_878;
  const SBool   s1 = queue_0[0];
  const SWord32 s2 = ptr_0;
  const SDouble s3 = ext_ownship_position_x;
  const SDouble s4 = queue_1[0];
  const SWord32 s5 = ptr_1;
  const SDouble s6 = ext_ident_double_879;
  const SDouble s7 = ext_intruder_position_x;
  const SDouble s8 = queue_2[0];
  const SWord32 s9 = ptr_2;
  const SDouble s10 = ext_ident_double_880;
  const SDouble s11 = ext_ident_double_881;
  const SDouble s12 = ext_ident_double_882;
  const SDouble s13 = ext_ownship_position_y;
  const SDouble s14 = queue_4[0];
  const SWord32 s15 = ptr_4;
  const SDouble s16 = ext_ident_double_883;
  const SDouble s17 = ext_intruder_position_y;
  const SDouble s18 = queue_5[0];
  const SWord32 s19 = ptr_5;
  const SDouble s20 = ext_ident_double_884;
  const SDouble s21 = ext_ident_double_885;
  const SDouble s22 = s0 - s6;
  const SDouble s23 = s10 - s11;
  const SDouble s24 = s22 * s23;
  const SDouble s25 = s12 - s16;
  const SDouble s26 = s20 - s21;
  const SDouble s27 = s25 * s26;
  const SDouble s28 = s24 + s27;
  const SDouble s29 = s28 /* normsq2dim */;

  return s29;
}
