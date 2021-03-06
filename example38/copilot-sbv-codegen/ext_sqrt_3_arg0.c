/* File: "ext_sqrt_3_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="label: ?delta",color=plum, style=filled]
0 -> 1
2 [label="op2: -",color=green4, style=filled]
1 -> 2
3 [label="op2: *",color=green4, style=filled]
2 -> 3
4 [label="op2: *",color=green4, style=filled]
3 -> 4
5 [label="label: ?nm",color=plum, style=filled]
4 -> 5
6 [label="const: 1852.0",color=red1, style=filled]
5 -> 6
7 [label="label: ?nm",color=plum, style=filled]
4 -> 7
8 [label="const: 1852.0",color=red1, style=filled]
7 -> 8
9 [label="label: ?normsq2dim",color=plum, style=filled]
3 -> 9
10 [label="label: ?scalar2dim",color=plum, style=filled]
9 -> 10
11 [label="op2: +",color=green4, style=filled]
10 -> 11
12 [label="op2: *",color=green4, style=filled]
11 -> 12
13 [label="op2: -",color=green4, style=filled]
12 -> 13
14 [label="label: ?ownVelocityX",color=plum, style=filled]
13 -> 14
15 [label="op2: /",color=green4, style=filled]
14 -> 15
16 [label="op2: *",color=green4, style=filled]
15 -> 16
17 [label="ext_ownship_vx",color=cyan1, style=filled]
16 -> 17
18 [label="const: 0.3048",color=red1, style=filled]
16 -> 18
19 [label="const: 1.0",color=red1, style=filled]
15 -> 19
20 [label="label: ?intVelocityX",color=plum, style=filled]
13 -> 20
21 [label="op2: /",color=green4, style=filled]
20 -> 21
22 [label="op2: *",color=green4, style=filled]
21 -> 22
23 [label="ext_intruder_vx",color=cyan1, style=filled]
22 -> 23
24 [label="const: 0.3048",color=red1, style=filled]
22 -> 24
25 [label="const: 1.0",color=red1, style=filled]
21 -> 25
26 [label="op2: -",color=green4, style=filled]
12 -> 26
27 [label="label: ?ownVelocityX",color=plum, style=filled]
26 -> 27
28 [label="op2: /",color=green4, style=filled]
27 -> 28
29 [label="op2: *",color=green4, style=filled]
28 -> 29
30 [label="ext_ownship_vx",color=cyan1, style=filled]
29 -> 30
31 [label="const: 0.3048",color=red1, style=filled]
29 -> 31
32 [label="const: 1.0",color=red1, style=filled]
28 -> 32
33 [label="label: ?intVelocityX",color=plum, style=filled]
26 -> 33
34 [label="op2: /",color=green4, style=filled]
33 -> 34
35 [label="op2: *",color=green4, style=filled]
34 -> 35
36 [label="ext_intruder_vx",color=cyan1, style=filled]
35 -> 36
37 [label="const: 0.3048",color=red1, style=filled]
35 -> 37
38 [label="const: 1.0",color=red1, style=filled]
34 -> 38
39 [label="op2: *",color=green4, style=filled]
11 -> 39
40 [label="op2: -",color=green4, style=filled]
39 -> 40
41 [label="label: ?ownVelocityY",color=plum, style=filled]
40 -> 41
42 [label="op2: /",color=green4, style=filled]
41 -> 42
43 [label="op2: *",color=green4, style=filled]
42 -> 43
44 [label="ext_ownship_vy",color=cyan1, style=filled]
43 -> 44
45 [label="const: 0.3048",color=red1, style=filled]
43 -> 45
46 [label="const: 1.0",color=red1, style=filled]
42 -> 46
47 [label="label: ?intVelocityY",color=plum, style=filled]
40 -> 47
48 [label="op2: /",color=green4, style=filled]
47 -> 48
49 [label="op2: *",color=green4, style=filled]
48 -> 49
50 [label="ext_intruder_vy",color=cyan1, style=filled]
49 -> 50
51 [label="const: 0.3048",color=red1, style=filled]
49 -> 51
52 [label="const: 1.0",color=red1, style=filled]
48 -> 52
53 [label="op2: -",color=green4, style=filled]
39 -> 53
54 [label="label: ?ownVelocityY",color=plum, style=filled]
53 -> 54
55 [label="op2: /",color=green4, style=filled]
54 -> 55
56 [label="op2: *",color=green4, style=filled]
55 -> 56
57 [label="ext_ownship_vy",color=cyan1, style=filled]
56 -> 57
58 [label="const: 0.3048",color=red1, style=filled]
56 -> 58
59 [label="const: 1.0",color=red1, style=filled]
55 -> 59
60 [label="label: ?intVelocityY",color=plum, style=filled]
53 -> 60
61 [label="op2: /",color=green4, style=filled]
60 -> 61
62 [label="op2: *",color=green4, style=filled]
61 -> 62
63 [label="ext_intruder_vy",color=cyan1, style=filled]
62 -> 63
64 [label="const: 0.3048",color=red1, style=filled]
62 -> 64
65 [label="const: 1.0",color=red1, style=filled]
61 -> 65
66 [label="op2: *",color=green4, style=filled]
2 -> 66
67 [label="label: ?det2dim",color=plum, style=filled]
66 -> 67
68 [label="op2: -",color=green4, style=filled]
67 -> 68
69 [label="op2: *",color=green4, style=filled]
68 -> 69
70 [label="op2: -",color=green4, style=filled]
69 -> 70
71 [label="label: ?ownPositionX",color=plum, style=filled]
70 -> 71
72 [label="op2: *",color=green4, style=filled]
71 -> 72
73 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
72 -> 73
74 [label="const: 0.3048",color=red1, style=filled]
72 -> 74
75 [label="label: ?intPositionX",color=plum, style=filled]
70 -> 75
76 [label="op2: *",color=green4, style=filled]
75 -> 76
77 [label="ext_intruder_x_position_ft",color=cyan1, style=filled]
76 -> 77
78 [label="const: 0.3048",color=red1, style=filled]
76 -> 78
79 [label="op2: -",color=green4, style=filled]
69 -> 79
80 [label="label: ?ownVelocityY",color=plum, style=filled]
79 -> 80
81 [label="op2: /",color=green4, style=filled]
80 -> 81
82 [label="op2: *",color=green4, style=filled]
81 -> 82
83 [label="ext_ownship_vy",color=cyan1, style=filled]
82 -> 83
84 [label="const: 0.3048",color=red1, style=filled]
82 -> 84
85 [label="const: 1.0",color=red1, style=filled]
81 -> 85
86 [label="label: ?intVelocityY",color=plum, style=filled]
79 -> 86
87 [label="op2: /",color=green4, style=filled]
86 -> 87
88 [label="op2: *",color=green4, style=filled]
87 -> 88
89 [label="ext_intruder_vy",color=cyan1, style=filled]
88 -> 89
90 [label="const: 0.3048",color=red1, style=filled]
88 -> 90
91 [label="const: 1.0",color=red1, style=filled]
87 -> 91
92 [label="op2: *",color=green4, style=filled]
68 -> 92
93 [label="op2: -",color=green4, style=filled]
92 -> 93
94 [label="label: ?ownVelocityX",color=plum, style=filled]
93 -> 94
95 [label="op2: /",color=green4, style=filled]
94 -> 95
96 [label="op2: *",color=green4, style=filled]
95 -> 96
97 [label="ext_ownship_vx",color=cyan1, style=filled]
96 -> 97
98 [label="const: 0.3048",color=red1, style=filled]
96 -> 98
99 [label="const: 1.0",color=red1, style=filled]
95 -> 99
100 [label="label: ?intVelocityX",color=plum, style=filled]
93 -> 100
101 [label="op2: /",color=green4, style=filled]
100 -> 101
102 [label="op2: *",color=green4, style=filled]
101 -> 102
103 [label="ext_intruder_vx",color=cyan1, style=filled]
102 -> 103
104 [label="const: 0.3048",color=red1, style=filled]
102 -> 104
105 [label="const: 1.0",color=red1, style=filled]
101 -> 105
106 [label="op2: -",color=green4, style=filled]
92 -> 106
107 [label="label: ?ownPositionY",color=plum, style=filled]
106 -> 107
108 [label="op2: *",color=green4, style=filled]
107 -> 108
109 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
108 -> 109
110 [label="const: 0.3048",color=red1, style=filled]
108 -> 110
111 [label="label: ?intPositionY",color=plum, style=filled]
106 -> 111
112 [label="op2: *",color=green4, style=filled]
111 -> 112
113 [label="ext_intruder_y_position_ft",color=cyan1, style=filled]
112 -> 113
114 [label="const: 0.3048",color=red1, style=filled]
112 -> 114
115 [label="label: ?det2dim",color=plum, style=filled]
66 -> 115
116 [label="op2: -",color=green4, style=filled]
115 -> 116
117 [label="op2: *",color=green4, style=filled]
116 -> 117
118 [label="op2: -",color=green4, style=filled]
117 -> 118
119 [label="label: ?ownPositionX",color=plum, style=filled]
118 -> 119
120 [label="op2: *",color=green4, style=filled]
119 -> 120
121 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
120 -> 121
122 [label="const: 0.3048",color=red1, style=filled]
120 -> 122
123 [label="label: ?intPositionX",color=plum, style=filled]
118 -> 123
124 [label="op2: *",color=green4, style=filled]
123 -> 124
125 [label="ext_intruder_x_position_ft",color=cyan1, style=filled]
124 -> 125
126 [label="const: 0.3048",color=red1, style=filled]
124 -> 126
127 [label="op2: -",color=green4, style=filled]
117 -> 127
128 [label="label: ?ownVelocityY",color=plum, style=filled]
127 -> 128
129 [label="op2: /",color=green4, style=filled]
128 -> 129
130 [label="op2: *",color=green4, style=filled]
129 -> 130
131 [label="ext_ownship_vy",color=cyan1, style=filled]
130 -> 131
132 [label="const: 0.3048",color=red1, style=filled]
130 -> 132
133 [label="const: 1.0",color=red1, style=filled]
129 -> 133
134 [label="label: ?intVelocityY",color=plum, style=filled]
127 -> 134
135 [label="op2: /",color=green4, style=filled]
134 -> 135
136 [label="op2: *",color=green4, style=filled]
135 -> 136
137 [label="ext_intruder_vy",color=cyan1, style=filled]
136 -> 137
138 [label="const: 0.3048",color=red1, style=filled]
136 -> 138
139 [label="const: 1.0",color=red1, style=filled]
135 -> 139
140 [label="op2: *",color=green4, style=filled]
116 -> 140
141 [label="op2: -",color=green4, style=filled]
140 -> 141
142 [label="label: ?ownVelocityX",color=plum, style=filled]
141 -> 142
143 [label="op2: /",color=green4, style=filled]
142 -> 143
144 [label="op2: *",color=green4, style=filled]
143 -> 144
145 [label="ext_ownship_vx",color=cyan1, style=filled]
144 -> 145
146 [label="const: 0.3048",color=red1, style=filled]
144 -> 146
147 [label="const: 1.0",color=red1, style=filled]
143 -> 147
148 [label="label: ?intVelocityX",color=plum, style=filled]
141 -> 148
149 [label="op2: /",color=green4, style=filled]
148 -> 149
150 [label="op2: *",color=green4, style=filled]
149 -> 150
151 [label="ext_intruder_vx",color=cyan1, style=filled]
150 -> 151
152 [label="const: 0.3048",color=red1, style=filled]
150 -> 152
153 [label="const: 1.0",color=red1, style=filled]
149 -> 153
154 [label="op2: -",color=green4, style=filled]
140 -> 154
155 [label="label: ?ownPositionY",color=plum, style=filled]
154 -> 155
156 [label="op2: *",color=green4, style=filled]
155 -> 156
157 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
156 -> 157
158 [label="const: 0.3048",color=red1, style=filled]
156 -> 158
159 [label="label: ?intPositionY",color=plum, style=filled]
154 -> 159
160 [label="op2: *",color=green4, style=filled]
159 -> 160
161 [label="ext_intruder_y_position_ft",color=cyan1, style=filled]
160 -> 161
162 [label="const: 0.3048",color=red1, style=filled]
160 -> 162


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (((((((((1852.0)) * ((1852.0)))) * ((((((((((((((ext_ownship_vx) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vx) * (0.3048))) / (1.0)))))) * ((((((((ext_ownship_vx) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vx) * (0.3048))) / (1.0)))))))) + ((((((((((ext_ownship_vy) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vy) * (0.3048))) / (1.0)))))) * ((((((((ext_ownship_vy) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vy) * (0.3048))) / (1.0)))))))))))))) - (((((((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_x_position_ft) * (0.3048)))))) * ((((((((ext_ownship_vy) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vy) * (0.3048))) / (1.0)))))))) - ((((((((((ext_ownship_vx) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vx) * (0.3048))) / (1.0)))))) * ((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_y_position_ft) * (0.3048))))))))))) * (((((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_x_position_ft) * (0.3048)))))) * ((((((((ext_ownship_vy) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vy) * (0.3048))) / (1.0)))))))) - ((((((((((ext_ownship_vx) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vx) * (0.3048))) / (1.0)))))) * ((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_y_position_ft) * (0.3048))))))))))))))));
*/
SDouble ext_sqrt_3_arg0(const SDouble ext_ownship_vx,
                        const SDouble ext_intruder_vx, const SDouble ext_ownship_vy,
                        const SDouble ext_intruder_vy,
                        const SDouble ext_ownship_x_position_ft,
                        const SDouble ext_intruder_x_position_ft,
                        const SDouble ext_intruder_y_position_ft)
{
  const SDouble s0 = ext_ownship_vx;
  const SDouble s1 = ext_intruder_vx;
  const SDouble s2 = ext_ownship_vy;
  const SDouble s3 = ext_intruder_vy;
  const SDouble s4 = ext_ownship_x_position_ft;
  const SDouble s5 = ext_intruder_x_position_ft;
  const SDouble s6 = ext_intruder_y_position_ft;
  const SDouble s9 = s0 * 0.3048;
  const SDouble s11 = s9 / 1.0;
  const SDouble s12 = s11 /* ?ownVelocityX */;
  const SDouble s13 = s1 * 0.3048;
  const SDouble s14 = s13 / 1.0;
  const SDouble s15 = s14 /* ?intVelocityX */;
  const SDouble s16 = s12 - s15;
  const SDouble s17 = s16 * s16;
  const SDouble s18 = s2 * 0.3048;
  const SDouble s19 = s18 / 1.0;
  const SDouble s20 = s19 /* ?ownVelocityY */;
  const SDouble s21 = s3 * 0.3048;
  const SDouble s22 = s21 / 1.0;
  const SDouble s23 = s22 /* ?intVelocityY */;
  const SDouble s24 = s20 - s23;
  const SDouble s25 = s24 * s24;
  const SDouble s26 = s17 + s25;
  const SDouble s27 = s26 /* ?scalar2dim */;
  const SDouble s28 = s27 /* ?normsq2dim */;
  const SDouble s29 = 3429904.0 * s28;
  const SDouble s30 = s4 * 0.3048;
  const SDouble s31 = s30 /* ?ownPositionX */;
  const SDouble s32 = s5 * 0.3048;
  const SDouble s33 = s32 /* ?intPositionX */;
  const SDouble s34 = s31 - s33;
  const SDouble s35 = s24 * s34;
  const SDouble s36 = s30 /* ?ownPositionY */;
  const SDouble s37 = s6 * 0.3048;
  const SDouble s38 = s37 /* ?intPositionY */;
  const SDouble s39 = s36 - s38;
  const SDouble s40 = s16 * s39;
  const SDouble s41 = s35 - s40;
  const SDouble s42 = s41 /* ?det2dim */;
  const SDouble s43 = s42 * s42;
  const SDouble s44 = s29 - s43;
  const SDouble s45 = s44 /* ?delta */;

  return s45;
}
