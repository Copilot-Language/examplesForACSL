/* File: "ext_ident_double_29_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "break_symetry_part3.2" signum (Ext_ownship_position_x - Ext_intruder_position_x)
*/
/*@
 assigns \nothing;
 ensures \result == ((((((ext_ownship_position_x) - (ext_intruder_position_x))) > 0)? 1 : ((((ext_ownship_position_x) - (ext_intruder_position_x))) < 0 ? -1 : 0)));
*/
SDouble ext_ident_double_29_arg0(const SDouble ext_ownship_position_x,
                                 const SDouble ext_intruder_position_x)
{
  const SDouble s0 = ext_ownship_position_x;
  const SDouble s1 = ext_intruder_position_x;
  const SDouble s2 = s0 - s1;
  const SBool   s4 = s2 > 0.0;
  const SBool   s6 = s2 < 0.0;
  const SDouble s8 = s6 ? -1.0 : s2;
  const SDouble s9 = s4 ? 1.0 : s8;
  const SDouble s10 = s9 /* break_symetry_part3.2 */;

  return s10;
}