/* File: "trigger_guard_shutoff.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/*ACSL following*/
/*test 006*/
/*ACSL to write
 not ((not (local "local_0" = false
           in local "local_1" = (if var "local_0" then (extern "tmp_probe_1" > 250) else (extern "tmp_probe_0" > 250))
              in local "local_2" = (if (var "local_0" || ((extern "tmp_probe_1" > 250) == (extern "tmp_probe_0" > 250))) then 2 else 0)
                 in local "local_3" = (var "local_2" == 0)
                    in local "local_4" = (if var "local_3" then (extern "tmp_probe_2" > 250) else var "local_1")
                       in local "local_5" = (if (var "local_3" || ((extern "tmp_probe_2" > 250) == var "local_1")) then (var "local_2" + 1) else (var "local_2" - 1))
                          in var "local_4" && ((local "local_6" = (if ((extern "tmp_probe_0" > 250) == local "local_7" = false
                                                                                                       in local "local_8" = (if var "local_7" then (extern "tmp_probe_1" > 250) else (extern "tmp_probe_0" > 250))
                                                                                                          in local "local_9" = (if (var "local_7" || ((extern "tmp_probe_1" > 250) == (extern "tmp_probe_0" > 250))) then 2 else 0)
                                                                                                             in local "local_10" = (var "local_9" == 0)
                                                                                                                in local "local_11" = (if var "local_10" then (extern "tmp_probe_2" > 250) else var "local_8")
                                                                                                                   in local "local_12" = (if (var "local_10" || ((extern "tmp_probe_2" > 250) == var "local_8")) then (var "local_9" + 1) else (var "local_9" - 1))
                                                                                                                      in var "local_11") then 1 else 0)
                                                in local "local_13" = (if ((extern "tmp_probe_1" > 250) == local "local_14" = false
                                                                                                           in local "local_15" = (if var "local_14" then (extern "tmp_probe_1" > 250) else (extern "tmp_probe_0" > 250))
                                                                                                              in local "local_16" = (if (var "local_14" || ((extern "tmp_probe_1" > 250) == (extern "tmp_probe_0" > 250))) then 2 else 0)
                                                                                                                 in local "local_17" = (var "local_16" == 0)
                                                                                                                    in local "local_18" = (if var "local_17" then (extern "tmp_probe_2" > 250) else var "local_15")
                                                                                                                       in local "local_19" = (if (var "local_17" || ((extern "tmp_probe_2" > 250) == var "local_15")) then (var "local_16" + 1) else (var "local_16" - 1))
                                                                                                                          in var "local_18") then (var "local_6" + 1) else var "local_6")
                                                   in local "local_20" = (if ((extern "tmp_probe_2" > 250) == local "local_21" = false
                                                                                                              in local "local_22" = (if var "local_21" then (extern "tmp_probe_1" > 250) else (extern "tmp_probe_0" > 250))
                                                                                                                 in local "local_23" = (if (var "local_21" || ((extern "tmp_probe_1" > 250) == (extern "tmp_probe_0" > 250))) then 2 else 0)
                                                                                                                    in local "local_24" = (var "local_23" == 0)
                                                                                                                       in local "local_25" = (if var "local_24" then (extern "tmp_probe_2" > 250) else var "local_22")
                                                                                                                          in local "local_26" = (if (var "local_24" || ((extern "tmp_probe_2" > 250) == var "local_22")) then (var "local_23" + 1) else (var "local_23" - 1))
                                                                                                                             in var "local_25") then (var "local_13" + 1) else var "local_13")
                                                      in var "local_20" * 2) > 3)) || extern "cooler") && s27)
*/
/*@
 assigns \nothing;
 ensures \result == ! ((! ((\let local_0 = false ; (\let local_1 = ( local_0 ? (ext_tmp_probe_1 > 250) : (ext_tmp_probe_0 > 250)) ; (\let local_2 = ( (local_0 || ((ext_tmp_probe_1 > 250) == (ext_tmp_probe_0 > 250))) ? 2 : 0) ; (\let local_3 = (local_2 == 0) ; (\let local_4 = ( local_3 ? (ext_tmp_probe_2 > 250) : local_1) ; (\let local_5 = ( (local_3 || ((ext_tmp_probe_2 > 250) == local_1)) ? (local_2 + 1) : (local_2 - 1)) ; local_4 ) ) ) ) ) ) && (((\let local_6 = ( ((ext_tmp_probe_0 > 250) == (\let local_7 = false ; (\let local_8 = ( local_7 ? (ext_tmp_probe_1 > 250) : (ext_tmp_probe_0 > 250)) ; (\let local_9 = ( (local_7 || ((ext_tmp_probe_1 > 250) == (ext_tmp_probe_0 > 250))) ? 2 : 0) ; (\let local_10 = (local_9 == 0) ; (\let local_11 = ( local_10 ? (ext_tmp_probe_2 > 250) : local_8) ; (\let local_12 = ( (local_10 || ((ext_tmp_probe_2 > 250) == local_8)) ? (local_9 + 1) : (local_9 - 1)) ; local_11 ) ) ) ) ) )) ? 1 : 0) ; (\let local_13 = ( ((ext_tmp_probe_1 > 250) == (\let local_14 = false ; (\let local_15 = ( local_14 ? (ext_tmp_probe_1 > 250) : (ext_tmp_probe_0 > 250)) ; (\let local_16 = ( (local_14 || ((ext_tmp_probe_1 > 250) == (ext_tmp_probe_0 > 250))) ? 2 : 0) ; (\let local_17 = (local_16 == 0) ; (\let local_18 = ( local_17 ? (ext_tmp_probe_2 > 250) : local_15) ; (\let local_19 = ( (local_17 || ((ext_tmp_probe_2 > 250) == local_15)) ? (local_16 + 1) : (local_16 - 1)) ; local_18 ) ) ) ) ) )) ? (local_6 + 1) : local_6) ; (\let local_20 = ( ((ext_tmp_probe_2 > 250) == (\let local_21 = false ; (\let local_22 = ( local_21 ? (ext_tmp_probe_1 > 250) : (ext_tmp_probe_0 > 250)) ; (\let local_23 = ( (local_21 || ((ext_tmp_probe_1 > 250) == (ext_tmp_probe_0 > 250))) ? 2 : 0) ; (\let local_24 = (local_23 == 0) ; (\let local_25 = ( local_24 ? (ext_tmp_probe_2 > 250) : local_22) ; (\let local_26 = ( (local_24 || ((ext_tmp_probe_2 > 250) == local_22)) ? (local_23 + 1) : (local_23 - 1)) ; local_25 ) ) ) ) ) )) ? (local_13 + 1) : local_13) ; local_20 ) ) ) * 2) > 3)) || ext_cooler) && queue_27[ptr_27]);
*/
SBool trigger_guard_shutoff(const SWord8 ext_tmp_probe_1,
                            const SWord8 ext_tmp_probe_0, const SWord8 ext_tmp_probe_2,
                            const SBool ext_cooler, const SBool *queue_27,
                            const SWord32 ptr_27)
{
  const SWord8  s0 = ext_tmp_probe_1;
  const SWord8  s1 = ext_tmp_probe_0;
  const SWord8  s2 = ext_tmp_probe_2;
  const SBool   s3 = ext_cooler;
  const SBool   s4 = queue_27[0];
  const SWord32 s5 = ptr_27;
  const SBool   s7 = s0 > 250;
  const SBool   s8 = s1 > 250;
  const SBool   s9 = s7 == s8;
  const SWord32 s12 = s9 ? 0x00000002UL : 0x00000000UL;
  const SBool   s13 = 0x00000000UL == s12;
  const SBool   s14 = s2 > 250;
  const SBool   s15 = s13 ? s14 : s8;
  const SBool   s16 = s14 == s15;
  const SBool   s17 = s7 == s15;
  const SBool   s18 = s8 == s15;
  const SWord32 s20 = s18 ? 0x00000001UL : 0x00000000UL;
  const SWord32 s21 = 0x00000001UL + s20;
  const SWord32 s22 = s17 ? s21 : s20;
  const SWord32 s23 = 0x00000001UL + s22;
  const SWord32 s24 = s16 ? s23 : s22;
  const SWord32 s25 = 0x00000002UL * s24;
  const SBool   s27 = s25 > 0x00000003UL;
  const SBool   s28 = s15 && s27;
  const SBool   s29 = !s28;
  const SBool   s30 = s29 || s3;
  const SBool   s31 = s30 && s4;
  const SBool   s32 = !s31;

  return s32;
}