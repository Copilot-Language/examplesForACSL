/* File: "trigger_guard_alert_3D_loss_separation_violation.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 006*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="op1: not",color=green4, style=filled]
0 -> 1
2 [label="op2: ||",color=green4, style=filled]
1 -> 2
3 [label="op2: &&",color=green4, style=filled]
2 -> 3
4 [label="op2: >=",color=green4, style=filled]
3 -> 4
5 [label="op2: +",color=green4, style=filled]
4 -> 5
6 [label="op2: *",color=green4, style=filled]
5 -> 6
7 [label="op2: -",color=green4, style=filled]
6 -> 7
8 [label="ext_ownship_position_x",color=cyan1, style=filled]
7 -> 8
9 [label="ext_intruder_position_x",color=cyan1, style=filled]
7 -> 9
10 [label="op2: -",color=green4, style=filled]
6 -> 10
11 [label="ext_ownship_planned_velocity_x",color=cyan1, style=filled]
10 -> 11
12 [label="ext_intruder_velocity_x",color=cyan1, style=filled]
10 -> 12
13 [label="op2: *",color=green4, style=filled]
5 -> 13
14 [label="op2: -",color=green4, style=filled]
13 -> 14
15 [label="ext_ownship_position_y",color=cyan1, style=filled]
14 -> 15
16 [label="ext_intruder_position_y",color=cyan1, style=filled]
14 -> 16
17 [label="op2: -",color=green4, style=filled]
13 -> 17
18 [label="ext_ownship_planned_velocity_y",color=cyan1, style=filled]
17 -> 18
19 [label="ext_intruder_velocity_y",color=cyan1, style=filled]
17 -> 19
20 [label="op2: +",color=green4, style=filled]
4 -> 20
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
35 [label="op2: >",color=green4, style=filled]
3 -> 35
36 [label="op2: +",color=green4, style=filled]
35 -> 36
37 [label="op2: *",color=green4, style=filled]
36 -> 37
38 [label="op2: -",color=green4, style=filled]
37 -> 38
39 [label="ext_ownship_position_x",color=cyan1, style=filled]
38 -> 39
40 [label="ext_intruder_position_x",color=cyan1, style=filled]
38 -> 40
41 [label="op2: -",color=green4, style=filled]
37 -> 41
42 [label="ext_ownship_planned_velocity_x",color=cyan1, style=filled]
41 -> 42
43 [label="ext_intruder_velocity_x",color=cyan1, style=filled]
41 -> 43
44 [label="op2: *",color=green4, style=filled]
36 -> 44
45 [label="op2: -",color=green4, style=filled]
44 -> 45
46 [label="ext_ownship_position_y",color=cyan1, style=filled]
45 -> 46
47 [label="ext_intruder_position_y",color=cyan1, style=filled]
45 -> 47
48 [label="op2: -",color=green4, style=filled]
44 -> 48
49 [label="ext_ownship_planned_velocity_y",color=cyan1, style=filled]
48 -> 49
50 [label="ext_intruder_velocity_y",color=cyan1, style=filled]
48 -> 50
51 [label="op2: *",color=green4, style=filled]
35 -> 51
52 [label="op2: /",color=green4, style=filled]
51 -> 52
53 [label="ext_sqrt_0",color=cyan4, style=filled]
52 -> 53
69 [label="ext_maximum_time_for_violation",color=cyan1, style=filled]
52 -> 69
70 [label="op2: -",color=green4, style=filled]
51 -> 70
71 [label="ext_minimal_horizontal_separation",color=cyan1, style=filled]
70 -> 71
72 [label="ext_sqrt_1",color=cyan4, style=filled]
70 -> 72
88 [label="op2: &&",color=green4, style=filled]
2 -> 88
89 [label="op2: <",color=green4, style=filled]
88 -> 89
90 [label="op1: abs",color=green4, style=filled]
89 -> 90
91 [label="op2: -",color=green4, style=filled]
90 -> 91
92 [label="ext_ownship_position_z",color=cyan1, style=filled]
91 -> 92
93 [label="ext_intruder_position_z",color=cyan1, style=filled]
91 -> 93
94 [label="ext_minimal_vertical_separation",color=cyan1, style=filled]
89 -> 94
95 [label="op2: &&",color=green4, style=filled]
88 -> 95
96 [label="op2: &&",color=green4, style=filled]
95 -> 96
97 [label="op2: ||",color=green4, style=filled]
96 -> 97
98 [label="op2: <",color=green4, style=filled]
97 -> 98
99 [label="op2: -",color=green4, style=filled]
98 -> 99
100 [label="ext_ownship_planned_velocity_z",color=cyan1, style=filled]
99 -> 100
101 [label="ext_intruder_velocity_z",color=cyan1, style=filled]
99 -> 101
102 [label="const: 0.0",color=red1, style=filled]
98 -> 102
103 [label="op2: >",color=green4, style=filled]
97 -> 103
104 [label="op2: -",color=green4, style=filled]
103 -> 104
105 [label="ext_ownship_planned_velocity_z",color=cyan1, style=filled]
104 -> 105
106 [label="ext_intruder_velocity_z",color=cyan1, style=filled]
104 -> 106
107 [label="const: 0.0",color=red1, style=filled]
103 -> 107
108 [label="op2: &&",color=green4, style=filled]
96 -> 108
109 [label="op2: >=",color=green4, style=filled]
108 -> 109
110 [label="op2: *",color=green4, style=filled]
109 -> 110
111 [label="op2: -",color=green4, style=filled]
110 -> 111
112 [label="ext_ownship_position_z",color=cyan1, style=filled]
111 -> 112
113 [label="ext_intruder_position_z",color=cyan1, style=filled]
111 -> 113
114 [label="op2: -",color=green4, style=filled]
110 -> 114
115 [label="ext_ownship_planned_velocity_z",color=cyan1, style=filled]
114 -> 115
116 [label="ext_intruder_velocity_z",color=cyan1, style=filled]
114 -> 116
117 [label="const: 0.0",color=red1, style=filled]
109 -> 117
118 [label="op2: ||",color=green4, style=filled]
108 -> 118
119 [label="op1: not",color=green4, style=filled]
118 -> 119
120 [label="op2: >=",color=green4, style=filled]
119 -> 120
121 [label="op2: *",color=green4, style=filled]
120 -> 121
122 [label="op2: -",color=green4, style=filled]
121 -> 122
123 [label="ext_ownship_position_z",color=cyan1, style=filled]
122 -> 123
124 [label="ext_intruder_position_z",color=cyan1, style=filled]
122 -> 124
125 [label="op2: -",color=green4, style=filled]
121 -> 125
126 [label="ext_ownship_planned_velocity_z",color=cyan1, style=filled]
125 -> 126
127 [label="ext_intruder_velocity_z",color=cyan1, style=filled]
125 -> 127
128 [label="const: 0.0",color=red1, style=filled]
120 -> 128
129 [label="op3: mux",color=green4, style=filled]
118 -> 129
130 [label="op2: ||",color=green4, style=filled]
129 -> 130
131 [label="op2: <",color=green4, style=filled]
130 -> 131
132 [label="op2: -",color=green4, style=filled]
131 -> 132
133 [label="ext_ownship_velocity_z",color=cyan1, style=filled]
132 -> 133
134 [label="ext_intruder_velocity_z",color=cyan1, style=filled]
132 -> 134
135 [label="const: 0.0",color=red1, style=filled]
131 -> 135
136 [label="op2: >",color=green4, style=filled]
130 -> 136
137 [label="op2: -",color=green4, style=filled]
136 -> 137
138 [label="ext_ownship_velocity_z",color=cyan1, style=filled]
137 -> 138
139 [label="ext_intruder_velocity_z",color=cyan1, style=filled]
137 -> 139
140 [label="const: 0.0",color=red1, style=filled]
136 -> 140
141 [label="op2: >=",color=green4, style=filled]
129 -> 141
142 [label="op2: *",color=green4, style=filled]
141 -> 142
143 [label="op1: signum",color=green4, style=filled]
142 -> 143
144 [label="op2: -",color=green4, style=filled]
143 -> 144
145 [label="ext_ownship_velocity_z",color=cyan1, style=filled]
144 -> 145
146 [label="ext_intruder_velocity_z",color=cyan1, style=filled]
144 -> 146
147 [label="op2: -",color=green4, style=filled]
142 -> 147
148 [label="ext_ownship_planned_velocity_z",color=cyan1, style=filled]
147 -> 148
149 [label="ext_intruder_velocity_z",color=cyan1, style=filled]
147 -> 149
150 [label="const: 0.0",color=red1, style=filled]
141 -> 150
151 [label="op2: >",color=green4, style=filled]
129 -> 151
152 [label="op2: *",color=green4, style=filled]
151 -> 152
153 [label="op3: mux",color=green4, style=filled]
152 -> 153
154 [label="op2: ||",color=green4, style=filled]
153 -> 154
155 [label="op2: <",color=green4, style=filled]
154 -> 155
156 [label="op2: -",color=green4, style=filled]
155 -> 156
157 [label="ext_ownship_position_z",color=cyan1, style=filled]
156 -> 157
158 [label="ext_intruder_position_z",color=cyan1, style=filled]
156 -> 158
159 [label="const: 0.0",color=red1, style=filled]
155 -> 159
160 [label="op2: >",color=green4, style=filled]
154 -> 160
161 [label="op2: -",color=green4, style=filled]
160 -> 161
162 [label="ext_ownship_position_z",color=cyan1, style=filled]
161 -> 162
163 [label="ext_intruder_position_z",color=cyan1, style=filled]
161 -> 163
164 [label="const: 0.0",color=red1, style=filled]
160 -> 164
165 [label="op1: signum",color=green4, style=filled]
153 -> 165
166 [label="op2: -",color=green4, style=filled]
165 -> 166
167 [label="ext_ownship_position_z",color=cyan1, style=filled]
166 -> 167
168 [label="ext_intruder_position_z",color=cyan1, style=filled]
166 -> 168
169 [label="op3: mux",color=green4, style=filled]
153 -> 169
170 [label="op2: ||",color=green4, style=filled]
169 -> 170
171 [label="op2: <",color=green4, style=filled]
170 -> 171
172 [label="op2: -",color=green4, style=filled]
171 -> 172
173 [label="ext_ownship_position_x",color=cyan1, style=filled]
172 -> 173
174 [label="ext_intruder_position_x",color=cyan1, style=filled]
172 -> 174
175 [label="const: 0.0",color=red1, style=filled]
171 -> 175
176 [label="op2: >",color=green4, style=filled]
170 -> 176
177 [label="op2: -",color=green4, style=filled]
176 -> 177
178 [label="ext_ownship_position_x",color=cyan1, style=filled]
177 -> 178
179 [label="ext_intruder_position_x",color=cyan1, style=filled]
177 -> 179
180 [label="const: 0.0",color=red1, style=filled]
176 -> 180
181 [label="op1: signum",color=green4, style=filled]
169 -> 181
182 [label="op2: -",color=green4, style=filled]
181 -> 182
183 [label="ext_ownship_position_x",color=cyan1, style=filled]
182 -> 183
184 [label="ext_intruder_position_x",color=cyan1, style=filled]
182 -> 184
185 [label="op3: mux",color=green4, style=filled]
169 -> 185
186 [label="op2: &&",color=green4, style=filled]
185 -> 186
187 [label="op2: <=",color=green4, style=filled]
186 -> 187
188 [label="op2: -",color=green4, style=filled]
187 -> 188
189 [label="ext_ownship_position_y",color=cyan1, style=filled]
188 -> 189
190 [label="ext_intruder_position_y",color=cyan1, style=filled]
188 -> 190
191 [label="const: 0.0",color=red1, style=filled]
187 -> 191
192 [label="op2: >=",color=green4, style=filled]
186 -> 192
193 [label="op2: -",color=green4, style=filled]
192 -> 193
194 [label="ext_ownship_position_y",color=cyan1, style=filled]
193 -> 194
195 [label="ext_intruder_position_y",color=cyan1, style=filled]
193 -> 195
196 [label="const: 0.0",color=red1, style=filled]
192 -> 196
197 [label="const: 1.0",color=red1, style=filled]
185 -> 197
198 [label="op1: signum",color=green4, style=filled]
185 -> 198
199 [label="op2: -",color=green4, style=filled]
198 -> 199
200 [label="ext_ownship_position_y",color=cyan1, style=filled]
199 -> 200
201 [label="ext_intruder_position_y",color=cyan1, style=filled]
199 -> 201
202 [label="op2: -",color=green4, style=filled]
152 -> 202
203 [label="ext_ownship_planned_velocity_z",color=cyan1, style=filled]
202 -> 203
204 [label="ext_intruder_velocity_z",color=cyan1, style=filled]
202 -> 204
205 [label="const: 0.0",color=red1, style=filled]
151 -> 205
206 [label="op2: >=",color=green4, style=filled]
95 -> 206
207 [label="ext_maximum_time_for_violation",color=cyan1, style=filled]
206 -> 207
208 [label="op2: /",color=green4, style=filled]
206 -> 208
209 [label="op2: -",color=green4, style=filled]
208 -> 209
210 [label="op2: *",color=green4, style=filled]
209 -> 210
211 [label="ext_minimal_vertical_separation",color=cyan1, style=filled]
210 -> 211
212 [label="op1: signum",color=green4, style=filled]
210 -> 212
213 [label="op2: -",color=green4, style=filled]
212 -> 213
214 [label="ext_ownship_velocity_z",color=cyan1, style=filled]
213 -> 214
215 [label="ext_intruder_velocity_z",color=cyan1, style=filled]
213 -> 215
216 [label="op2: -",color=green4, style=filled]
209 -> 216
217 [label="ext_ownship_position_z",color=cyan1, style=filled]
216 -> 217
218 [label="ext_intruder_position_z",color=cyan1, style=filled]
216 -> 218
219 [label="op2: -",color=green4, style=filled]
208 -> 219
220 [label="ext_ownship_velocity_z",color=cyan1, style=filled]
219 -> 220
221 [label="ext_intruder_velocity_z",color=cyan1, style=filled]
219 -> 221


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (! ((((((((((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((ext_ownship_planned_velocity_x) - (ext_intruder_velocity_x))))) + (((((ext_ownship_position_y) - (ext_intruder_position_y))) * (((ext_ownship_planned_velocity_y) - (ext_intruder_velocity_y))))))) >= (((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((ext_ownship_velocity_x) - (ext_intruder_velocity_x))))) + (((((ext_ownship_position_y) - (ext_intruder_position_y))) * (((ext_ownship_velocity_y) - (ext_intruder_velocity_y))))))))) && (((((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((ext_ownship_planned_velocity_x) - (ext_intruder_velocity_x))))) + (((((ext_ownship_position_y) - (ext_intruder_position_y))) * (((ext_ownship_planned_velocity_y) - (ext_intruder_velocity_y))))))) > (((((ext_sqrt_0) / (ext_maximum_time_for_violation))) * (((ext_minimal_horizontal_separation) - (ext_sqrt_1))))))))) || (((((((((ext_ownship_position_z) - (ext_intruder_position_z))) > 0)? (((ext_ownship_position_z) - (ext_intruder_position_z))) : -(((ext_ownship_position_z) - (ext_intruder_position_z)))) < (ext_minimal_vertical_separation))) && (((((((((((ext_ownship_planned_velocity_z) - (ext_intruder_velocity_z))) < (0.0))) || (((((ext_ownship_planned_velocity_z) - (ext_intruder_velocity_z))) > (0.0))))) && (((((((((ext_ownship_position_z) - (ext_intruder_position_z))) * (((ext_ownship_planned_velocity_z) - (ext_intruder_velocity_z))))) >= (0.0))) && (((! ((((((((ext_ownship_position_z) - (ext_intruder_position_z))) * (((ext_ownship_planned_velocity_z) - (ext_intruder_velocity_z))))) >= (0.0))))) || (( (((((((ext_ownship_velocity_z) - (ext_intruder_velocity_z))) < (0.0))) || (((((ext_ownship_velocity_z) - (ext_intruder_velocity_z))) > (0.0))))) ? (((((((((ext_ownship_velocity_z) - (ext_intruder_velocity_z))) > 0)? 1 : ((((ext_ownship_velocity_z) - (ext_intruder_velocity_z))) < 0 ? -1 : (((ext_ownship_velocity_z) - (ext_intruder_velocity_z))))) * (((ext_ownship_planned_velocity_z) - (ext_intruder_velocity_z))))) >= (0.0))) : (((((( (((((((ext_ownship_position_z) - (ext_intruder_position_z))) < (0.0))) || (((((ext_ownship_position_z) - (ext_intruder_position_z))) > (0.0))))) ? (((((ext_ownship_position_z) - (ext_intruder_position_z))) > 0)? 1 : ((((ext_ownship_position_z) - (ext_intruder_position_z))) < 0 ? -1 : (((ext_ownship_position_z) - (ext_intruder_position_z))))) : (( (((((((ext_ownship_position_x) - (ext_intruder_position_x))) < (0.0))) || (((((ext_ownship_position_x) - (ext_intruder_position_x))) > (0.0))))) ? (((((ext_ownship_position_x) - (ext_intruder_position_x))) > 0)? 1 : ((((ext_ownship_position_x) - (ext_intruder_position_x))) < 0 ? -1 : (((ext_ownship_position_x) - (ext_intruder_position_x))))) : (( (((((((ext_ownship_position_y) - (ext_intruder_position_y))) <= (0.0))) && (((((ext_ownship_position_y) - (ext_intruder_position_y))) >= (0.0))))) ? (1.0) : (((((ext_ownship_position_y) - (ext_intruder_position_y))) > 0)? 1 : ((((ext_ownship_position_y) - (ext_intruder_position_y))) < 0 ? -1 : (((ext_ownship_position_y) - (ext_intruder_position_y))))))))))) * (((ext_ownship_planned_velocity_z) - (ext_intruder_velocity_z))))) > (0.0))))))))))) && (((ext_maximum_time_for_violation) >= (((((((ext_minimal_vertical_separation) * (((((ext_ownship_velocity_z) - (ext_intruder_velocity_z))) > 0)? 1 : ((((ext_ownship_velocity_z) - (ext_intruder_velocity_z))) < 0 ? -1 : (((ext_ownship_velocity_z) - (ext_intruder_velocity_z))))))) - (((ext_ownship_position_z) - (ext_intruder_position_z))))) / (((ext_ownship_velocity_z) - (ext_intruder_velocity_z)))))))))))))));
*/
SBool trigger_guard_alert_3D_loss_separation_violation(const SDouble ext_ownship_position_x,
                                                       const SDouble ext_intruder_position_x,
                                                       const SDouble ext_ownship_planned_velocity_x,
                                                       const SDouble ext_intruder_velocity_x,
                                                       const SDouble ext_ownship_position_y,
                                                       const SDouble ext_intruder_position_y,
                                                       const SDouble ext_ownship_planned_velocity_y,
                                                       const SDouble ext_intruder_velocity_y,
                                                       const SDouble ext_ownship_velocity_x,
                                                       const SDouble ext_ownship_velocity_y,
                                                       const SDouble ext_sqrt_0,
                                                       const SDouble ext_maximum_time_for_violation,
                                                       const SDouble ext_minimal_horizontal_separation,
                                                       const SDouble ext_sqrt_1,
                                                       const SDouble ext_ownship_position_z,
                                                       const SDouble ext_intruder_position_z,
                                                       const SDouble ext_minimal_vertical_separation,
                                                       const SDouble ext_ownship_planned_velocity_z,
                                                       const SDouble ext_intruder_velocity_z,
                                                       const SDouble ext_ownship_velocity_z)
{
  const SDouble s0 = ext_ownship_position_x;
  const SDouble s1 = ext_intruder_position_x;
  const SDouble s2 = ext_ownship_planned_velocity_x;
  const SDouble s3 = ext_intruder_velocity_x;
  const SDouble s4 = ext_ownship_position_y;
  const SDouble s5 = ext_intruder_position_y;
  const SDouble s6 = ext_ownship_planned_velocity_y;
  const SDouble s7 = ext_intruder_velocity_y;
  const SDouble s8 = ext_ownship_velocity_x;
  const SDouble s9 = ext_ownship_velocity_y;
  const SDouble s10 = ext_sqrt_0;
  const SDouble s11 = ext_maximum_time_for_violation;
  const SDouble s12 = ext_minimal_horizontal_separation;
  const SDouble s13 = ext_sqrt_1;
  const SDouble s14 = ext_ownship_position_z;
  const SDouble s15 = ext_intruder_position_z;
  const SDouble s16 = ext_minimal_vertical_separation;
  const SDouble s17 = ext_ownship_planned_velocity_z;
  const SDouble s18 = ext_intruder_velocity_z;
  const SDouble s19 = ext_ownship_velocity_z;
  const SDouble s20 = s0 - s1;
  const SDouble s21 = s2 - s3;
  const SDouble s22 = s20 * s21;
  const SDouble s23 = s4 - s5;
  const SDouble s24 = s6 - s7;
  const SDouble s25 = s23 * s24;
  const SDouble s26 = s22 + s25;
  const SDouble s27 = s8 - s3;
  const SDouble s28 = s20 * s27;
  const SDouble s29 = s9 - s7;
  const SDouble s30 = s23 * s29;
  const SDouble s31 = s28 + s30;
  const SBool   s32 = s26 >= s31;
  const SDouble s33 = s10 / s11;
  const SDouble s34 = s12 - s13;
  const SDouble s35 = s33 * s34;
  const SBool   s36 = s26 > s35;
  const SBool   s37 = s32 && s36;
  const SDouble s38 = s14 - s15;
  const SDouble s39 = fabs(s38);
  const SBool   s40 = s39 < s16;
  const SDouble s41 = s17 - s18;
  const SBool   s43 = s41 < 0.0;
  const SBool   s44 = s41 > 0.0;
  const SBool   s45 = s43 || s44;
  const SDouble s46 = s38 * s41;
  const SBool   s47 = s46 >= 0.0;
  const SBool   s48 = !s47;
  const SDouble s49 = s19 - s18;
  const SBool   s50 = s49 < 0.0;
  const SBool   s51 = s49 > 0.0;
  const SBool   s52 = s50 || s51;
  const SDouble s55 = s50 ? -1.0 : s49;
  const SDouble s56 = s51 ? 1.0 : s55;
  const SDouble s57 = s41 * s56;
  const SBool   s58 = s57 >= 0.0;
  const SBool   s59 = s38 < 0.0;
  const SBool   s60 = s38 > 0.0;
  const SBool   s61 = s59 || s60;
  const SDouble s62 = s59 ? -1.0 : s38;
  const SDouble s63 = s60 ? 1.0 : s62;
  const SBool   s64 = s20 < 0.0;
  const SBool   s65 = s20 > 0.0;
  const SBool   s66 = s64 || s65;
  const SDouble s67 = s64 ? -1.0 : s20;
  const SDouble s68 = s65 ? 1.0 : s67;
  const SBool   s69 = s23 <= 0.0;
  const SBool   s70 = s23 >= 0.0;
  const SBool   s71 = s69 && s70;
  const SBool   s72 = s23 > 0.0;
  const SBool   s73 = s23 < 0.0;
  const SDouble s74 = s73 ? -1.0 : s23;
  const SDouble s75 = s72 ? 1.0 : s74;
  const SDouble s76 = s71 ? 1.0 : s75;
  const SDouble s77 = s66 ? s68 : s76;
  const SDouble s78 = s61 ? s63 : s77;
  const SDouble s79 = s41 * s78;
  const SBool   s80 = s79 > 0.0;
  const SBool   s81 = s52 ? s58 : s80;
  const SBool   s82 = s48 || s81;
  const SBool   s83 = s47 && s82;
  const SBool   s84 = s45 && s83;
  const SDouble s85 = s16 * s56;
  const SDouble s86 = s85 - s38;
  const SDouble s87 = s86 / s49;
  const SBool   s88 = s11 >= s87;
  const SBool   s89 = s84 && s88;
  const SBool   s90 = s40 && s89;
  const SBool   s91 = s37 || s90;
  const SBool   s92 = !s91;

  return s92;
}
