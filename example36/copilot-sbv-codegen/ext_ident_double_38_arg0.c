/* File: "ext_ident_double_38_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "hmdRA" (if (Extf_ident_word64(label "sensitivityLevel" (if ((0.0 <= Ext_ownship_position_z) && (Ext_ownship_position_z < 1000.0)) then 2 else (if (Ext_ownship_position_z < 2350.0) then 3 else (if (Ext_ownship_position_z < 5000.0) then 4 else (if (Ext_ownship_position_z < 10000.0) then 5 else (if (Ext_ownship_position_z < 20000.0) then 6 else (if (Ext_ownship_position_z < 42000.0) then 7 else 8))))))) == 2) then 0.0 else (if (Extf_ident_word64(label "sensitivityLevel" (if ((0.0 <= Ext_ownship_position_z) && (Ext_ownship_position_z < 1000.0)) then 2 else (if (Ext_ownship_position_z < 2350.0) then 3 else (if (Ext_ownship_position_z < 5000.0) then 4 else (if (Ext_ownship_position_z < 10000.0) then 5 else (if (Ext_ownship_position_z < 20000.0) then 6 else (if (Ext_ownship_position_z < 42000.0) then 7 else 8))))))) == 3) then 370.332 else (if (Extf_ident_word64(label "sensitivityLevel" (if ((0.0 <= Ext_ownship_position_z) && (Ext_ownship_position_z < 1000.0)) then 2 else (if (Ext_ownship_position_z < 2350.0) then 3 else (if (Ext_ownship_position_z < 5000.0) then 4 else (if (Ext_ownship_position_z < 10000.0) then 5 else (if (Ext_ownship_position_z < 20000.0) then 6 else (if (Ext_ownship_position_z < 42000.0) then 7 else 8))))))) == 4) then 648.0048 else (if (Extf_ident_word64(label "sensitivityLevel" (if ((0.0 <= Ext_ownship_position_z) && (Ext_ownship_position_z < 1000.0)) then 2 else (if (Ext_ownship_position_z < 2350.0) then 3 else (if (Ext_ownship_position_z < 5000.0) then 4 else (if (Ext_ownship_position_z < 10000.0) then 5 else (if (Ext_ownship_position_z < 20000.0) then 6 else (if (Ext_ownship_position_z < 42000.0) then 7 else 8))))))) == 5) then 1018.6416 else (if (Extf_ident_word64(label "sensitivityLevel" (if ((0.0 <= Ext_ownship_position_z) && (Ext_ownship_position_z < 1000.0)) then 2 else (if (Ext_ownship_position_z < 2350.0) then 3 else (if (Ext_ownship_position_z < 5000.0) then 4 else (if (Ext_ownship_position_z < 10000.0) then 5 else (if (Ext_ownship_position_z < 20000.0) then 6 else (if (Ext_ownship_position_z < 42000.0) then 7 else 8))))))) == 6) then 1481.6328 else (if (Extf_ident_word64(label "sensitivityLevel" (if ((0.0 <= Ext_ownship_position_z) && (Ext_ownship_position_z < 1000.0)) then 2 else (if (Ext_ownship_position_z < 2350.0) then 3 else (if (Ext_ownship_position_z < 5000.0) then 4 else (if (Ext_ownship_position_z < 10000.0) then 5 else (if (Ext_ownship_position_z < 20000.0) then 6 else (if (Ext_ownship_position_z < 42000.0) then 7 else 8))))))) == 7) then 2036.9784000000002 else (if (Extf_ident_word64(label "sensitivityLevel" (if ((0.0 <= Ext_ownship_position_z) && (Ext_ownship_position_z < 1000.0)) then 2 else (if (Ext_ownship_position_z < 2350.0) then 3 else (if (Ext_ownship_position_z < 5000.0) then 4 else (if (Ext_ownship_position_z < 10000.0) then 5 else (if (Ext_ownship_position_z < 20000.0) then 6 else (if (Ext_ownship_position_z < 42000.0) then 7 else 8))))))) == 8) then 2036.9784000000002 else 0.0)))))))
*/
/*@
 assigns \nothing;
 ensures \result == ((( (((ext_ident_word64_31) == (2))) ? (0.0) : (( (((ext_ident_word64_32) == (3))) ? (370.332) : (( (((ext_ident_word64_33) == (4))) ? (648.0048) : (( (((ext_ident_word64_34) == (5))) ? (1018.6416) : (( (((ext_ident_word64_35) == (6))) ? (1481.6328) : (( (((ext_ident_word64_36) == (7))) ? (2036.9784000000002) : (( (((ext_ident_word64_37) == (8))) ? (2036.9784000000002) : (0.0))))))))))))))));
*/
SDouble ext_ident_double_38_arg0(const SWord64 ext_ident_word64_31,
                                 const SDouble ext_ownship_position_z,
                                 const SWord64 ext_ident_word64_32,
                                 const SWord64 ext_ident_word64_33,
                                 const SWord64 ext_ident_word64_34,
                                 const SWord64 ext_ident_word64_35,
                                 const SWord64 ext_ident_word64_36,
                                 const SWord64 ext_ident_word64_37)
{
  const SWord64 s0 = ext_ident_word64_31;
  const SDouble s1 = ext_ownship_position_z;
  const SWord64 s2 = ext_ident_word64_32;
  const SWord64 s3 = ext_ident_word64_33;
  const SWord64 s4 = ext_ident_word64_34;
  const SWord64 s5 = ext_ident_word64_35;
  const SWord64 s6 = ext_ident_word64_36;
  const SWord64 s7 = ext_ident_word64_37;
  const SBool   s9 = s0 == 0x0000000000000002ULL;
  const SBool   s12 = s2 == 0x0000000000000003ULL;
  const SBool   s15 = s3 == 0x0000000000000004ULL;
  const SBool   s18 = s4 == 0x0000000000000005ULL;
  const SBool   s21 = s5 == 0x0000000000000006ULL;
  const SBool   s24 = s6 == 0x0000000000000007ULL;
  const SBool   s27 = s7 == 0x0000000000000008ULL;
  const SDouble s28 = s27 ? 2036.9784000000002 : 0.0;
  const SDouble s29 = s24 ? 2036.9784000000002 : s28;
  const SDouble s30 = s21 ? 1481.6328 : s29;
  const SDouble s31 = s18 ? 1018.6416 : s30;
  const SDouble s32 = s15 ? 648.0048 : s31;
  const SDouble s33 = s12 ? 370.332 : s32;
  const SDouble s34 = s9 ? 0.0 : s33;
  const SDouble s35 = s34 /* hmdRA */;

  return s35;
}
