/* File: "ext_ident_double_20_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "sq" (Extf_ident_double(label "hmdRA" (if (Extf_ident_word64(label "sensitivityLevel" (if ((0.0 <= Ext_ownship_position_z) && (Ext_ownship_position_z < 1000.0)) then 2 else (if (Ext_ownship_position_z < 2350.0) then 3 else (if (Ext_ownship_position_z < 5000.0) then 4 else (if (Ext_ownship_position_z < 10000.0) then 5 else (if (Ext_ownship_position_z < 20000.0) then 6 else (if (Ext_ownship_position_z < 42000.0) then 7 else 8))))))) == 2) then 0.0 else (if (Extf_ident_word64(label "sensitivityLevel" (if ((0.0 <= Ext_ownship_position_z) && (Ext_ownship_position_z < 1000.0)) then 2 else (if (Ext_ownship_position_z < 2350.0) then 3 else (if (Ext_ownship_position_z < 5000.0) then 4 else (if (Ext_ownship_position_z < 10000.0) then 5 else (if (Ext_ownship_position_z < 20000.0) then 6 else (if (Ext_ownship_position_z < 42000.0) then 7 else 8))))))) == 3) then 370.332 else (if (Extf_ident_word64(label "sensitivityLevel" (if ((0.0 <= Ext_ownship_position_z) && (Ext_ownship_position_z < 1000.0)) then 2 else (if (Ext_ownship_position_z < 2350.0) then 3 else (if (Ext_ownship_position_z < 5000.0) then 4 else (if (Ext_ownship_position_z < 10000.0) then 5 else (if (Ext_ownship_position_z < 20000.0) then 6 else (if (Ext_ownship_position_z < 42000.0) then 7 else 8))))))) == 4) then 648.0048 else (if (Extf_ident_word64(label "sensitivityLevel" (if ((0.0 <= Ext_ownship_position_z) && (Ext_ownship_position_z < 1000.0)) then 2 else (if (Ext_ownship_position_z < 2350.0) then 3 else (if (Ext_ownship_position_z < 5000.0) then 4 else (if (Ext_ownship_position_z < 10000.0) then 5 else (if (Ext_ownship_position_z < 20000.0) then 6 else (if (Ext_ownship_position_z < 42000.0) then 7 else 8))))))) == 5) then 1018.6416 else (if (Extf_ident_word64(label "sensitivityLevel" (if ((0.0 <= Ext_ownship_position_z) && (Ext_ownship_position_z < 1000.0)) then 2 else (if (Ext_ownship_position_z < 2350.0) then 3 else (if (Ext_ownship_position_z < 5000.0) then 4 else (if (Ext_ownship_position_z < 10000.0) then 5 else (if (Ext_ownship_position_z < 20000.0) then 6 else (if (Ext_ownship_position_z < 42000.0) then 7 else 8))))))) == 6) then 1481.6328 else (if (Extf_ident_word64(label "sensitivityLevel" (if ((0.0 <= Ext_ownship_position_z) && (Ext_ownship_position_z < 1000.0)) then 2 else (if (Ext_ownship_position_z < 2350.0) then 3 else (if (Ext_ownship_position_z < 5000.0) then 4 else (if (Ext_ownship_position_z < 10000.0) then 5 else (if (Ext_ownship_position_z < 20000.0) then 6 else (if (Ext_ownship_position_z < 42000.0) then 7 else 8))))))) == 7) then 2036.9784000000002 else (if (Extf_ident_word64(label "sensitivityLevel" (if ((0.0 <= Ext_ownship_position_z) && (Ext_ownship_position_z < 1000.0)) then 2 else (if (Ext_ownship_position_z < 2350.0) then 3 else (if (Ext_ownship_position_z < 5000.0) then 4 else (if (Ext_ownship_position_z < 10000.0) then 5 else (if (Ext_ownship_position_z < 20000.0) then 6 else (if (Ext_ownship_position_z < 42000.0) then 7 else 8))))))) == 8) then 2036.9784000000002 else 0.0)))))))) * Extf_ident_double(label "hmdRA" (if (Extf_ident_word64(label "sensitivityLevel" (if ((0.0 <= Ext_ownship_position_z) && (Ext_ownship_position_z < 1000.0)) then 2 else (if (Ext_ownship_position_z < 2350.0) then 3 else (if (Ext_ownship_position_z < 5000.0) then 4 else (if (Ext_ownship_position_z < 10000.0) then 5 else (if (Ext_ownship_position_z < 20000.0) then 6 else (if (Ext_ownship_position_z < 42000.0) then 7 else 8))))))) == 2) then 0.0 else (if (Extf_ident_word64(label "sensitivityLevel" (if ((0.0 <= Ext_ownship_position_z) && (Ext_ownship_position_z < 1000.0)) then 2 else (if (Ext_ownship_position_z < 2350.0) then 3 else (if (Ext_ownship_position_z < 5000.0) then 4 else (if (Ext_ownship_position_z < 10000.0) then 5 else (if (Ext_ownship_position_z < 20000.0) then 6 else (if (Ext_ownship_position_z < 42000.0) then 7 else 8))))))) == 3) then 370.332 else (if (Extf_ident_word64(label "sensitivityLevel" (if ((0.0 <= Ext_ownship_position_z) && (Ext_ownship_position_z < 1000.0)) then 2 else (if (Ext_ownship_position_z < 2350.0) then 3 else (if (Ext_ownship_position_z < 5000.0) then 4 else (if (Ext_ownship_position_z < 10000.0) then 5 else (if (Ext_ownship_position_z < 20000.0) then 6 else (if (Ext_ownship_position_z < 42000.0) then 7 else 8))))))) == 4) then 648.0048 else (if (Extf_ident_word64(label "sensitivityLevel" (if ((0.0 <= Ext_ownship_position_z) && (Ext_ownship_position_z < 1000.0)) then 2 else (if (Ext_ownship_position_z < 2350.0) then 3 else (if (Ext_ownship_position_z < 5000.0) then 4 else (if (Ext_ownship_position_z < 10000.0) then 5 else (if (Ext_ownship_position_z < 20000.0) then 6 else (if (Ext_ownship_position_z < 42000.0) then 7 else 8))))))) == 5) then 1018.6416 else (if (Extf_ident_word64(label "sensitivityLevel" (if ((0.0 <= Ext_ownship_position_z) && (Ext_ownship_position_z < 1000.0)) then 2 else (if (Ext_ownship_position_z < 2350.0) then 3 else (if (Ext_ownship_position_z < 5000.0) then 4 else (if (Ext_ownship_position_z < 10000.0) then 5 else (if (Ext_ownship_position_z < 20000.0) then 6 else (if (Ext_ownship_position_z < 42000.0) then 7 else 8))))))) == 6) then 1481.6328 else (if (Extf_ident_word64(label "sensitivityLevel" (if ((0.0 <= Ext_ownship_position_z) && (Ext_ownship_position_z < 1000.0)) then 2 else (if (Ext_ownship_position_z < 2350.0) then 3 else (if (Ext_ownship_position_z < 5000.0) then 4 else (if (Ext_ownship_position_z < 10000.0) then 5 else (if (Ext_ownship_position_z < 20000.0) then 6 else (if (Ext_ownship_position_z < 42000.0) then 7 else 8))))))) == 7) then 2036.9784000000002 else (if (Extf_ident_word64(label "sensitivityLevel" (if ((0.0 <= Ext_ownship_position_z) && (Ext_ownship_position_z < 1000.0)) then 2 else (if (Ext_ownship_position_z < 2350.0) then 3 else (if (Ext_ownship_position_z < 5000.0) then 4 else (if (Ext_ownship_position_z < 10000.0) then 5 else (if (Ext_ownship_position_z < 20000.0) then 6 else (if (Ext_ownship_position_z < 42000.0) then 7 else 8))))))) == 8) then 2036.9784000000002 else 0.0)))))))))
*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ident_double_11) * (ext_ident_double_19))));
*/
SDouble ext_ident_double_20_arg0(const SDouble ext_ident_double_11,
                                 const SWord64 ext_ident_word64_4,
                                 const SDouble ext_ownship_position_z,
                                 const SWord64 ext_ident_word64_5, const SWord64 ext_ident_word64_6,
                                 const SWord64 ext_ident_word64_7, const SWord64 ext_ident_word64_8,
                                 const SWord64 ext_ident_word64_9,
                                 const SWord64 ext_ident_word64_10,
                                 const SDouble ext_ident_double_19,
                                 const SWord64 ext_ident_word64_12,
                                 const SWord64 ext_ident_word64_13,
                                 const SWord64 ext_ident_word64_14,
                                 const SWord64 ext_ident_word64_15,
                                 const SWord64 ext_ident_word64_16,
                                 const SWord64 ext_ident_word64_17,
                                 const SWord64 ext_ident_word64_18)
{
  const SDouble s0 = ext_ident_double_11;
  const SWord64 s1 = ext_ident_word64_4;
  const SDouble s2 = ext_ownship_position_z;
  const SWord64 s3 = ext_ident_word64_5;
  const SWord64 s4 = ext_ident_word64_6;
  const SWord64 s5 = ext_ident_word64_7;
  const SWord64 s6 = ext_ident_word64_8;
  const SWord64 s7 = ext_ident_word64_9;
  const SWord64 s8 = ext_ident_word64_10;
  const SDouble s9 = ext_ident_double_19;
  const SWord64 s10 = ext_ident_word64_12;
  const SWord64 s11 = ext_ident_word64_13;
  const SWord64 s12 = ext_ident_word64_14;
  const SWord64 s13 = ext_ident_word64_15;
  const SWord64 s14 = ext_ident_word64_16;
  const SWord64 s15 = ext_ident_word64_17;
  const SWord64 s16 = ext_ident_word64_18;
  const SDouble s17 = s0 * s9;
  const SDouble s18 = s17 /* sq */;

  return s18;
}
