/* File: "ext_ident_double_166_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "hor_rr_divisor" Ext_minimal_horizontal_separation
*/
/*@
 assigns \nothing;
 ensures \result == ((ext_minimal_horizontal_separation));
*/
SDouble ext_ident_double_166_arg0(const SDouble ext_minimal_horizontal_separation)
{
  const SDouble s0 = ext_minimal_horizontal_separation;
  const SDouble s1 = s0 /* hor_rr_divisor */;

  return s1;
}
