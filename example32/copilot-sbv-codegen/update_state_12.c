/* File: "update_state_12.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 Ext_ownship_velocity_z
*/
/*@
 assigns \nothing;
 ensures \result == (ext_ownship_velocity_z);
*/
SDouble update_state_12(const SDouble ext_ownship_velocity_z)
{
  const SDouble s0 = ext_ownship_velocity_z;
  return s0;
}