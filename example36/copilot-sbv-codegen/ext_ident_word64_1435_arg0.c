/* File: "ext_ident_word64_1435_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="label: sensitivityLevel",color=plum, style=filled]
0 -> 1
2 [label="op3: mux",color=green4, style=filled]
1 -> 2
3 [label="op2: &&",color=green4, style=filled]
2 -> 3
4 [label="op2: <=",color=green4, style=filled]
3 -> 4
5 [label="const: 0.0",color=red1, style=filled]
4 -> 5
6 [label="ext_ownship_position_z",color=cyan1, style=filled]
4 -> 6
7 [label="op2: <",color=green4, style=filled]
3 -> 7
8 [label="ext_ownship_position_z",color=cyan1, style=filled]
7 -> 8
9 [label="const: 1000.0",color=red1, style=filled]
7 -> 9
10 [label="const: 2",color=red1, style=filled]
2 -> 10
11 [label="op3: mux",color=green4, style=filled]
2 -> 11
12 [label="op2: <",color=green4, style=filled]
11 -> 12
13 [label="ext_ownship_position_z",color=cyan1, style=filled]
12 -> 13
14 [label="const: 2350.0",color=red1, style=filled]
12 -> 14
15 [label="const: 3",color=red1, style=filled]
11 -> 15
16 [label="op3: mux",color=green4, style=filled]
11 -> 16
17 [label="op2: <",color=green4, style=filled]
16 -> 17
18 [label="ext_ownship_position_z",color=cyan1, style=filled]
17 -> 18
19 [label="const: 5000.0",color=red1, style=filled]
17 -> 19
20 [label="const: 4",color=red1, style=filled]
16 -> 20
21 [label="op3: mux",color=green4, style=filled]
16 -> 21
22 [label="op2: <",color=green4, style=filled]
21 -> 22
23 [label="ext_ownship_position_z",color=cyan1, style=filled]
22 -> 23
24 [label="const: 10000.0",color=red1, style=filled]
22 -> 24
25 [label="const: 5",color=red1, style=filled]
21 -> 25
26 [label="op3: mux",color=green4, style=filled]
21 -> 26
27 [label="op2: <",color=green4, style=filled]
26 -> 27
28 [label="ext_ownship_position_z",color=cyan1, style=filled]
27 -> 28
29 [label="const: 20000.0",color=red1, style=filled]
27 -> 29
30 [label="const: 6",color=red1, style=filled]
26 -> 30
31 [label="op3: mux",color=green4, style=filled]
26 -> 31
32 [label="op2: <",color=green4, style=filled]
31 -> 32
33 [label="ext_ownship_position_z",color=cyan1, style=filled]
32 -> 33
34 [label="const: 42000.0",color=red1, style=filled]
32 -> 34
35 [label="const: 7",color=red1, style=filled]
31 -> 35
36 [label="const: 8",color=red1, style=filled]
31 -> 36


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((( (((((0.0) <= (ext_ownship_position_z))) && (((ext_ownship_position_z) < (1000.0))))) ? (2) : (( (((ext_ownship_position_z) < (2350.0))) ? (3) : (( (((ext_ownship_position_z) < (5000.0))) ? (4) : (( (((ext_ownship_position_z) < (10000.0))) ? (5) : (( (((ext_ownship_position_z) < (20000.0))) ? (6) : (( (((ext_ownship_position_z) < (42000.0))) ? (7) : (8))))))))))))));
*/
SWord64 ext_ident_word64_1435_arg0(const SDouble ext_ownship_position_z)
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
