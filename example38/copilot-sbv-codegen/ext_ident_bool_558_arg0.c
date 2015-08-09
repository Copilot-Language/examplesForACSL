/* File: "ext_ident_bool_558_arg0.c". Automatically generated by SBV. Do not edit! */

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
6 [label="ext_ident_double_535",color=cyan4, style=filled]
5 -> 6
11 [label="ext_ident_double_536",color=cyan4, style=filled]
5 -> 11
16 [label="ext_ident_double_539",color=cyan4, style=filled]
4 -> 16
30 [label="const: 144.78",color=red1, style=filled]
3 -> 30
31 [label="op2: &&",color=green4, style=filled]
2 -> 31
32 [label="op2: <=",color=green4, style=filled]
31 -> 32
33 [label="const: 0.0",color=red1, style=filled]
32 -> 33
34 [label="ext_ident_double_548",color=cyan4, style=filled]
32 -> 34
96 [label="op2: <=",color=green4, style=filled]
31 -> 96
97 [label="ext_ident_double_557",color=cyan4, style=filled]
96 -> 97
159 [label="const: 30.0",color=red1, style=filled]
96 -> 159


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((((((((((ext_ident_double_535) - (ext_ident_double_536))) * (ext_ident_double_539))) <= (144.78))) || (((((0.0) <= (ext_ident_double_548))) && (((ext_ident_double_557) <= (30.0))))))));
*/
SBool ext_ident_bool_558_arg0(const SDouble ext_ident_double_535,
                              const SDouble ext_ownship_z_position_ft,
                              const SDouble ext_ident_double_536,
                              const SDouble ext_intruder_z_position_ft,
                              const SDouble ext_ident_double_539,
                              const SDouble ext_ident_double_537,
                              const SDouble ext_ident_double_538,
                              const SDouble ext_ident_double_548,
                              const SDouble ext_ident_double_540,
                              const SDouble ext_ident_double_541,
                              const SDouble ext_ident_double_542, const SDouble ext_ownship_vz,
                              const SDouble ext_ident_double_543, const SDouble ext_intruder_vz,
                              const SDouble ext_ident_double_544,
                              const SDouble ext_ident_double_545,
                              const SDouble ext_ident_double_546,
                              const SDouble ext_ident_double_547,
                              const SDouble ext_ident_double_557,
                              const SDouble ext_ident_double_549,
                              const SDouble ext_ident_double_550,
                              const SDouble ext_ident_double_551,
                              const SDouble ext_ident_double_552,
                              const SDouble ext_ident_double_553,
                              const SDouble ext_ident_double_554,
                              const SDouble ext_ident_double_555,
                              const SDouble ext_ident_double_556)
{
  const SDouble s0 = ext_ident_double_535;
  const SDouble s2 = ext_ident_double_536;
  const SDouble s4 = ext_ident_double_539;
  const SDouble s7 = ext_ident_double_548;
  const SDouble s18 = ext_ident_double_557;
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
