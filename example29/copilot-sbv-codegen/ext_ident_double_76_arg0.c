/* File: "ext_ident_double_76_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "thetaVert_part2.3.2" (Extf_ident_double(label "normsq2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_position_x - Ext_intruder_position_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_position_y - Ext_intruder_position_y)))) - (Ext_minimal_horizontal_separation * Ext_minimal_horizontal_separation))
*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ident_double_75) - (((ext_minimal_horizontal_separation) * (ext_minimal_horizontal_separation))))));
*/
SDouble ext_ident_double_76_arg0(const SDouble ext_ident_double_75,
                                 const SDouble ext_ownship_position_x,
                                 const SDouble ext_intruder_position_x,
                                 const SDouble ext_ownship_position_y,
                                 const SDouble ext_intruder_position_y,
                                 const SDouble ext_minimal_horizontal_separation)
{
  const SDouble s0 = ext_ident_double_75;
  const SDouble s1 = ext_ownship_position_x;
  const SDouble s2 = ext_intruder_position_x;
  const SDouble s3 = ext_ownship_position_y;
  const SDouble s4 = ext_intruder_position_y;
  const SDouble s5 = ext_minimal_horizontal_separation;
  const SDouble s6 = s5 * s5;
  const SDouble s7 = s0 - s6;
  const SDouble s8 = s7 /* thetaVert_part2.3.2 */;

  return s8;
}