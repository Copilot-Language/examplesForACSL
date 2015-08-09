/* File: "ext_ident_bool_762_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="label: verticalWCV",color=plum, style=filled]
0 -> 1
2 [label="op2: ||",color=green4, style=filled]
1 -> 2
3 [label="op2: <=",color=green4, style=filled]
2 -> 3
4 [label="op2: *",color=green4, style=filled]
3 -> 4
5 [label="op2: -",color=green4, style=filled]
4 -> 5
6 [label="ext_ident_double_739",color=cyan4, style=filled]
5 -> 6
11 [label="ext_ident_double_740",color=cyan4, style=filled]
5 -> 11
16 [label="ext_ident_double_743",color=cyan4, style=filled]
4 -> 16
30 [label="const: 144.78",color=red1, style=filled]
3 -> 30
31 [label="op2: &&",color=green4, style=filled]
2 -> 31
32 [label="op2: <=",color=green4, style=filled]
31 -> 32
33 [label="const: 0.0",color=red1, style=filled]
32 -> 33
34 [label="ext_ident_double_752",color=cyan4, style=filled]
32 -> 34
96 [label="op2: <=",color=green4, style=filled]
31 -> 96
97 [label="ext_ident_double_761",color=cyan4, style=filled]
96 -> 97
159 [label="const: 30.0",color=red1, style=filled]
96 -> 159


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((((((((((ext_ident_double_739) - (ext_ident_double_740))) * (ext_ident_double_743))) <= (144.78))) || (((((0.0) <= (ext_ident_double_752))) && (((ext_ident_double_761) <= (30.0))))))));
*/
SBool ext_ident_bool_762_arg0(const SDouble ext_ident_double_739,
                              const SDouble ext_ownship_z_position_ft,
                              const SDouble ext_ident_double_740,
                              const SDouble ext_intruder_z_position_ft,
                              const SDouble ext_ident_double_743,
                              const SDouble ext_ident_double_741,
                              const SDouble ext_ident_double_742,
                              const SDouble ext_ident_double_752,
                              const SDouble ext_ident_double_744,
                              const SDouble ext_ident_double_745,
                              const SDouble ext_ident_double_746, const SDouble ext_ownship_vz,
                              const SDouble ext_ident_double_747, const SDouble ext_intruder_vz,
                              const SDouble ext_ident_double_748,
                              const SDouble ext_ident_double_749,
                              const SDouble ext_ident_double_750,
                              const SDouble ext_ident_double_751,
                              const SDouble ext_ident_double_761,
                              const SDouble ext_ident_double_753,
                              const SDouble ext_ident_double_754,
                              const SDouble ext_ident_double_755,
                              const SDouble ext_ident_double_756,
                              const SDouble ext_ident_double_757,
                              const SDouble ext_ident_double_758,
                              const SDouble ext_ident_double_759,
                              const SDouble ext_ident_double_760)
{
  const SDouble s0 = ext_ident_double_739;
  const SDouble s2 = ext_ident_double_740;
  const SDouble s4 = ext_ident_double_743;
  const SDouble s7 = ext_ident_double_752;
  const SDouble s18 = ext_ident_double_761;
  const SDouble s27 = s0 - s2;
  const SDouble s28 = s4 * s27;
  const SBool   s30 = s28 <= 144.78;
  const SBool   s32 = 0.0 <= s7;
  const SBool   s34 = s18 <= 30.0;
  const SBool   s35 = s32 && s34;
  const SBool   s36 = s30 || s35;
  const SBool   s37 = s36 /* verticalWCV */;

  return s37;
}
