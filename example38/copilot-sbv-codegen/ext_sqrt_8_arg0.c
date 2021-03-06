/* File: "ext_sqrt_8_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="label: ?normsq2dim",color=plum, style=filled]
0 -> 1
2 [label="label: ?scalar2dim",color=plum, style=filled]
1 -> 2
3 [label="op2: +",color=green4, style=filled]
2 -> 3
4 [label="op2: *",color=green4, style=filled]
3 -> 4
5 [label="op2: -",color=green4, style=filled]
4 -> 5
6 [label="label: ?ownPositionX",color=plum, style=filled]
5 -> 6
7 [label="op2: *",color=green4, style=filled]
6 -> 7
8 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
7 -> 8
9 [label="const: 0.3048",color=red1, style=filled]
7 -> 9
10 [label="label: ?intPositionX",color=plum, style=filled]
5 -> 10
11 [label="op2: *",color=green4, style=filled]
10 -> 11
12 [label="ext_intruder_x_position_ft",color=cyan1, style=filled]
11 -> 12
13 [label="const: 0.3048",color=red1, style=filled]
11 -> 13
14 [label="op2: -",color=green4, style=filled]
4 -> 14
15 [label="label: ?ownPositionX",color=plum, style=filled]
14 -> 15
16 [label="op2: *",color=green4, style=filled]
15 -> 16
17 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
16 -> 17
18 [label="const: 0.3048",color=red1, style=filled]
16 -> 18
19 [label="label: ?intPositionX",color=plum, style=filled]
14 -> 19
20 [label="op2: *",color=green4, style=filled]
19 -> 20
21 [label="ext_intruder_x_position_ft",color=cyan1, style=filled]
20 -> 21
22 [label="const: 0.3048",color=red1, style=filled]
20 -> 22
23 [label="op2: *",color=green4, style=filled]
3 -> 23
24 [label="op2: -",color=green4, style=filled]
23 -> 24
25 [label="label: ?ownPositionY",color=plum, style=filled]
24 -> 25
26 [label="op2: *",color=green4, style=filled]
25 -> 26
27 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
26 -> 27
28 [label="const: 0.3048",color=red1, style=filled]
26 -> 28
29 [label="label: ?intPositionY",color=plum, style=filled]
24 -> 29
30 [label="op2: *",color=green4, style=filled]
29 -> 30
31 [label="ext_intruder_y_position_ft",color=cyan1, style=filled]
30 -> 31
32 [label="const: 0.3048",color=red1, style=filled]
30 -> 32
33 [label="op2: -",color=green4, style=filled]
23 -> 33
34 [label="label: ?ownPositionY",color=plum, style=filled]
33 -> 34
35 [label="op2: *",color=green4, style=filled]
34 -> 35
36 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
35 -> 36
37 [label="const: 0.3048",color=red1, style=filled]
35 -> 37
38 [label="label: ?intPositionY",color=plum, style=filled]
33 -> 38
39 [label="op2: *",color=green4, style=filled]
38 -> 39
40 [label="ext_intruder_y_position_ft",color=cyan1, style=filled]
39 -> 40
41 [label="const: 0.3048",color=red1, style=filled]
39 -> 41


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((((((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_x_position_ft) * (0.3048)))))) * ((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_x_position_ft) * (0.3048)))))))) + ((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_y_position_ft) * (0.3048)))))) * ((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_y_position_ft) * (0.3048))))))))))));
*/
SDouble ext_sqrt_8_arg0(const SDouble ext_ownship_x_position_ft,
                        const SDouble ext_intruder_x_position_ft,
                        const SDouble ext_intruder_y_position_ft)
{
  const SDouble s0 = ext_ownship_x_position_ft;
  const SDouble s1 = ext_intruder_x_position_ft;
  const SDouble s2 = ext_intruder_y_position_ft;
  const SDouble s4 = s0 * 0.3048;
  const SDouble s5 = s4 /* ?ownPositionX */;
  const SDouble s6 = s1 * 0.3048;
  const SDouble s7 = s6 /* ?intPositionX */;
  const SDouble s8 = s5 - s7;
  const SDouble s9 = s8 * s8;
  const SDouble s10 = s4 /* ?ownPositionY */;
  const SDouble s11 = s2 * 0.3048;
  const SDouble s12 = s11 /* ?intPositionY */;
  const SDouble s13 = s10 - s12;
  const SDouble s14 = s13 * s13;
  const SDouble s15 = s9 + s14;
  const SDouble s16 = s15 /* ?scalar2dim */;
  const SDouble s17 = s16 /* ?normsq2dim */;

  return s17;
}
