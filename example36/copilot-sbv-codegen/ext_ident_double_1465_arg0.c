/* File: "ext_ident_double_1465_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="label: scalar2dim",color=plum, style=filled]
0 -> 1
2 [label="op2: +",color=green4, style=filled]
1 -> 2
3 [label="op2: *",color=green4, style=filled]
2 -> 3
4 [label="op2: -",color=green4, style=filled]
3 -> 4
5 [label="ext_ownship_position_x",color=cyan1, style=filled]
4 -> 5
6 [label="ext_intruder_position_x",color=cyan1, style=filled]
4 -> 6
7 [label="op2: -",color=green4, style=filled]
3 -> 7
8 [label="ext_ownship_velocity_x",color=cyan1, style=filled]
7 -> 8
9 [label="ext_intruder_velocity_x",color=cyan1, style=filled]
7 -> 9
10 [label="op2: *",color=green4, style=filled]
2 -> 10
11 [label="op2: -",color=green4, style=filled]
10 -> 11
12 [label="ext_ownship_position_y",color=cyan1, style=filled]
11 -> 12
13 [label="ext_intruder_position_y",color=cyan1, style=filled]
11 -> 13
14 [label="op2: -",color=green4, style=filled]
10 -> 14
15 [label="ext_ownship_velocity_y",color=cyan1, style=filled]
14 -> 15
16 [label="ext_intruder_velocity_y",color=cyan1, style=filled]
14 -> 16


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((ext_ownship_velocity_x) - (ext_intruder_velocity_x))))) + (((((ext_ownship_position_y) - (ext_intruder_position_y))) * (((ext_ownship_velocity_y) - (ext_intruder_velocity_y))))))));
*/
SDouble ext_ident_double_1465_arg0(const SDouble ext_ownship_position_x,
                                   const SDouble ext_intruder_position_x,
                                   const SDouble ext_ownship_velocity_x,
                                   const SDouble ext_intruder_velocity_x,
                                   const SDouble ext_ownship_position_y,
                                   const SDouble ext_intruder_position_y,
                                   const SDouble ext_ownship_velocity_y,
                                   const SDouble ext_intruder_velocity_y)
{
  const SDouble s0 = ext_ownship_position_x;
  const SDouble s1 = ext_intruder_position_x;
  const SDouble s2 = ext_ownship_velocity_x;
  const SDouble s3 = ext_intruder_velocity_x;
  const SDouble s4 = ext_ownship_position_y;
  const SDouble s5 = ext_intruder_position_y;
  const SDouble s6 = ext_ownship_velocity_y;
  const SDouble s7 = ext_intruder_velocity_y;
  const SDouble s8 = s0 - s1;
  const SDouble s9 = s2 - s3;
  const SDouble s10 = s8 * s9;
  const SDouble s11 = s4 - s5;
  const SDouble s12 = s6 - s7;
  const SDouble s13 = s11 * s12;
  const SDouble s14 = s10 + s13;
  const SDouble s15 = s14 /* scalar2dim */;

  return s15;
}
