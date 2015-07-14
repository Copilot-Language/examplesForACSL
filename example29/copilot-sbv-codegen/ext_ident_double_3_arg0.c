/* File: "ext_ident_double_3_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "exitDotMin_dividend" Extf_sqrt(Extf_ident_double(label "normsq2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_position_x - Ext_intruder_position_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_position_y - Ext_intruder_position_y)))))
*/
/*@
 assigns \nothing;
 ensures \result == ((ext_sqrt_2));
*/
SDouble ext_ident_double_3_arg0(const SDouble ext_sqrt_2,
                                const SDouble ext_ident_double_1,
                                const SDouble ext_ownship_position_x,
                                const SDouble ext_intruder_position_x,
                                const SDouble ext_ownship_position_y,
                                const SDouble ext_intruder_position_y)
{
  const SDouble s0 = ext_sqrt_2;
  const SDouble s1 = ext_ident_double_1;
  const SDouble s2 = ext_ownship_position_x;
  const SDouble s3 = ext_intruder_position_x;
  const SDouble s4 = ext_ownship_position_y;
  const SDouble s5 = ext_intruder_position_y;
  const SDouble s6 = s0 /* exitDotMin_dividend */;

  return s6;
}
