/* File: "ext_ident_double_96_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "break_symetry_part3.2" signum (Extf_ident_double(label "ownPositionX" (if s0 then Ext_ownship_position_x else s1)) - Extf_ident_double(label "intPositionX" (if s0 then Ext_intruder_position_x else s2)))
*/
/*@
 assigns \nothing;
 ensures \result == ((((((ext_ident_double_94) - (ext_ident_double_95))) > 0)? 1 : ((((ext_ident_double_94) - (ext_ident_double_95))) < 0 ? -1 : 0)));
*/
SDouble ext_ident_double_96_arg0(const SDouble ext_ident_double_94,
                                 const SBool *queue_0, const SWord32 ptr_0,
                                 const SDouble ext_ownship_position_x, const SDouble *queue_1,
                                 const SWord32 ptr_1, const SDouble ext_ident_double_95,
                                 const SDouble ext_intruder_position_x, const SDouble *queue_2,
                                 const SWord32 ptr_2)
{
  const SDouble s0 = ext_ident_double_94;
  const SBool   s1 = queue_0[0];
  const SWord32 s2 = ptr_0;
  const SDouble s3 = ext_ownship_position_x;
  const SDouble s4 = queue_1[0];
  const SWord32 s5 = ptr_1;
  const SDouble s6 = ext_ident_double_95;
  const SDouble s7 = ext_intruder_position_x;
  const SDouble s8 = queue_2[0];
  const SWord32 s9 = ptr_2;
  const SDouble s10 = s0 - s6;
  const SBool   s12 = s10 > 0.0;
  const SBool   s14 = s10 < 0.0;
  const SDouble s16 = s14 ? -1.0 : s10;
  const SDouble s17 = s12 ? 1.0 : s16;
  const SDouble s18 = s17 /* break_symetry_part3.2 */;

  return s18;
}