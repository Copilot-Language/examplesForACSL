/* File: "update_state_27.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*ACSL to write
 ((not (local "local_28" = false
       in local "local_29" = (if var "local_28" then (Ext_tmp_probe_1 > 250) else (Ext_tmp_probe_0 > 250))
          in local "local_30" = (if (var "local_28" || ((Ext_tmp_probe_1 > 250) == (Ext_tmp_probe_0 > 250))) then 2 else 0)
             in local "local_31" = (var "local_30" == 0)
                in local "local_32" = (if var "local_31" then (Ext_tmp_probe_2 > 250) else var "local_29")
                   in local "local_33" = (if (var "local_31" || ((Ext_tmp_probe_2 > 250) == var "local_29")) then (var "local_30" + 1) else (var "local_30" - 1))
                      in var "local_32" && ((local "local_34" = (if ((Ext_tmp_probe_0 > 250) == local "local_35" = false
                                                                                                in local "local_36" = (if var "local_35" then (Ext_tmp_probe_1 > 250) else (Ext_tmp_probe_0 > 250))
                                                                                                   in local "local_37" = (if (var "local_35" || ((Ext_tmp_probe_1 > 250) == (Ext_tmp_probe_0 > 250))) then 2 else 0)
                                                                                                      in local "local_38" = (var "local_37" == 0)
                                                                                                         in local "local_39" = (if var "local_38" then (Ext_tmp_probe_2 > 250) else var "local_36")
                                                                                                            in local "local_40" = (if (var "local_38" || ((Ext_tmp_probe_2 > 250) == var "local_36")) then (var "local_37" + 1) else (var "local_37" - 1))
                                                                                                               in var "local_39") then 1 else 0)
                                             in local "local_41" = (if ((Ext_tmp_probe_1 > 250) == local "local_42" = false
                                                                                                   in local "local_43" = (if var "local_42" then (Ext_tmp_probe_1 > 250) else (Ext_tmp_probe_0 > 250))
                                                                                                      in local "local_44" = (if (var "local_42" || ((Ext_tmp_probe_1 > 250) == (Ext_tmp_probe_0 > 250))) then 2 else 0)
                                                                                                         in local "local_45" = (var "local_44" == 0)
                                                                                                            in local "local_46" = (if var "local_45" then (Ext_tmp_probe_2 > 250) else var "local_43")
                                                                                                               in local "local_47" = (if (var "local_45" || ((Ext_tmp_probe_2 > 250) == var "local_43")) then (var "local_44" + 1) else (var "local_44" - 1))
                                                                                                                  in var "local_46") then (var "local_34" + 1) else var "local_34")
                                                in local "local_48" = (if ((Ext_tmp_probe_2 > 250) == local "local_49" = false
                                                                                                      in local "local_50" = (if var "local_49" then (Ext_tmp_probe_1 > 250) else (Ext_tmp_probe_0 > 250))
                                                                                                         in local "local_51" = (if (var "local_49" || ((Ext_tmp_probe_1 > 250) == (Ext_tmp_probe_0 > 250))) then 2 else 0)
                                                                                                            in local "local_52" = (var "local_51" == 0)
                                                                                                               in local "local_53" = (if var "local_52" then (Ext_tmp_probe_2 > 250) else var "local_50")
                                                                                                                  in local "local_54" = (if (var "local_52" || ((Ext_tmp_probe_2 > 250) == var "local_50")) then (var "local_51" + 1) else (var "local_51" - 1))
                                                                                                                     in var "local_53") then (var "local_41" + 1) else var "local_41")
                                                   in var "local_48" * 2) > 3)) || Ext_cooler) && s27)
*/
/*@
 assigns \nothing;
 ensures \result == (((((! ((((\let local_28 = (false) ; (\let local_29 = (( (local_28) ? (((ext_tmp_probe_1) > (250))) : (((ext_tmp_probe_0) > (250))))) ; (\let local_30 = (( (((local_28) || (((((ext_tmp_probe_1) > (250))) == (((ext_tmp_probe_0) > (250))))))) ? (2) : (0))) ; (\let local_31 = (((local_30) == (0))) ; (\let local_32 = (( (local_31) ? (((ext_tmp_probe_2) > (250))) : (local_29))) ; (\let local_33 = (( (((local_31) || (((((ext_tmp_probe_2) > (250))) == (local_29))))) ? (((local_30) + (1))) : (((local_30) - (1))))) ; (local_32))))))) && (((((\let local_34 = (( (((((ext_tmp_probe_0) > (250))) == (\let local_35 = (false) ; (\let local_36 = (( (local_35) ? (((ext_tmp_probe_1) > (250))) : (((ext_tmp_probe_0) > (250))))) ; (\let local_37 = (( (((local_35) || (((((ext_tmp_probe_1) > (250))) == (((ext_tmp_probe_0) > (250))))))) ? (2) : (0))) ; (\let local_38 = (((local_37) == (0))) ; (\let local_39 = (( (local_38) ? (((ext_tmp_probe_2) > (250))) : (local_36))) ; (\let local_40 = (( (((local_38) || (((((ext_tmp_probe_2) > (250))) == (local_36))))) ? (((local_37) + (1))) : (((local_37) - (1))))) ; (local_39))))))))) ? (1) : (0))) ; (\let local_41 = (( (((((ext_tmp_probe_1) > (250))) == (\let local_42 = (false) ; (\let local_43 = (( (local_42) ? (((ext_tmp_probe_1) > (250))) : (((ext_tmp_probe_0) > (250))))) ; (\let local_44 = (( (((local_42) || (((((ext_tmp_probe_1) > (250))) == (((ext_tmp_probe_0) > (250))))))) ? (2) : (0))) ; (\let local_45 = (((local_44) == (0))) ; (\let local_46 = (( (local_45) ? (((ext_tmp_probe_2) > (250))) : (local_43))) ; (\let local_47 = (( (((local_45) || (((((ext_tmp_probe_2) > (250))) == (local_43))))) ? (((local_44) + (1))) : (((local_44) - (1))))) ; (local_46))))))))) ? (((local_34) + (1))) : (local_34))) ; (\let local_48 = (( (((((ext_tmp_probe_2) > (250))) == (\let local_49 = (false) ; (\let local_50 = (( (local_49) ? (((ext_tmp_probe_1) > (250))) : (((ext_tmp_probe_0) > (250))))) ; (\let local_51 = (( (((local_49) || (((((ext_tmp_probe_1) > (250))) == (((ext_tmp_probe_0) > (250))))))) ? (2) : (0))) ; (\let local_52 = (((local_51) == (0))) ; (\let local_53 = (( (local_52) ? (((ext_tmp_probe_2) > (250))) : (local_50))) ; (\let local_54 = (( (((local_52) || (((((ext_tmp_probe_2) > (250))) == (local_50))))) ? (((local_51) + (1))) : (((local_51) - (1))))) ; (local_53))))))))) ? (((local_41) + (1))) : (local_41))) ; (local_48)))) * (2))) > (3))))))) || (ext_cooler))) && (queue_27[ptr_27])));
*/
SBool update_state_27(const SWord8 ext_tmp_probe_1,
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
  const SBool   s30 = s3 || s29;
  const SBool   s31 = s4 && s30;

  return s31;
}
