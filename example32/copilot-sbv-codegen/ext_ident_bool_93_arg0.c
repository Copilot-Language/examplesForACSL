/* File: "ext_ident_bool_93_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "break_symetry_part3.1" (Extf_ident_bool(label "break_symetry_part3.1.1" ((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) < 0.0)) || Extf_ident_bool(label "break_symetry_part3.1.2" ((Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2))) > 0.0)))
*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ident_bool_89) || (ext_ident_bool_92))));
*/
SBool ext_ident_bool_93_arg0(const SBool ext_ident_bool_89,
                             const SDouble ext_ident_double_87, const SBool *queue_0,
                             const SWord32 ptr_0, const SDouble ext_ownship_position_x,
                             const SDouble *queue_1, const SWord32 ptr_1,
                             const SDouble ext_ident_double_88,
                             const SDouble ext_intruder_position_x, const SDouble *queue_2,
                             const SWord32 ptr_2, const SBool ext_ident_bool_92,
                             const SDouble ext_ident_double_90,
                             const SDouble ext_ident_double_91)
{
  const SBool   s0 = ext_ident_bool_89;
  const SDouble s1 = ext_ident_double_87;
  const SBool   s2 = queue_0[0];
  const SWord32 s3 = ptr_0;
  const SDouble s4 = ext_ownship_position_x;
  const SDouble s5 = queue_1[0];
  const SWord32 s6 = ptr_1;
  const SDouble s7 = ext_ident_double_88;
  const SDouble s8 = ext_intruder_position_x;
  const SDouble s9 = queue_2[0];
  const SWord32 s10 = ptr_2;
  const SBool   s11 = ext_ident_bool_92;
  const SDouble s12 = ext_ident_double_90;
  const SDouble s13 = ext_ident_double_91;
  const SBool   s14 = s0 || s11;
  const SBool   s15 = s14 /* break_symetry_part3.1 */;

  return s15;
}
