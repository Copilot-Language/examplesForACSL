/* File: "ext_ident_word64_108_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*ACSL to write
 label "sensitivityLevel" (if ((0.0 <= Ext_ownship_position_z) && (Ext_ownship_position_z < 1000.0)) then 2 else (if (Ext_ownship_position_z < 2350.0) then 3 else (if (Ext_ownship_position_z < 5000.0) then 4 else (if (Ext_ownship_position_z < 10000.0) then 5 else (if (Ext_ownship_position_z < 20000.0) then 6 else (if (Ext_ownship_position_z < 42000.0) then 7 else 8))))))
*/
/*@
 assigns \nothing;
 ensures \result == ((( (((((0.0) <= (ext_ownship_position_z))) && (((ext_ownship_position_z) < (1000.0))))) ? (2) : (( (((ext_ownship_position_z) < (2350.0))) ? (3) : (( (((ext_ownship_position_z) < (5000.0))) ? (4) : (( (((ext_ownship_position_z) < (10000.0))) ? (5) : (( (((ext_ownship_position_z) < (20000.0))) ? (6) : (( (((ext_ownship_position_z) < (42000.0))) ? (7) : (8))))))))))))));
*/
SWord64 ext_ident_word64_108_arg0(const SDouble ext_ownship_position_z)
{
  const SDouble s0 = ext_ownship_position_z;
  const SBool   s2 = 0.0 <= s0;
  const SBool   s4 = s0 < 1000.0;
  const SBool   s5 = s2 && s4;
  const SBool   s8 = s0 < 2350.0;
  const SBool   s11 = s0 < 5000.0;
  const SBool   s14 = s0 < 10000.0;
  const SBool   s17 = s0 < 20000.0;
  const SBool   s20 = s0 < 42000.0;
  const SWord64 s23 = s20 ? 0x0000000000000007ULL : 0x0000000000000008ULL;
  const SWord64 s24 = s17 ? 0x0000000000000006ULL : s23;
  const SWord64 s25 = s14 ? 0x0000000000000005ULL : s24;
  const SWord64 s26 = s11 ? 0x0000000000000004ULL : s25;
  const SWord64 s27 = s8 ? 0x0000000000000003ULL : s26;
  const SWord64 s28 = s5 ? 0x0000000000000002ULL : s27;
  const SWord64 s29 = s28 /* sensitivityLevel */;

  return s29;
}
