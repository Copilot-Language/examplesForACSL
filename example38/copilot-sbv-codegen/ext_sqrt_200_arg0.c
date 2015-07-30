/* File: "ext_sqrt_200_arg0.c". Automatically generated by SBV. Do not edit! */

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
8 [label="const: 6371000.0",color=red1, style=filled]
7 -> 8
9 [label="label: ?ownLong",color=plum, style=filled]
7 -> 9
10 [label="op2: *",color=green4, style=filled]
9 -> 10
11 [label="ext_ownship_longitude",color=cyan1, style=filled]
10 -> 11
12 [label="label: ?deg",color=plum, style=filled]
10 -> 12
13 [label="op2: /",color=green4, style=filled]
12 -> 13
14 [label="label: ?pi",color=plum, style=filled]
13 -> 14
15 [label="const: 3.141592653589793",color=red1, style=filled]
14 -> 15
16 [label="const: 180.0",color=red1, style=filled]
13 -> 16
17 [label="label: ?intPositionX",color=plum, style=filled]
5 -> 17
18 [label="op2: *",color=green4, style=filled]
17 -> 18
19 [label="const: 6371000.0",color=red1, style=filled]
18 -> 19
20 [label="label: ?intLong",color=plum, style=filled]
18 -> 20
21 [label="op2: *",color=green4, style=filled]
20 -> 21
22 [label="ext_intruder_longitude",color=cyan1, style=filled]
21 -> 22
23 [label="label: ?deg",color=plum, style=filled]
21 -> 23
24 [label="op2: /",color=green4, style=filled]
23 -> 24
25 [label="label: ?pi",color=plum, style=filled]
24 -> 25
26 [label="const: 3.141592653589793",color=red1, style=filled]
25 -> 26
27 [label="const: 180.0",color=red1, style=filled]
24 -> 27
28 [label="op2: -",color=green4, style=filled]
4 -> 28
29 [label="label: ?ownPositionX",color=plum, style=filled]
28 -> 29
30 [label="op2: *",color=green4, style=filled]
29 -> 30
31 [label="const: 6371000.0",color=red1, style=filled]
30 -> 31
32 [label="label: ?ownLong",color=plum, style=filled]
30 -> 32
33 [label="op2: *",color=green4, style=filled]
32 -> 33
34 [label="ext_ownship_longitude",color=cyan1, style=filled]
33 -> 34
35 [label="label: ?deg",color=plum, style=filled]
33 -> 35
36 [label="op2: /",color=green4, style=filled]
35 -> 36
37 [label="label: ?pi",color=plum, style=filled]
36 -> 37
38 [label="const: 3.141592653589793",color=red1, style=filled]
37 -> 38
39 [label="const: 180.0",color=red1, style=filled]
36 -> 39
40 [label="label: ?intPositionX",color=plum, style=filled]
28 -> 40
41 [label="op2: *",color=green4, style=filled]
40 -> 41
42 [label="const: 6371000.0",color=red1, style=filled]
41 -> 42
43 [label="label: ?intLong",color=plum, style=filled]
41 -> 43
44 [label="op2: *",color=green4, style=filled]
43 -> 44
45 [label="ext_intruder_longitude",color=cyan1, style=filled]
44 -> 45
46 [label="label: ?deg",color=plum, style=filled]
44 -> 46
47 [label="op2: /",color=green4, style=filled]
46 -> 47
48 [label="label: ?pi",color=plum, style=filled]
47 -> 48
49 [label="const: 3.141592653589793",color=red1, style=filled]
48 -> 49
50 [label="const: 180.0",color=red1, style=filled]
47 -> 50
51 [label="op2: *",color=green4, style=filled]
3 -> 51
52 [label="op2: -",color=green4, style=filled]
51 -> 52
53 [label="label: ?ownPositionY",color=plum, style=filled]
52 -> 53
54 [label="op2: *",color=green4, style=filled]
53 -> 54
55 [label="const: 6371000.0",color=red1, style=filled]
54 -> 55
56 [label="ext_log_193",color=cyan4, style=filled]
54 -> 56
73 [label="label: ?intPositionY",color=plum, style=filled]
52 -> 73
74 [label="op2: *",color=green4, style=filled]
73 -> 74
75 [label="const: 6371000.0",color=red1, style=filled]
74 -> 75
76 [label="ext_log_195",color=cyan4, style=filled]
74 -> 76
93 [label="op2: -",color=green4, style=filled]
51 -> 93
94 [label="label: ?ownPositionY",color=plum, style=filled]
93 -> 94
95 [label="op2: *",color=green4, style=filled]
94 -> 95
96 [label="const: 6371000.0",color=red1, style=filled]
95 -> 96
97 [label="ext_log_197",color=cyan4, style=filled]
95 -> 97
114 [label="label: ?intPositionY",color=plum, style=filled]
93 -> 114
115 [label="op2: *",color=green4, style=filled]
114 -> 115
116 [label="const: 6371000.0",color=red1, style=filled]
115 -> 116
117 [label="ext_log_199",color=cyan4, style=filled]
115 -> 117


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((((((((((((6371000.0) * ((((ext_ownship_longitude) * (((((3.141592653589793)) / (180.0)))))))))) - ((((6371000.0) * ((((ext_intruder_longitude) * (((((3.141592653589793)) / (180.0)))))))))))) * ((((((6371000.0) * ((((ext_ownship_longitude) * (((((3.141592653589793)) / (180.0)))))))))) - ((((6371000.0) * ((((ext_intruder_longitude) * (((((3.141592653589793)) / (180.0)))))))))))))) + ((((((((6371000.0) * (ext_log_193)))) - ((((6371000.0) * (ext_log_195)))))) * ((((((6371000.0) * (ext_log_197)))) - ((((6371000.0) * (ext_log_199))))))))))));
*/
SDouble ext_sqrt_200_arg0(const SDouble ext_ownship_longitude,
                          const SDouble ext_intruder_longitude, const SDouble ext_log_193,
                          const SDouble ext_tan_192, const SDouble ext_ownship_latitude,
                          const SDouble ext_log_195, const SDouble ext_tan_194,
                          const SDouble ext_intruder_latitude, const SDouble ext_log_197,
                          const SDouble ext_tan_196, const SDouble ext_log_199,
                          const SDouble ext_tan_198)
{
  const SDouble s0 = ext_ownship_longitude;
  const SDouble s1 = ext_intruder_longitude;
  const SDouble s2 = ext_log_193;
  const SDouble s5 = ext_log_195;
  const SDouble s8 = ext_log_197;
  const SDouble s10 = ext_log_199;
  const SDouble s14 = s0 * 1.7453292519943295e-2;
  const SDouble s15 = s14 /* ?ownLong */;
  const SDouble s16 = 6371000.0 * s15;
  const SDouble s17 = s16 /* ?ownPositionX */;
  const SDouble s18 = s1 * 1.7453292519943295e-2;
  const SDouble s19 = s18 /* ?intLong */;
  const SDouble s20 = 6371000.0 * s19;
  const SDouble s21 = s20 /* ?intPositionX */;
  const SDouble s22 = s17 - s21;
  const SDouble s23 = s22 * s22;
  const SDouble s24 = s2 * 6371000.0;
  const SDouble s25 = s24 /* ?ownPositionY */;
  const SDouble s26 = s5 * 6371000.0;
  const SDouble s27 = s26 /* ?intPositionY */;
  const SDouble s28 = s25 - s27;
  const SDouble s29 = s8 * 6371000.0;
  const SDouble s30 = s29 /* ?ownPositionY */;
  const SDouble s31 = s10 * 6371000.0;
  const SDouble s32 = s31 /* ?intPositionY */;
  const SDouble s33 = s30 - s32;
  const SDouble s34 = s28 * s33;
  const SDouble s35 = s23 + s34;
  const SDouble s36 = s35 /* ?scalar2dim */;
  const SDouble s37 = s36 /* ?normsq2dim */;

  return s37;
}
