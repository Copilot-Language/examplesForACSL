/* File: "ext_ident_double_95_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "normsq2dim" Extf_ident_double(label "scalar2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_position_x - Ext_intruder_position_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_position_y - Ext_intruder_position_y))))
*/
/*@
 assigns \nothing;
 ensures \result == ((ext_ident_double_94));
*/
SDouble ext_ident_double_95_arg0(const SDouble ext_ident_double_94,
                                 const SDouble ext_ownship_position_x,
                                 const SDouble ext_intruder_position_x,
                                 const SDouble ext_ownship_position_y,
                                 const SDouble ext_intruder_position_y)
{
  const SDouble s0 = ext_ident_double_94;
  const SDouble s1 = ext_ownship_position_x;
  const SDouble s2 = ext_intruder_position_x;
  const SDouble s3 = ext_ownship_position_y;
  const SDouble s4 = ext_intruder_position_y;
  const SDouble s5 = s0 /* normsq2dim */;

  return s5;
}