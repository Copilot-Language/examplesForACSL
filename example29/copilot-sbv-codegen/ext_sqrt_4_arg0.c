/* File: "ext_sqrt_4_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="op2: -",color=green4, style=filled]
0 -> 1
2 [label="op2: *",color=green4, style=filled]
1 -> 2
3 [label="label: ?thetaVert_part2.1",color=plum, style=filled]
2 -> 3
4 [label="op2: +",color=green4, style=filled]
3 -> 4
5 [label="op2: *",color=green4, style=filled]
4 -> 5
6 [label="op2: -",color=green4, style=filled]
5 -> 6
7 [label="ext_ownship_position_x",color=cyan1, style=filled]
6 -> 7
8 [label="ext_intruder_position_x",color=cyan1, style=filled]
6 -> 8
9 [label="op2: -",color=green4, style=filled]
5 -> 9
10 [label="ext_ownship_velocity_x",color=cyan1, style=filled]
9 -> 10
11 [label="ext_intruder_velocity_x",color=cyan1, style=filled]
9 -> 11
12 [label="op2: *",color=green4, style=filled]
4 -> 12
13 [label="op2: -",color=green4, style=filled]
12 -> 13
14 [label="ext_ownship_position_y",color=cyan1, style=filled]
13 -> 14
15 [label="ext_intruder_position_y",color=cyan1, style=filled]
13 -> 15
16 [label="op2: -",color=green4, style=filled]
12 -> 16
17 [label="ext_ownship_velocity_y",color=cyan1, style=filled]
16 -> 17
18 [label="ext_intruder_velocity_y",color=cyan1, style=filled]
16 -> 18
19 [label="label: ?thetaVert_part2.2",color=plum, style=filled]
2 -> 19
20 [label="op2: +",color=green4, style=filled]
19 -> 20
21 [label="op2: *",color=green4, style=filled]
20 -> 21
22 [label="op2: -",color=green4, style=filled]
21 -> 22
23 [label="ext_ownship_position_x",color=cyan1, style=filled]
22 -> 23
24 [label="ext_intruder_position_x",color=cyan1, style=filled]
22 -> 24
25 [label="op2: -",color=green4, style=filled]
21 -> 25
26 [label="ext_ownship_velocity_x",color=cyan1, style=filled]
25 -> 26
27 [label="ext_intruder_velocity_x",color=cyan1, style=filled]
25 -> 27
28 [label="op2: *",color=green4, style=filled]
20 -> 28
29 [label="op2: -",color=green4, style=filled]
28 -> 29
30 [label="ext_ownship_position_y",color=cyan1, style=filled]
29 -> 30
31 [label="ext_intruder_position_y",color=cyan1, style=filled]
29 -> 31
32 [label="op2: -",color=green4, style=filled]
28 -> 32
33 [label="ext_ownship_velocity_y",color=cyan1, style=filled]
32 -> 33
34 [label="ext_intruder_velocity_y",color=cyan1, style=filled]
32 -> 34
35 [label="label: ?thetaVert_part2.3",color=plum, style=filled]
1 -> 35
36 [label="op2: *",color=green4, style=filled]
35 -> 36
37 [label="label: ?thetaVert_part2.3.1",color=plum, style=filled]
36 -> 37
38 [label="label: ?normsq2dim",color=plum, style=filled]
37 -> 38
39 [label="op2: +",color=green4, style=filled]
38 -> 39
40 [label="op2: *",color=green4, style=filled]
39 -> 40
41 [label="op2: -",color=green4, style=filled]
40 -> 41
42 [label="ext_ownship_velocity_x",color=cyan1, style=filled]
41 -> 42
43 [label="ext_intruder_velocity_x",color=cyan1, style=filled]
41 -> 43
44 [label="op2: -",color=green4, style=filled]
40 -> 44
45 [label="ext_ownship_velocity_x",color=cyan1, style=filled]
44 -> 45
46 [label="ext_intruder_velocity_x",color=cyan1, style=filled]
44 -> 46
47 [label="op2: *",color=green4, style=filled]
39 -> 47
48 [label="op2: -",color=green4, style=filled]
47 -> 48
49 [label="ext_ownship_velocity_y",color=cyan1, style=filled]
48 -> 49
50 [label="ext_intruder_velocity_y",color=cyan1, style=filled]
48 -> 50
51 [label="op2: -",color=green4, style=filled]
47 -> 51
52 [label="ext_ownship_velocity_y",color=cyan1, style=filled]
51 -> 52
53 [label="ext_intruder_velocity_y",color=cyan1, style=filled]
51 -> 53
54 [label="label: ?thetaVert_part2.3.2",color=plum, style=filled]
36 -> 54
55 [label="op2: -",color=green4, style=filled]
54 -> 55
56 [label="label: ?normsq2dim",color=plum, style=filled]
55 -> 56
57 [label="op2: +",color=green4, style=filled]
56 -> 57
58 [label="op2: *",color=green4, style=filled]
57 -> 58
59 [label="op2: -",color=green4, style=filled]
58 -> 59
60 [label="ext_ownship_position_x",color=cyan1, style=filled]
59 -> 60
61 [label="ext_intruder_position_x",color=cyan1, style=filled]
59 -> 61
62 [label="op2: -",color=green4, style=filled]
58 -> 62
63 [label="ext_ownship_position_x",color=cyan1, style=filled]
62 -> 63
64 [label="ext_intruder_position_x",color=cyan1, style=filled]
62 -> 64
65 [label="op2: *",color=green4, style=filled]
57 -> 65
66 [label="op2: -",color=green4, style=filled]
65 -> 66
67 [label="ext_ownship_position_y",color=cyan1, style=filled]
66 -> 67
68 [label="ext_intruder_position_y",color=cyan1, style=filled]
66 -> 68
69 [label="op2: -",color=green4, style=filled]
65 -> 69
70 [label="ext_ownship_position_y",color=cyan1, style=filled]
69 -> 70
71 [label="ext_intruder_position_y",color=cyan1, style=filled]
69 -> 71
72 [label="op2: *",color=green4, style=filled]
55 -> 72
73 [label="ext_minimal_horizontal_separation",color=cyan1, style=filled]
72 -> 73
74 [label="ext_minimal_horizontal_separation",color=cyan1, style=filled]
72 -> 74


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((((((((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((ext_ownship_velocity_x) - (ext_intruder_velocity_x))))) + (((((ext_ownship_position_y) - (ext_intruder_position_y))) * (((ext_ownship_velocity_y) - (ext_intruder_velocity_y)))))))) * ((((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((ext_ownship_velocity_x) - (ext_intruder_velocity_x))))) + (((((ext_ownship_position_y) - (ext_intruder_position_y))) * (((ext_ownship_velocity_y) - (ext_intruder_velocity_y)))))))))) - ((((((((((((ext_ownship_velocity_x) - (ext_intruder_velocity_x))) * (((ext_ownship_velocity_x) - (ext_intruder_velocity_x))))) + (((((ext_ownship_velocity_y) - (ext_intruder_velocity_y))) * (((ext_ownship_velocity_y) - (ext_intruder_velocity_y))))))))) * (((((((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((ext_ownship_position_x) - (ext_intruder_position_x))))) + (((((ext_ownship_position_y) - (ext_intruder_position_y))) * (((ext_ownship_position_y) - (ext_intruder_position_y)))))))) - (((ext_minimal_horizontal_separation) * (ext_minimal_horizontal_separation)))))))))));
*/
SDouble ext_sqrt_4_arg0(const SDouble ext_ownship_position_x,
                        const SDouble ext_intruder_position_x,
                        const SDouble ext_ownship_velocity_x,
                        const SDouble ext_intruder_velocity_x,
                        const SDouble ext_ownship_position_y,
                        const SDouble ext_intruder_position_y,
                        const SDouble ext_ownship_velocity_y,
                        const SDouble ext_intruder_velocity_y,
                        const SDouble ext_minimal_horizontal_separation)
{
  const SDouble s0 = ext_ownship_position_x;
  const SDouble s1 = ext_intruder_position_x;
  const SDouble s2 = ext_ownship_velocity_x;
  const SDouble s3 = ext_intruder_velocity_x;
  const SDouble s4 = ext_ownship_position_y;
  const SDouble s5 = ext_intruder_position_y;
  const SDouble s6 = ext_ownship_velocity_y;
  const SDouble s7 = ext_intruder_velocity_y;
  const SDouble s8 = ext_minimal_horizontal_separation;
  const SDouble s9 = s0 - s1;
  const SDouble s10 = s2 - s3;
  const SDouble s11 = s9 * s10;
  const SDouble s12 = s4 - s5;
  const SDouble s13 = s6 - s7;
  const SDouble s14 = s12 * s13;
  const SDouble s15 = s11 + s14;
  const SDouble s16 = s15 /* ?thetaVert_part2.1 */;
  const SDouble s17 = s15 /* ?thetaVert_part2.2 */;
  const SDouble s18 = s16 * s17;
  const SDouble s19 = s10 * s10;
  const SDouble s20 = s13 * s13;
  const SDouble s21 = s19 + s20;
  const SDouble s22 = s21 /* ?normsq2dim */;
  const SDouble s23 = s22 /* ?thetaVert_part2.3.1 */;
  const SDouble s24 = s9 * s9;
  const SDouble s25 = s12 * s12;
  const SDouble s26 = s24 + s25;
  const SDouble s27 = s26 /* ?normsq2dim */;
  const SDouble s28 = s8 * s8;
  const SDouble s29 = s27 - s28;
  const SDouble s30 = s29 /* ?thetaVert_part2.3.2 */;
  const SDouble s31 = s23 * s30;
  const SDouble s32 = s31 /* ?thetaVert_part2.3 */;
  const SDouble s33 = s18 - s32;

  return s33;
}
