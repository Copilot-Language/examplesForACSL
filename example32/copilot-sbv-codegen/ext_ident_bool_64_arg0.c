/* File: "ext_ident_bool_64_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "z_prop(sz,v'z)" (((Extf_ident_double(label "ownPositionZ" (if s0 then Ext_ownship_position_z else s9)) - Extf_ident_double(label "intPositionZ" (if s0 then Ext_intruder_position_z else s10))) * (Ext_ownship_velocity_z - Extf_ident_double(label "intVelocityZ" (if s0 then Ext_intruder_velocity_z else s11)))) >= 0.0)
*/
/*@
 assigns \nothing;
 ensures \result == ((((((((ext_ident_double_61) - (ext_ident_double_62))) * (((ext_ownship_velocity_z) - (ext_ident_double_63))))) >= (0.0))));
*/
SBool ext_ident_bool_64_arg0(const SDouble ext_ident_double_61,
                             const SBool *queue_0, const SWord32 ptr_0,
                             const SDouble ext_ownship_position_z, const SDouble *queue_9,
                             const SWord32 ptr_9, const SDouble ext_ident_double_62,
                             const SDouble ext_intruder_position_z, const SDouble *queue_10,
                             const SWord32 ptr_10, const SDouble ext_ownship_velocity_z,
                             const SDouble ext_ident_double_63,
                             const SDouble ext_intruder_velocity_z, const SDouble *queue_11,
                             const SWord32 ptr_11)
{
  const SDouble s0 = ext_ident_double_61;
  const SBool   s1 = queue_0[0];
  const SWord32 s2 = ptr_0;
  const SDouble s3 = ext_ownship_position_z;
  const SDouble s4 = queue_9[0];
  const SWord32 s5 = ptr_9;
  const SDouble s6 = ext_ident_double_62;
  const SDouble s7 = ext_intruder_position_z;
  const SDouble s8 = queue_10[0];
  const SWord32 s9 = ptr_10;
  const SDouble s10 = ext_ownship_velocity_z;
  const SDouble s11 = ext_ident_double_63;
  const SDouble s12 = ext_intruder_velocity_z;
  const SDouble s13 = queue_11[0];
  const SWord32 s14 = ptr_11;
  const SDouble s15 = s0 - s6;
  const SDouble s16 = s10 - s11;
  const SDouble s17 = s15 * s16;
  const SBool   s19 = s17 >= 0.0;
  const SBool   s20 = s19 /* z_prop(sz,v'z) */;

  return s20;
}