/* File: "ext_ident_double_17_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "criterion3D_part1.3" (Ext_minimal_horizontal_separation * Ext_minimal_horizontal_separation)
*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_minimal_horizontal_separation) * (ext_minimal_horizontal_separation))));
*/
SDouble ext_ident_double_17_arg0(const SDouble ext_minimal_horizontal_separation)
{
  const SDouble s0 = ext_minimal_horizontal_separation;
  const SDouble s1 = s0 * s0;
  const SDouble s2 = s1 /* criterion3D_part1.3 */;

  return s2;
}
