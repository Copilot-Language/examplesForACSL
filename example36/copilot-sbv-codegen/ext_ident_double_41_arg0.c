/* File: "ext_ident_double_41_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "taumod" (if (ext_ident_double_20 < 0.0) then ((ext_ident_double_37 - ext_ident_double_39) / ext_ident_double_40) else -1.0)
*/
/*@
 assigns \nothing;
 ensures \result == ((( (((ext_ident_double_20) < (0.0))) ? (((((ext_ident_double_37) - (ext_ident_double_39))) / (ext_ident_double_40))) : (-1.0))));
*/
SDouble ext_ident_double_41_arg0(const SDouble ext_ident_double_20,
                                 const SDouble ext_ownship_position_x,
                                 const SDouble ext_intruder_position_x,
                                 const SDouble ext_ownship_velocity_x,
                                 const SDouble ext_intruder_velocity_x,
                                 const SDouble ext_ownship_position_y,
                                 const SDouble ext_intruder_position_y,
                                 const SDouble ext_ownship_velocity_y,
                                 const SDouble ext_intruder_velocity_y,
                                 const SDouble ext_ident_double_37,
                                 const SDouble ext_ident_double_28,
                                 const SWord64 ext_ident_word64_21,
                                 const SDouble ext_ownship_position_z,
                                 const SWord64 ext_ident_word64_22,
                                 const SWord64 ext_ident_word64_23,
                                 const SWord64 ext_ident_word64_24,
                                 const SWord64 ext_ident_word64_25,
                                 const SWord64 ext_ident_word64_26,
                                 const SWord64 ext_ident_word64_27,
                                 const SDouble ext_ident_double_36,
                                 const SWord64 ext_ident_word64_29,
                                 const SWord64 ext_ident_word64_30,
                                 const SWord64 ext_ident_word64_31,
                                 const SWord64 ext_ident_word64_32,
                                 const SWord64 ext_ident_word64_33,
                                 const SWord64 ext_ident_word64_34,
                                 const SWord64 ext_ident_word64_35,
                                 const SDouble ext_ident_double_39,
                                 const SDouble ext_ident_double_38,
                                 const SDouble ext_ident_double_40)
{
  const SDouble s0 = ext_ident_double_20;
  const SDouble s9 = ext_ident_double_37;
  const SDouble s27 = ext_ident_double_39;
  const SDouble s29 = ext_ident_double_40;
  const SBool   s31 = s0 < 0.0;
  const SDouble s32 = s9 - s27;
  const SDouble s33 = s32 / s29;
  const SDouble s35 = s31 ? s33 : -1.0;
  const SDouble s36 = s35 /* taumod */;

  return s36;
}