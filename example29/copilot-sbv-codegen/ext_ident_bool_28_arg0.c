/* File: "ext_ident_bool_28_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "verticalCriterionConflict_part1.1.2" (Extf_ident_double(label "normsq2dim" (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_position_x - Ext_intruder_position_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_position_y - Ext_intruder_position_y)))) >= 0.0)
*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ident_double_27) >= (0.0))));
*/
SBool ext_ident_bool_28_arg0(const SDouble ext_ident_double_27,
                             const SDouble ext_ownship_position_x,
                             const SDouble ext_intruder_position_x,
                             const SDouble ext_ownship_position_y,
                             const SDouble ext_intruder_position_y)
{
  const SDouble s0 = ext_ident_double_27;
  const SDouble s1 = ext_ownship_position_x;
  const SDouble s2 = ext_intruder_position_x;
  const SDouble s3 = ext_ownship_position_y;
  const SDouble s4 = ext_intruder_position_y;
  const SBool   s6 = s0 >= 0.0;
  const SBool   s7 = s6 /* verticalCriterionConflict_part1.1.2 */;

  return s7;
}
