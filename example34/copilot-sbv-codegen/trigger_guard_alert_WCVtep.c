/* File: "trigger_guard_alert_WCVtep.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 006*/
/*ACSL to write
 (((Extf_sqrt((((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_position_x - Ext_intruder_position_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_position_y - Ext_intruder_position_y)))) <= 1.0) || ((Extf_sqrt(((((Ext_ownship_position_x - Ext_intruder_position_x) + ((if (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) == 0.0) && ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) == 0.0)) then 0.0 else ((0.0 - (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))) / (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x))) * ((Ext_ownship_position_x - Ext_intruder_position_x) + ((if (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) == 0.0) && ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) == 0.0)) then 0.0 else ((0.0 - (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))) / (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)))) + (((Ext_ownship_position_y - Ext_intruder_position_y) + ((if (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) == 0.0) && ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) == 0.0)) then 0.0 else ((0.0 - (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))) / (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))) * ((Ext_ownship_position_y - Ext_intruder_position_y) + ((if (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) == 0.0) && ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) == 0.0)) then 0.0 else ((0.0 - (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))) / (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))))) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))))) <= 1.0) && ((0.0 <= (if (((((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))) < 0.0) && (((((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))) - ((((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)) - ((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_position_y - Ext_intruder_position_y))) * (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)) - ((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_position_y - Ext_intruder_position_y))))) >= 0.0)) then (((0.0 - (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))) + (-1.0 * Extf_sqrt(((((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))) - ((((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)) - ((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_position_y - Ext_intruder_position_y))) * (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)) - ((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_position_y - Ext_intruder_position_y)))))))) / (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))) else -1.0)) && ((if (((((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))) < 0.0) && (((((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))) - ((((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)) - ((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_position_y - Ext_intruder_position_y))) * (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)) - ((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_position_y - Ext_intruder_position_y))))) >= 0.0)) then (((0.0 - (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_position_y - Ext_intruder_position_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))) + (-1.0 * Extf_sqrt(((((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y))) - ((((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)) - ((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_position_y - Ext_intruder_position_y))) * (((Ext_ownship_position_x - Ext_intruder_position_x) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)) - ((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_position_y - Ext_intruder_position_y)))))))) / (((Ext_ownship_velocity_x - Ext_intruder_velocity_x) * (Ext_ownship_velocity_x - Ext_intruder_velocity_x)) + ((Ext_ownship_velocity_y - Ext_intruder_velocity_y) * (Ext_ownship_velocity_y - Ext_intruder_velocity_y)))) else -1.0) <= 30.0)))) && ((abs (Ext_ownship_position_z - Ext_intruder_position_z) <= 7.81749e-2) || ((0.0 <= (if (((Ext_ownship_position_z - Ext_intruder_position_z) * (Ext_ownship_velocity_z - Ext_intruder_velocity_z)) < 0.0) then ((0.0 - (Ext_ownship_position_z - Ext_intruder_position_z)) / (Ext_ownship_velocity_z - Ext_intruder_velocity_z)) else -1.0)) && ((if (((Ext_ownship_position_z - Ext_intruder_position_z) * (Ext_ownship_velocity_z - Ext_intruder_velocity_z)) < 0.0) then ((0.0 - (Ext_ownship_position_z - Ext_intruder_position_z)) / (Ext_ownship_velocity_z - Ext_intruder_velocity_z)) else -1.0) <= 30.0))))
*/
/*@
 assigns \nothing;
 ensures \result == (((((((ext_sqrt_0) <= (1.0))) || (((((ext_sqrt_1) <= (1.0))) && (((((0.0) <= (( (((((((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((ext_ownship_velocity_x) - (ext_intruder_velocity_x))))) + (((((ext_ownship_position_y) - (ext_intruder_position_y))) * (((ext_ownship_velocity_y) - (ext_intruder_velocity_y))))))) < (0.0))) && (((((((((((ext_ownship_velocity_x) - (ext_intruder_velocity_x))) * (((ext_ownship_velocity_x) - (ext_intruder_velocity_x))))) + (((((ext_ownship_velocity_y) - (ext_intruder_velocity_y))) * (((ext_ownship_velocity_y) - (ext_intruder_velocity_y))))))) - (((((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((ext_ownship_velocity_y) - (ext_intruder_velocity_y))))) - (((((ext_ownship_velocity_x) - (ext_intruder_velocity_x))) * (((ext_ownship_position_y) - (ext_intruder_position_y))))))) * (((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((ext_ownship_velocity_y) - (ext_intruder_velocity_y))))) - (((((ext_ownship_velocity_x) - (ext_intruder_velocity_x))) * (((ext_ownship_position_y) - (ext_intruder_position_y))))))))))) >= (0.0))))) ? (((((((0.0) - (((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((ext_ownship_velocity_x) - (ext_intruder_velocity_x))))) + (((((ext_ownship_position_y) - (ext_intruder_position_y))) * (((ext_ownship_velocity_y) - (ext_intruder_velocity_y))))))))) + (((-1.0) * (ext_sqrt_2))))) / (((((((ext_ownship_velocity_x) - (ext_intruder_velocity_x))) * (((ext_ownship_velocity_x) - (ext_intruder_velocity_x))))) + (((((ext_ownship_velocity_y) - (ext_intruder_velocity_y))) * (((ext_ownship_velocity_y) - (ext_intruder_velocity_y))))))))) : (-1.0))))) && (((( (((((((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((ext_ownship_velocity_x) - (ext_intruder_velocity_x))))) + (((((ext_ownship_position_y) - (ext_intruder_position_y))) * (((ext_ownship_velocity_y) - (ext_intruder_velocity_y))))))) < (0.0))) && (((((((((((ext_ownship_velocity_x) - (ext_intruder_velocity_x))) * (((ext_ownship_velocity_x) - (ext_intruder_velocity_x))))) + (((((ext_ownship_velocity_y) - (ext_intruder_velocity_y))) * (((ext_ownship_velocity_y) - (ext_intruder_velocity_y))))))) - (((((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((ext_ownship_velocity_y) - (ext_intruder_velocity_y))))) - (((((ext_ownship_velocity_x) - (ext_intruder_velocity_x))) * (((ext_ownship_position_y) - (ext_intruder_position_y))))))) * (((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((ext_ownship_velocity_y) - (ext_intruder_velocity_y))))) - (((((ext_ownship_velocity_x) - (ext_intruder_velocity_x))) * (((ext_ownship_position_y) - (ext_intruder_position_y))))))))))) >= (0.0))))) ? (((((((0.0) - (((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((ext_ownship_velocity_x) - (ext_intruder_velocity_x))))) + (((((ext_ownship_position_y) - (ext_intruder_position_y))) * (((ext_ownship_velocity_y) - (ext_intruder_velocity_y))))))))) + (((-1.0) * (ext_sqrt_3))))) / (((((((ext_ownship_velocity_x) - (ext_intruder_velocity_x))) * (((ext_ownship_velocity_x) - (ext_intruder_velocity_x))))) + (((((ext_ownship_velocity_y) - (ext_intruder_velocity_y))) * (((ext_ownship_velocity_y) - (ext_intruder_velocity_y))))))))) : (-1.0))) <= (30.0))))))))) && (((((((((ext_ownship_position_z) - (ext_intruder_position_z))) > 0)? (((ext_ownship_position_z) - (ext_intruder_position_z))) : -(((ext_ownship_position_z) - (ext_intruder_position_z)))) <= (7.81749e-2))) || (((((0.0) <= (( (((((((ext_ownship_position_z) - (ext_intruder_position_z))) * (((ext_ownship_velocity_z) - (ext_intruder_velocity_z))))) < (0.0))) ? (((((0.0) - (((ext_ownship_position_z) - (ext_intruder_position_z))))) / (((ext_ownship_velocity_z) - (ext_intruder_velocity_z))))) : (-1.0))))) && (((( (((((((ext_ownship_position_z) - (ext_intruder_position_z))) * (((ext_ownship_velocity_z) - (ext_intruder_velocity_z))))) < (0.0))) ? (((((0.0) - (((ext_ownship_position_z) - (ext_intruder_position_z))))) / (((ext_ownship_velocity_z) - (ext_intruder_velocity_z))))) : (-1.0))) <= (30.0)))))))));
*/
SBool trigger_guard_alert_WCVtep(const SDouble ext_sqrt_0,
                                 const SDouble ext_ownship_position_x,
                                 const SDouble ext_intruder_position_x,
                                 const SDouble ext_ownship_position_y,
                                 const SDouble ext_intruder_position_y, const SDouble ext_sqrt_1,
                                 const SDouble ext_ownship_velocity_x,
                                 const SDouble ext_intruder_velocity_x,
                                 const SDouble ext_ownship_velocity_y,
                                 const SDouble ext_intruder_velocity_y, const SDouble ext_sqrt_2,
                                 const SDouble ext_sqrt_3, const SDouble ext_ownship_position_z,
                                 const SDouble ext_intruder_position_z,
                                 const SDouble ext_ownship_velocity_z,
                                 const SDouble ext_intruder_velocity_z)
{
  const SDouble s0 = ext_sqrt_0;
  const SDouble s1 = ext_ownship_position_x;
  const SDouble s2 = ext_intruder_position_x;
  const SDouble s3 = ext_ownship_position_y;
  const SDouble s4 = ext_intruder_position_y;
  const SDouble s5 = ext_sqrt_1;
  const SDouble s6 = ext_ownship_velocity_x;
  const SDouble s7 = ext_intruder_velocity_x;
  const SDouble s8 = ext_ownship_velocity_y;
  const SDouble s9 = ext_intruder_velocity_y;
  const SDouble s10 = ext_sqrt_2;
  const SDouble s11 = ext_sqrt_3;
  const SDouble s12 = ext_ownship_position_z;
  const SDouble s13 = ext_intruder_position_z;
  const SDouble s14 = ext_ownship_velocity_z;
  const SDouble s15 = ext_intruder_velocity_z;
  const SBool   s17 = s0 <= 1.0;
  const SBool   s18 = s5 <= 1.0;
  const SDouble s20 = s1 - s2;
  const SDouble s21 = s6 - s7;
  const SDouble s22 = s20 * s21;
  const SDouble s23 = s3 - s4;
  const SDouble s24 = s8 - s9;
  const SDouble s25 = s23 * s24;
  const SDouble s26 = s22 + s25;
  const SBool   s27 = s26 < 0.0;
  const SDouble s28 = s21 * s21;
  const SDouble s29 = s24 * s24;
  const SDouble s30 = s28 + s29;
  const SDouble s31 = s20 * s24;
  const SDouble s32 = s21 * s23;
  const SDouble s33 = s31 - s32;
  const SDouble s34 = s33 * s33;
  const SDouble s35 = s30 - s34;
  const SBool   s36 = s35 >= 0.0;
  const SBool   s37 = s27 && s36;
  const SDouble s38 = 0.0 - s26;
  const SDouble s40 = s10 * -1.0;
  const SDouble s41 = s38 + s40;
  const SDouble s42 = s41 / s30;
  const SDouble s43 = s37 ? s42 : -1.0;
  const SBool   s44 = 0.0 <= s43;
  const SDouble s45 = s11 * -1.0;
  const SDouble s46 = s38 + s45;
  const SDouble s47 = s46 / s30;
  const SDouble s48 = s37 ? s47 : -1.0;
  const SBool   s50 = s48 <= 30.0;
  const SBool   s51 = s44 && s50;
  const SBool   s52 = s18 && s51;
  const SBool   s53 = s17 || s52;
  const SDouble s54 = s12 - s13;
  const SDouble s55 = fabs(s54);
  const SBool   s57 = s55 <= 7.81749e-2;
  const SDouble s58 = s14 - s15;
  const SDouble s59 = s54 * s58;
  const SBool   s60 = s59 < 0.0;
  const SDouble s61 = 0.0 - s54;
  const SDouble s62 = s61 / s58;
  const SDouble s63 = s60 ? s62 : -1.0;
  const SBool   s64 = 0.0 <= s63;
  const SBool   s65 = s63 <= 30.0;
  const SBool   s66 = s64 && s65;
  const SBool   s67 = s57 || s66;
  const SBool   s68 = s53 && s67;

  return s68;
}
