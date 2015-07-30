/* File: "ext_sqrt_117_arg0.c". Automatically generated by SBV. Do not edit! */

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
5 [label="op2: +",color=green4, style=filled]
4 -> 5
6 [label="op2: -",color=green4, style=filled]
5 -> 6
7 [label="label: ?ownPositionX",color=plum, style=filled]
6 -> 7
8 [label="op2: *",color=green4, style=filled]
7 -> 8
9 [label="const: 6371000.0",color=red1, style=filled]
8 -> 9
10 [label="label: ?ownLong",color=plum, style=filled]
8 -> 10
11 [label="op2: *",color=green4, style=filled]
10 -> 11
12 [label="ext_ownship_longitude",color=cyan1, style=filled]
11 -> 12
13 [label="label: ?deg",color=plum, style=filled]
11 -> 13
14 [label="op2: /",color=green4, style=filled]
13 -> 14
15 [label="label: ?pi",color=plum, style=filled]
14 -> 15
16 [label="const: 3.141592653589793",color=red1, style=filled]
15 -> 16
17 [label="const: 180.0",color=red1, style=filled]
14 -> 17
18 [label="label: ?intPositionX",color=plum, style=filled]
6 -> 18
19 [label="op2: *",color=green4, style=filled]
18 -> 19
20 [label="const: 6371000.0",color=red1, style=filled]
19 -> 20
21 [label="label: ?intLong",color=plum, style=filled]
19 -> 21
22 [label="op2: *",color=green4, style=filled]
21 -> 22
23 [label="ext_intruder_longitude",color=cyan1, style=filled]
22 -> 23
24 [label="label: ?deg",color=plum, style=filled]
22 -> 24
25 [label="op2: /",color=green4, style=filled]
24 -> 25
26 [label="label: ?pi",color=plum, style=filled]
25 -> 26
27 [label="const: 3.141592653589793",color=red1, style=filled]
26 -> 27
28 [label="const: 180.0",color=red1, style=filled]
25 -> 28
29 [label="op2: *",color=green4, style=filled]
5 -> 29
30 [label="label: ?tcpa",color=plum, style=filled]
29 -> 30
31 [label="op3: mux",color=green4, style=filled]
30 -> 31
32 [label="op2: &&",color=green4, style=filled]
31 -> 32
33 [label="op2: ==",color=green4, style=filled]
32 -> 33
34 [label="op2: -",color=green4, style=filled]
33 -> 34
35 [label="label: ?ownVelocityX",color=plum, style=filled]
34 -> 35
36 [label="ext_ownship_vx",color=cyan1, style=filled]
35 -> 36
37 [label="label: ?intVelocityX",color=plum, style=filled]
34 -> 37
38 [label="ext_intruder_vx",color=cyan1, style=filled]
37 -> 38
39 [label="const: 0.0",color=red1, style=filled]
33 -> 39
40 [label="op2: ==",color=green4, style=filled]
32 -> 40
41 [label="op2: -",color=green4, style=filled]
40 -> 41
42 [label="label: ?ownVelocityY",color=plum, style=filled]
41 -> 42
43 [label="ext_ownship_vy",color=cyan1, style=filled]
42 -> 43
44 [label="label: ?intVelocityY",color=plum, style=filled]
41 -> 44
45 [label="ext_intruder_vy",color=cyan1, style=filled]
44 -> 45
46 [label="const: 0.0",color=red1, style=filled]
40 -> 46
47 [label="const: 0.0",color=red1, style=filled]
31 -> 47
48 [label="op2: /",color=green4, style=filled]
31 -> 48
49 [label="op2: -",color=green4, style=filled]
48 -> 49
50 [label="const: 0.0",color=red1, style=filled]
49 -> 50
51 [label="label: ?scalar2dim",color=plum, style=filled]
49 -> 51
52 [label="op2: +",color=green4, style=filled]
51 -> 52
53 [label="op2: *",color=green4, style=filled]
52 -> 53
54 [label="op2: -",color=green4, style=filled]
53 -> 54
55 [label="label: ?ownPositionX",color=plum, style=filled]
54 -> 55
56 [label="op2: *",color=green4, style=filled]
55 -> 56
57 [label="const: 6371000.0",color=red1, style=filled]
56 -> 57
58 [label="label: ?ownLong",color=plum, style=filled]
56 -> 58
59 [label="op2: *",color=green4, style=filled]
58 -> 59
60 [label="ext_ownship_longitude",color=cyan1, style=filled]
59 -> 60
61 [label="label: ?deg",color=plum, style=filled]
59 -> 61
62 [label="op2: /",color=green4, style=filled]
61 -> 62
63 [label="label: ?pi",color=plum, style=filled]
62 -> 63
64 [label="const: 3.141592653589793",color=red1, style=filled]
63 -> 64
65 [label="const: 180.0",color=red1, style=filled]
62 -> 65
66 [label="label: ?intPositionX",color=plum, style=filled]
54 -> 66
67 [label="op2: *",color=green4, style=filled]
66 -> 67
68 [label="const: 6371000.0",color=red1, style=filled]
67 -> 68
69 [label="label: ?intLong",color=plum, style=filled]
67 -> 69
70 [label="op2: *",color=green4, style=filled]
69 -> 70
71 [label="ext_intruder_longitude",color=cyan1, style=filled]
70 -> 71
72 [label="label: ?deg",color=plum, style=filled]
70 -> 72
73 [label="op2: /",color=green4, style=filled]
72 -> 73
74 [label="label: ?pi",color=plum, style=filled]
73 -> 74
75 [label="const: 3.141592653589793",color=red1, style=filled]
74 -> 75
76 [label="const: 180.0",color=red1, style=filled]
73 -> 76
77 [label="op2: -",color=green4, style=filled]
53 -> 77
78 [label="label: ?ownVelocityX",color=plum, style=filled]
77 -> 78
79 [label="ext_ownship_vx",color=cyan1, style=filled]
78 -> 79
80 [label="label: ?intVelocityX",color=plum, style=filled]
77 -> 80
81 [label="ext_intruder_vx",color=cyan1, style=filled]
80 -> 81
82 [label="op2: *",color=green4, style=filled]
52 -> 82
83 [label="op2: -",color=green4, style=filled]
82 -> 83
84 [label="label: ?ownPositionY",color=plum, style=filled]
83 -> 84
85 [label="op2: *",color=green4, style=filled]
84 -> 85
86 [label="const: 6371000.0",color=red1, style=filled]
85 -> 86
87 [label="ext_log_94",color=cyan4, style=filled]
85 -> 87
104 [label="label: ?intPositionY",color=plum, style=filled]
83 -> 104
105 [label="op2: *",color=green4, style=filled]
104 -> 105
106 [label="const: 6371000.0",color=red1, style=filled]
105 -> 106
107 [label="ext_log_96",color=cyan4, style=filled]
105 -> 107
124 [label="op2: -",color=green4, style=filled]
82 -> 124
125 [label="label: ?ownVelocityY",color=plum, style=filled]
124 -> 125
126 [label="ext_ownship_vy",color=cyan1, style=filled]
125 -> 126
127 [label="label: ?intVelocityY",color=plum, style=filled]
124 -> 127
128 [label="ext_intruder_vy",color=cyan1, style=filled]
127 -> 128
129 [label="label: ?normsq2dim",color=plum, style=filled]
48 -> 129
130 [label="label: ?scalar2dim",color=plum, style=filled]
129 -> 130
131 [label="op2: +",color=green4, style=filled]
130 -> 131
132 [label="op2: *",color=green4, style=filled]
131 -> 132
133 [label="op2: -",color=green4, style=filled]
132 -> 133
134 [label="label: ?ownVelocityX",color=plum, style=filled]
133 -> 134
135 [label="ext_ownship_vx",color=cyan1, style=filled]
134 -> 135
136 [label="label: ?intVelocityX",color=plum, style=filled]
133 -> 136
137 [label="ext_intruder_vx",color=cyan1, style=filled]
136 -> 137
138 [label="op2: -",color=green4, style=filled]
132 -> 138
139 [label="label: ?ownVelocityX",color=plum, style=filled]
138 -> 139
140 [label="ext_ownship_vx",color=cyan1, style=filled]
139 -> 140
141 [label="label: ?intVelocityX",color=plum, style=filled]
138 -> 141
142 [label="ext_intruder_vx",color=cyan1, style=filled]
141 -> 142
143 [label="op2: *",color=green4, style=filled]
131 -> 143
144 [label="op2: -",color=green4, style=filled]
143 -> 144
145 [label="label: ?ownVelocityY",color=plum, style=filled]
144 -> 145
146 [label="ext_ownship_vy",color=cyan1, style=filled]
145 -> 146
147 [label="label: ?intVelocityY",color=plum, style=filled]
144 -> 147
148 [label="ext_intruder_vy",color=cyan1, style=filled]
147 -> 148
149 [label="op2: -",color=green4, style=filled]
143 -> 149
150 [label="label: ?ownVelocityY",color=plum, style=filled]
149 -> 150
151 [label="ext_ownship_vy",color=cyan1, style=filled]
150 -> 151
152 [label="label: ?intVelocityY",color=plum, style=filled]
149 -> 152
153 [label="ext_intruder_vy",color=cyan1, style=filled]
152 -> 153
154 [label="op2: -",color=green4, style=filled]
29 -> 154
155 [label="label: ?ownVelocityX",color=plum, style=filled]
154 -> 155
156 [label="ext_ownship_vx",color=cyan1, style=filled]
155 -> 156
157 [label="label: ?intVelocityX",color=plum, style=filled]
154 -> 157
158 [label="ext_intruder_vx",color=cyan1, style=filled]
157 -> 158
159 [label="op2: +",color=green4, style=filled]
4 -> 159
160 [label="op2: -",color=green4, style=filled]
159 -> 160
161 [label="label: ?ownPositionX",color=plum, style=filled]
160 -> 161
162 [label="op2: *",color=green4, style=filled]
161 -> 162
163 [label="const: 6371000.0",color=red1, style=filled]
162 -> 163
164 [label="label: ?ownLong",color=plum, style=filled]
162 -> 164
165 [label="op2: *",color=green4, style=filled]
164 -> 165
166 [label="ext_ownship_longitude",color=cyan1, style=filled]
165 -> 166
167 [label="label: ?deg",color=plum, style=filled]
165 -> 167
168 [label="op2: /",color=green4, style=filled]
167 -> 168
169 [label="label: ?pi",color=plum, style=filled]
168 -> 169
170 [label="const: 3.141592653589793",color=red1, style=filled]
169 -> 170
171 [label="const: 180.0",color=red1, style=filled]
168 -> 171
172 [label="label: ?intPositionX",color=plum, style=filled]
160 -> 172
173 [label="op2: *",color=green4, style=filled]
172 -> 173
174 [label="const: 6371000.0",color=red1, style=filled]
173 -> 174
175 [label="label: ?intLong",color=plum, style=filled]
173 -> 175
176 [label="op2: *",color=green4, style=filled]
175 -> 176
177 [label="ext_intruder_longitude",color=cyan1, style=filled]
176 -> 177
178 [label="label: ?deg",color=plum, style=filled]
176 -> 178
179 [label="op2: /",color=green4, style=filled]
178 -> 179
180 [label="label: ?pi",color=plum, style=filled]
179 -> 180
181 [label="const: 3.141592653589793",color=red1, style=filled]
180 -> 181
182 [label="const: 180.0",color=red1, style=filled]
179 -> 182
183 [label="op2: *",color=green4, style=filled]
159 -> 183
184 [label="label: ?tcpa",color=plum, style=filled]
183 -> 184
185 [label="op3: mux",color=green4, style=filled]
184 -> 185
186 [label="op2: &&",color=green4, style=filled]
185 -> 186
187 [label="op2: ==",color=green4, style=filled]
186 -> 187
188 [label="op2: -",color=green4, style=filled]
187 -> 188
189 [label="label: ?ownVelocityX",color=plum, style=filled]
188 -> 189
190 [label="ext_ownship_vx",color=cyan1, style=filled]
189 -> 190
191 [label="label: ?intVelocityX",color=plum, style=filled]
188 -> 191
192 [label="ext_intruder_vx",color=cyan1, style=filled]
191 -> 192
193 [label="const: 0.0",color=red1, style=filled]
187 -> 193
194 [label="op2: ==",color=green4, style=filled]
186 -> 194
195 [label="op2: -",color=green4, style=filled]
194 -> 195
196 [label="label: ?ownVelocityY",color=plum, style=filled]
195 -> 196
197 [label="ext_ownship_vy",color=cyan1, style=filled]
196 -> 197
198 [label="label: ?intVelocityY",color=plum, style=filled]
195 -> 198
199 [label="ext_intruder_vy",color=cyan1, style=filled]
198 -> 199
200 [label="const: 0.0",color=red1, style=filled]
194 -> 200
201 [label="const: 0.0",color=red1, style=filled]
185 -> 201
202 [label="op2: /",color=green4, style=filled]
185 -> 202
203 [label="op2: -",color=green4, style=filled]
202 -> 203
204 [label="const: 0.0",color=red1, style=filled]
203 -> 204
205 [label="label: ?scalar2dim",color=plum, style=filled]
203 -> 205
206 [label="op2: +",color=green4, style=filled]
205 -> 206
207 [label="op2: *",color=green4, style=filled]
206 -> 207
208 [label="op2: -",color=green4, style=filled]
207 -> 208
209 [label="label: ?ownPositionX",color=plum, style=filled]
208 -> 209
210 [label="op2: *",color=green4, style=filled]
209 -> 210
211 [label="const: 6371000.0",color=red1, style=filled]
210 -> 211
212 [label="label: ?ownLong",color=plum, style=filled]
210 -> 212
213 [label="op2: *",color=green4, style=filled]
212 -> 213
214 [label="ext_ownship_longitude",color=cyan1, style=filled]
213 -> 214
215 [label="label: ?deg",color=plum, style=filled]
213 -> 215
216 [label="op2: /",color=green4, style=filled]
215 -> 216
217 [label="label: ?pi",color=plum, style=filled]
216 -> 217
218 [label="const: 3.141592653589793",color=red1, style=filled]
217 -> 218
219 [label="const: 180.0",color=red1, style=filled]
216 -> 219
220 [label="label: ?intPositionX",color=plum, style=filled]
208 -> 220
221 [label="op2: *",color=green4, style=filled]
220 -> 221
222 [label="const: 6371000.0",color=red1, style=filled]
221 -> 222
223 [label="label: ?intLong",color=plum, style=filled]
221 -> 223
224 [label="op2: *",color=green4, style=filled]
223 -> 224
225 [label="ext_intruder_longitude",color=cyan1, style=filled]
224 -> 225
226 [label="label: ?deg",color=plum, style=filled]
224 -> 226
227 [label="op2: /",color=green4, style=filled]
226 -> 227
228 [label="label: ?pi",color=plum, style=filled]
227 -> 228
229 [label="const: 3.141592653589793",color=red1, style=filled]
228 -> 229
230 [label="const: 180.0",color=red1, style=filled]
227 -> 230
231 [label="op2: -",color=green4, style=filled]
207 -> 231
232 [label="label: ?ownVelocityX",color=plum, style=filled]
231 -> 232
233 [label="ext_ownship_vx",color=cyan1, style=filled]
232 -> 233
234 [label="label: ?intVelocityX",color=plum, style=filled]
231 -> 234
235 [label="ext_intruder_vx",color=cyan1, style=filled]
234 -> 235
236 [label="op2: *",color=green4, style=filled]
206 -> 236
237 [label="op2: -",color=green4, style=filled]
236 -> 237
238 [label="label: ?ownPositionY",color=plum, style=filled]
237 -> 238
239 [label="op2: *",color=green4, style=filled]
238 -> 239
240 [label="const: 6371000.0",color=red1, style=filled]
239 -> 240
241 [label="ext_log_98",color=cyan4, style=filled]
239 -> 241
258 [label="label: ?intPositionY",color=plum, style=filled]
237 -> 258
259 [label="op2: *",color=green4, style=filled]
258 -> 259
260 [label="const: 6371000.0",color=red1, style=filled]
259 -> 260
261 [label="ext_log_100",color=cyan4, style=filled]
259 -> 261
278 [label="op2: -",color=green4, style=filled]
236 -> 278
279 [label="label: ?ownVelocityY",color=plum, style=filled]
278 -> 279
280 [label="ext_ownship_vy",color=cyan1, style=filled]
279 -> 280
281 [label="label: ?intVelocityY",color=plum, style=filled]
278 -> 281
282 [label="ext_intruder_vy",color=cyan1, style=filled]
281 -> 282
283 [label="label: ?normsq2dim",color=plum, style=filled]
202 -> 283
284 [label="label: ?scalar2dim",color=plum, style=filled]
283 -> 284
285 [label="op2: +",color=green4, style=filled]
284 -> 285
286 [label="op2: *",color=green4, style=filled]
285 -> 286
287 [label="op2: -",color=green4, style=filled]
286 -> 287
288 [label="label: ?ownVelocityX",color=plum, style=filled]
287 -> 288
289 [label="ext_ownship_vx",color=cyan1, style=filled]
288 -> 289
290 [label="label: ?intVelocityX",color=plum, style=filled]
287 -> 290
291 [label="ext_intruder_vx",color=cyan1, style=filled]
290 -> 291
292 [label="op2: -",color=green4, style=filled]
286 -> 292
293 [label="label: ?ownVelocityX",color=plum, style=filled]
292 -> 293
294 [label="ext_ownship_vx",color=cyan1, style=filled]
293 -> 294
295 [label="label: ?intVelocityX",color=plum, style=filled]
292 -> 295
296 [label="ext_intruder_vx",color=cyan1, style=filled]
295 -> 296
297 [label="op2: *",color=green4, style=filled]
285 -> 297
298 [label="op2: -",color=green4, style=filled]
297 -> 298
299 [label="label: ?ownVelocityY",color=plum, style=filled]
298 -> 299
300 [label="ext_ownship_vy",color=cyan1, style=filled]
299 -> 300
301 [label="label: ?intVelocityY",color=plum, style=filled]
298 -> 301
302 [label="ext_intruder_vy",color=cyan1, style=filled]
301 -> 302
303 [label="op2: -",color=green4, style=filled]
297 -> 303
304 [label="label: ?ownVelocityY",color=plum, style=filled]
303 -> 304
305 [label="ext_ownship_vy",color=cyan1, style=filled]
304 -> 305
306 [label="label: ?intVelocityY",color=plum, style=filled]
303 -> 306
307 [label="ext_intruder_vy",color=cyan1, style=filled]
306 -> 307
308 [label="op2: -",color=green4, style=filled]
183 -> 308
309 [label="label: ?ownVelocityX",color=plum, style=filled]
308 -> 309
310 [label="ext_ownship_vx",color=cyan1, style=filled]
309 -> 310
311 [label="label: ?intVelocityX",color=plum, style=filled]
308 -> 311
312 [label="ext_intruder_vx",color=cyan1, style=filled]
311 -> 312
313 [label="op2: *",color=green4, style=filled]
3 -> 313
314 [label="op2: +",color=green4, style=filled]
313 -> 314
315 [label="op2: -",color=green4, style=filled]
314 -> 315
316 [label="label: ?ownPositionY",color=plum, style=filled]
315 -> 316
317 [label="op2: *",color=green4, style=filled]
316 -> 317
318 [label="const: 6371000.0",color=red1, style=filled]
317 -> 318
319 [label="ext_log_102",color=cyan4, style=filled]
317 -> 319
336 [label="label: ?intPositionY",color=plum, style=filled]
315 -> 336
337 [label="op2: *",color=green4, style=filled]
336 -> 337
338 [label="const: 6371000.0",color=red1, style=filled]
337 -> 338
339 [label="ext_log_104",color=cyan4, style=filled]
337 -> 339
356 [label="op2: *",color=green4, style=filled]
314 -> 356
357 [label="label: ?tcpa",color=plum, style=filled]
356 -> 357
358 [label="op3: mux",color=green4, style=filled]
357 -> 358
359 [label="op2: &&",color=green4, style=filled]
358 -> 359
360 [label="op2: ==",color=green4, style=filled]
359 -> 360
361 [label="op2: -",color=green4, style=filled]
360 -> 361
362 [label="label: ?ownVelocityX",color=plum, style=filled]
361 -> 362
363 [label="ext_ownship_vx",color=cyan1, style=filled]
362 -> 363
364 [label="label: ?intVelocityX",color=plum, style=filled]
361 -> 364
365 [label="ext_intruder_vx",color=cyan1, style=filled]
364 -> 365
366 [label="const: 0.0",color=red1, style=filled]
360 -> 366
367 [label="op2: ==",color=green4, style=filled]
359 -> 367
368 [label="op2: -",color=green4, style=filled]
367 -> 368
369 [label="label: ?ownVelocityY",color=plum, style=filled]
368 -> 369
370 [label="ext_ownship_vy",color=cyan1, style=filled]
369 -> 370
371 [label="label: ?intVelocityY",color=plum, style=filled]
368 -> 371
372 [label="ext_intruder_vy",color=cyan1, style=filled]
371 -> 372
373 [label="const: 0.0",color=red1, style=filled]
367 -> 373
374 [label="const: 0.0",color=red1, style=filled]
358 -> 374
375 [label="op2: /",color=green4, style=filled]
358 -> 375
376 [label="op2: -",color=green4, style=filled]
375 -> 376
377 [label="const: 0.0",color=red1, style=filled]
376 -> 377
378 [label="label: ?scalar2dim",color=plum, style=filled]
376 -> 378
379 [label="op2: +",color=green4, style=filled]
378 -> 379
380 [label="op2: *",color=green4, style=filled]
379 -> 380
381 [label="op2: -",color=green4, style=filled]
380 -> 381
382 [label="label: ?ownPositionX",color=plum, style=filled]
381 -> 382
383 [label="op2: *",color=green4, style=filled]
382 -> 383
384 [label="const: 6371000.0",color=red1, style=filled]
383 -> 384
385 [label="label: ?ownLong",color=plum, style=filled]
383 -> 385
386 [label="op2: *",color=green4, style=filled]
385 -> 386
387 [label="ext_ownship_longitude",color=cyan1, style=filled]
386 -> 387
388 [label="label: ?deg",color=plum, style=filled]
386 -> 388
389 [label="op2: /",color=green4, style=filled]
388 -> 389
390 [label="label: ?pi",color=plum, style=filled]
389 -> 390
391 [label="const: 3.141592653589793",color=red1, style=filled]
390 -> 391
392 [label="const: 180.0",color=red1, style=filled]
389 -> 392
393 [label="label: ?intPositionX",color=plum, style=filled]
381 -> 393
394 [label="op2: *",color=green4, style=filled]
393 -> 394
395 [label="const: 6371000.0",color=red1, style=filled]
394 -> 395
396 [label="label: ?intLong",color=plum, style=filled]
394 -> 396
397 [label="op2: *",color=green4, style=filled]
396 -> 397
398 [label="ext_intruder_longitude",color=cyan1, style=filled]
397 -> 398
399 [label="label: ?deg",color=plum, style=filled]
397 -> 399
400 [label="op2: /",color=green4, style=filled]
399 -> 400
401 [label="label: ?pi",color=plum, style=filled]
400 -> 401
402 [label="const: 3.141592653589793",color=red1, style=filled]
401 -> 402
403 [label="const: 180.0",color=red1, style=filled]
400 -> 403
404 [label="op2: -",color=green4, style=filled]
380 -> 404
405 [label="label: ?ownVelocityX",color=plum, style=filled]
404 -> 405
406 [label="ext_ownship_vx",color=cyan1, style=filled]
405 -> 406
407 [label="label: ?intVelocityX",color=plum, style=filled]
404 -> 407
408 [label="ext_intruder_vx",color=cyan1, style=filled]
407 -> 408
409 [label="op2: *",color=green4, style=filled]
379 -> 409
410 [label="op2: -",color=green4, style=filled]
409 -> 410
411 [label="label: ?ownPositionY",color=plum, style=filled]
410 -> 411
412 [label="op2: *",color=green4, style=filled]
411 -> 412
413 [label="const: 6371000.0",color=red1, style=filled]
412 -> 413
414 [label="ext_log_106",color=cyan4, style=filled]
412 -> 414
431 [label="label: ?intPositionY",color=plum, style=filled]
410 -> 431
432 [label="op2: *",color=green4, style=filled]
431 -> 432
433 [label="const: 6371000.0",color=red1, style=filled]
432 -> 433
434 [label="ext_log_108",color=cyan4, style=filled]
432 -> 434
451 [label="op2: -",color=green4, style=filled]
409 -> 451
452 [label="label: ?ownVelocityY",color=plum, style=filled]
451 -> 452
453 [label="ext_ownship_vy",color=cyan1, style=filled]
452 -> 453
454 [label="label: ?intVelocityY",color=plum, style=filled]
451 -> 454
455 [label="ext_intruder_vy",color=cyan1, style=filled]
454 -> 455
456 [label="label: ?normsq2dim",color=plum, style=filled]
375 -> 456
457 [label="label: ?scalar2dim",color=plum, style=filled]
456 -> 457
458 [label="op2: +",color=green4, style=filled]
457 -> 458
459 [label="op2: *",color=green4, style=filled]
458 -> 459
460 [label="op2: -",color=green4, style=filled]
459 -> 460
461 [label="label: ?ownVelocityX",color=plum, style=filled]
460 -> 461
462 [label="ext_ownship_vx",color=cyan1, style=filled]
461 -> 462
463 [label="label: ?intVelocityX",color=plum, style=filled]
460 -> 463
464 [label="ext_intruder_vx",color=cyan1, style=filled]
463 -> 464
465 [label="op2: -",color=green4, style=filled]
459 -> 465
466 [label="label: ?ownVelocityX",color=plum, style=filled]
465 -> 466
467 [label="ext_ownship_vx",color=cyan1, style=filled]
466 -> 467
468 [label="label: ?intVelocityX",color=plum, style=filled]
465 -> 468
469 [label="ext_intruder_vx",color=cyan1, style=filled]
468 -> 469
470 [label="op2: *",color=green4, style=filled]
458 -> 470
471 [label="op2: -",color=green4, style=filled]
470 -> 471
472 [label="label: ?ownVelocityY",color=plum, style=filled]
471 -> 472
473 [label="ext_ownship_vy",color=cyan1, style=filled]
472 -> 473
474 [label="label: ?intVelocityY",color=plum, style=filled]
471 -> 474
475 [label="ext_intruder_vy",color=cyan1, style=filled]
474 -> 475
476 [label="op2: -",color=green4, style=filled]
470 -> 476
477 [label="label: ?ownVelocityY",color=plum, style=filled]
476 -> 477
478 [label="ext_ownship_vy",color=cyan1, style=filled]
477 -> 478
479 [label="label: ?intVelocityY",color=plum, style=filled]
476 -> 479
480 [label="ext_intruder_vy",color=cyan1, style=filled]
479 -> 480
481 [label="op2: -",color=green4, style=filled]
356 -> 481
482 [label="label: ?ownVelocityY",color=plum, style=filled]
481 -> 482
483 [label="ext_ownship_vy",color=cyan1, style=filled]
482 -> 483
484 [label="label: ?intVelocityY",color=plum, style=filled]
481 -> 484
485 [label="ext_intruder_vy",color=cyan1, style=filled]
484 -> 485
486 [label="op2: +",color=green4, style=filled]
313 -> 486
487 [label="op2: -",color=green4, style=filled]
486 -> 487
488 [label="label: ?ownPositionY",color=plum, style=filled]
487 -> 488
489 [label="op2: *",color=green4, style=filled]
488 -> 489
490 [label="const: 6371000.0",color=red1, style=filled]
489 -> 490
491 [label="ext_log_110",color=cyan4, style=filled]
489 -> 491
508 [label="label: ?intPositionY",color=plum, style=filled]
487 -> 508
509 [label="op2: *",color=green4, style=filled]
508 -> 509
510 [label="const: 6371000.0",color=red1, style=filled]
509 -> 510
511 [label="ext_log_112",color=cyan4, style=filled]
509 -> 511
528 [label="op2: *",color=green4, style=filled]
486 -> 528
529 [label="label: ?tcpa",color=plum, style=filled]
528 -> 529
530 [label="op3: mux",color=green4, style=filled]
529 -> 530
531 [label="op2: &&",color=green4, style=filled]
530 -> 531
532 [label="op2: ==",color=green4, style=filled]
531 -> 532
533 [label="op2: -",color=green4, style=filled]
532 -> 533
534 [label="label: ?ownVelocityX",color=plum, style=filled]
533 -> 534
535 [label="ext_ownship_vx",color=cyan1, style=filled]
534 -> 535
536 [label="label: ?intVelocityX",color=plum, style=filled]
533 -> 536
537 [label="ext_intruder_vx",color=cyan1, style=filled]
536 -> 537
538 [label="const: 0.0",color=red1, style=filled]
532 -> 538
539 [label="op2: ==",color=green4, style=filled]
531 -> 539
540 [label="op2: -",color=green4, style=filled]
539 -> 540
541 [label="label: ?ownVelocityY",color=plum, style=filled]
540 -> 541
542 [label="ext_ownship_vy",color=cyan1, style=filled]
541 -> 542
543 [label="label: ?intVelocityY",color=plum, style=filled]
540 -> 543
544 [label="ext_intruder_vy",color=cyan1, style=filled]
543 -> 544
545 [label="const: 0.0",color=red1, style=filled]
539 -> 545
546 [label="const: 0.0",color=red1, style=filled]
530 -> 546
547 [label="op2: /",color=green4, style=filled]
530 -> 547
548 [label="op2: -",color=green4, style=filled]
547 -> 548
549 [label="const: 0.0",color=red1, style=filled]
548 -> 549
550 [label="label: ?scalar2dim",color=plum, style=filled]
548 -> 550
551 [label="op2: +",color=green4, style=filled]
550 -> 551
552 [label="op2: *",color=green4, style=filled]
551 -> 552
553 [label="op2: -",color=green4, style=filled]
552 -> 553
554 [label="label: ?ownPositionX",color=plum, style=filled]
553 -> 554
555 [label="op2: *",color=green4, style=filled]
554 -> 555
556 [label="const: 6371000.0",color=red1, style=filled]
555 -> 556
557 [label="label: ?ownLong",color=plum, style=filled]
555 -> 557
558 [label="op2: *",color=green4, style=filled]
557 -> 558
559 [label="ext_ownship_longitude",color=cyan1, style=filled]
558 -> 559
560 [label="label: ?deg",color=plum, style=filled]
558 -> 560
561 [label="op2: /",color=green4, style=filled]
560 -> 561
562 [label="label: ?pi",color=plum, style=filled]
561 -> 562
563 [label="const: 3.141592653589793",color=red1, style=filled]
562 -> 563
564 [label="const: 180.0",color=red1, style=filled]
561 -> 564
565 [label="label: ?intPositionX",color=plum, style=filled]
553 -> 565
566 [label="op2: *",color=green4, style=filled]
565 -> 566
567 [label="const: 6371000.0",color=red1, style=filled]
566 -> 567
568 [label="label: ?intLong",color=plum, style=filled]
566 -> 568
569 [label="op2: *",color=green4, style=filled]
568 -> 569
570 [label="ext_intruder_longitude",color=cyan1, style=filled]
569 -> 570
571 [label="label: ?deg",color=plum, style=filled]
569 -> 571
572 [label="op2: /",color=green4, style=filled]
571 -> 572
573 [label="label: ?pi",color=plum, style=filled]
572 -> 573
574 [label="const: 3.141592653589793",color=red1, style=filled]
573 -> 574
575 [label="const: 180.0",color=red1, style=filled]
572 -> 575
576 [label="op2: -",color=green4, style=filled]
552 -> 576
577 [label="label: ?ownVelocityX",color=plum, style=filled]
576 -> 577
578 [label="ext_ownship_vx",color=cyan1, style=filled]
577 -> 578
579 [label="label: ?intVelocityX",color=plum, style=filled]
576 -> 579
580 [label="ext_intruder_vx",color=cyan1, style=filled]
579 -> 580
581 [label="op2: *",color=green4, style=filled]
551 -> 581
582 [label="op2: -",color=green4, style=filled]
581 -> 582
583 [label="label: ?ownPositionY",color=plum, style=filled]
582 -> 583
584 [label="op2: *",color=green4, style=filled]
583 -> 584
585 [label="const: 6371000.0",color=red1, style=filled]
584 -> 585
586 [label="ext_log_114",color=cyan4, style=filled]
584 -> 586
603 [label="label: ?intPositionY",color=plum, style=filled]
582 -> 603
604 [label="op2: *",color=green4, style=filled]
603 -> 604
605 [label="const: 6371000.0",color=red1, style=filled]
604 -> 605
606 [label="ext_log_116",color=cyan4, style=filled]
604 -> 606
623 [label="op2: -",color=green4, style=filled]
581 -> 623
624 [label="label: ?ownVelocityY",color=plum, style=filled]
623 -> 624
625 [label="ext_ownship_vy",color=cyan1, style=filled]
624 -> 625
626 [label="label: ?intVelocityY",color=plum, style=filled]
623 -> 626
627 [label="ext_intruder_vy",color=cyan1, style=filled]
626 -> 627
628 [label="label: ?normsq2dim",color=plum, style=filled]
547 -> 628
629 [label="label: ?scalar2dim",color=plum, style=filled]
628 -> 629
630 [label="op2: +",color=green4, style=filled]
629 -> 630
631 [label="op2: *",color=green4, style=filled]
630 -> 631
632 [label="op2: -",color=green4, style=filled]
631 -> 632
633 [label="label: ?ownVelocityX",color=plum, style=filled]
632 -> 633
634 [label="ext_ownship_vx",color=cyan1, style=filled]
633 -> 634
635 [label="label: ?intVelocityX",color=plum, style=filled]
632 -> 635
636 [label="ext_intruder_vx",color=cyan1, style=filled]
635 -> 636
637 [label="op2: -",color=green4, style=filled]
631 -> 637
638 [label="label: ?ownVelocityX",color=plum, style=filled]
637 -> 638
639 [label="ext_ownship_vx",color=cyan1, style=filled]
638 -> 639
640 [label="label: ?intVelocityX",color=plum, style=filled]
637 -> 640
641 [label="ext_intruder_vx",color=cyan1, style=filled]
640 -> 641
642 [label="op2: *",color=green4, style=filled]
630 -> 642
643 [label="op2: -",color=green4, style=filled]
642 -> 643
644 [label="label: ?ownVelocityY",color=plum, style=filled]
643 -> 644
645 [label="ext_ownship_vy",color=cyan1, style=filled]
644 -> 645
646 [label="label: ?intVelocityY",color=plum, style=filled]
643 -> 646
647 [label="ext_intruder_vy",color=cyan1, style=filled]
646 -> 647
648 [label="op2: -",color=green4, style=filled]
642 -> 648
649 [label="label: ?ownVelocityY",color=plum, style=filled]
648 -> 649
650 [label="ext_ownship_vy",color=cyan1, style=filled]
649 -> 650
651 [label="label: ?intVelocityY",color=plum, style=filled]
648 -> 651
652 [label="ext_intruder_vy",color=cyan1, style=filled]
651 -> 652
653 [label="op2: -",color=green4, style=filled]
528 -> 653
654 [label="label: ?ownVelocityY",color=plum, style=filled]
653 -> 654
655 [label="ext_ownship_vy",color=cyan1, style=filled]
654 -> 655
656 [label="label: ?intVelocityY",color=plum, style=filled]
653 -> 656
657 [label="ext_intruder_vy",color=cyan1, style=filled]
656 -> 657


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((((((((((((((6371000.0) * ((((ext_ownship_longitude) * (((((3.141592653589793)) / (180.0)))))))))) - ((((6371000.0) * ((((ext_intruder_longitude) * (((((3.141592653589793)) / (180.0)))))))))))) + ((((( ((((((((ext_ownship_vx)) - ((ext_intruder_vx)))) == (0.0))) && ((((((ext_ownship_vy)) - ((ext_intruder_vy)))) == (0.0))))) ? (0.0) : (((((0.0) - (((((((((((6371000.0) * ((((ext_ownship_longitude) * (((((3.141592653589793)) / (180.0)))))))))) - ((((6371000.0) * ((((ext_intruder_longitude) * (((((3.141592653589793)) / (180.0)))))))))))) * ((((ext_ownship_vx)) - ((ext_intruder_vx)))))) + ((((((((6371000.0) * (ext_log_94)))) - ((((6371000.0) * (ext_log_96)))))) * ((((ext_ownship_vy)) - ((ext_intruder_vy))))))))))) / ((((((((((ext_ownship_vx)) - ((ext_intruder_vx)))) * ((((ext_ownship_vx)) - ((ext_intruder_vx)))))) + ((((((ext_ownship_vy)) - ((ext_intruder_vy)))) * ((((ext_ownship_vy)) - ((ext_intruder_vy))))))))))))))) * ((((ext_ownship_vx)) - ((ext_intruder_vx)))))))) * ((((((((6371000.0) * ((((ext_ownship_longitude) * (((((3.141592653589793)) / (180.0)))))))))) - ((((6371000.0) * ((((ext_intruder_longitude) * (((((3.141592653589793)) / (180.0)))))))))))) + ((((( ((((((((ext_ownship_vx)) - ((ext_intruder_vx)))) == (0.0))) && ((((((ext_ownship_vy)) - ((ext_intruder_vy)))) == (0.0))))) ? (0.0) : (((((0.0) - (((((((((((6371000.0) * ((((ext_ownship_longitude) * (((((3.141592653589793)) / (180.0)))))))))) - ((((6371000.0) * ((((ext_intruder_longitude) * (((((3.141592653589793)) / (180.0)))))))))))) * ((((ext_ownship_vx)) - ((ext_intruder_vx)))))) + ((((((((6371000.0) * (ext_log_98)))) - ((((6371000.0) * (ext_log_100)))))) * ((((ext_ownship_vy)) - ((ext_intruder_vy))))))))))) / ((((((((((ext_ownship_vx)) - ((ext_intruder_vx)))) * ((((ext_ownship_vx)) - ((ext_intruder_vx)))))) + ((((((ext_ownship_vy)) - ((ext_intruder_vy)))) * ((((ext_ownship_vy)) - ((ext_intruder_vy))))))))))))))) * ((((ext_ownship_vx)) - ((ext_intruder_vx)))))))))) + ((((((((((6371000.0) * (ext_log_102)))) - ((((6371000.0) * (ext_log_104)))))) + ((((( ((((((((ext_ownship_vx)) - ((ext_intruder_vx)))) == (0.0))) && ((((((ext_ownship_vy)) - ((ext_intruder_vy)))) == (0.0))))) ? (0.0) : (((((0.0) - (((((((((((6371000.0) * ((((ext_ownship_longitude) * (((((3.141592653589793)) / (180.0)))))))))) - ((((6371000.0) * ((((ext_intruder_longitude) * (((((3.141592653589793)) / (180.0)))))))))))) * ((((ext_ownship_vx)) - ((ext_intruder_vx)))))) + ((((((((6371000.0) * (ext_log_106)))) - ((((6371000.0) * (ext_log_108)))))) * ((((ext_ownship_vy)) - ((ext_intruder_vy))))))))))) / ((((((((((ext_ownship_vx)) - ((ext_intruder_vx)))) * ((((ext_ownship_vx)) - ((ext_intruder_vx)))))) + ((((((ext_ownship_vy)) - ((ext_intruder_vy)))) * ((((ext_ownship_vy)) - ((ext_intruder_vy))))))))))))))) * ((((ext_ownship_vy)) - ((ext_intruder_vy)))))))) * ((((((((6371000.0) * (ext_log_110)))) - ((((6371000.0) * (ext_log_112)))))) + ((((( ((((((((ext_ownship_vx)) - ((ext_intruder_vx)))) == (0.0))) && ((((((ext_ownship_vy)) - ((ext_intruder_vy)))) == (0.0))))) ? (0.0) : (((((0.0) - (((((((((((6371000.0) * ((((ext_ownship_longitude) * (((((3.141592653589793)) / (180.0)))))))))) - ((((6371000.0) * ((((ext_intruder_longitude) * (((((3.141592653589793)) / (180.0)))))))))))) * ((((ext_ownship_vx)) - ((ext_intruder_vx)))))) + ((((((((6371000.0) * (ext_log_114)))) - ((((6371000.0) * (ext_log_116)))))) * ((((ext_ownship_vy)) - ((ext_intruder_vy))))))))))) / ((((((((((ext_ownship_vx)) - ((ext_intruder_vx)))) * ((((ext_ownship_vx)) - ((ext_intruder_vx)))))) + ((((((ext_ownship_vy)) - ((ext_intruder_vy)))) * ((((ext_ownship_vy)) - ((ext_intruder_vy))))))))))))))) * ((((ext_ownship_vy)) - ((ext_intruder_vy))))))))))))));
*/
SDouble ext_sqrt_117_arg0(const SDouble ext_ownship_longitude,
                          const SDouble ext_intruder_longitude, const SDouble ext_ownship_vx,
                          const SDouble ext_intruder_vx, const SDouble ext_ownship_vy,
                          const SDouble ext_intruder_vy, const SDouble ext_log_94,
                          const SDouble ext_tan_93, const SDouble ext_ownship_latitude,
                          const SDouble ext_log_96, const SDouble ext_tan_95,
                          const SDouble ext_intruder_latitude, const SDouble ext_log_98,
                          const SDouble ext_tan_97, const SDouble ext_log_100,
                          const SDouble ext_tan_99, const SDouble ext_log_102,
                          const SDouble ext_tan_101, const SDouble ext_log_104,
                          const SDouble ext_tan_103, const SDouble ext_log_106,
                          const SDouble ext_tan_105, const SDouble ext_log_108,
                          const SDouble ext_tan_107, const SDouble ext_log_110,
                          const SDouble ext_tan_109, const SDouble ext_log_112,
                          const SDouble ext_tan_111, const SDouble ext_log_114,
                          const SDouble ext_tan_113, const SDouble ext_log_116,
                          const SDouble ext_tan_115)
{
  const SDouble s0 = ext_ownship_longitude;
  const SDouble s1 = ext_intruder_longitude;
  const SDouble s2 = ext_ownship_vx;
  const SDouble s3 = ext_intruder_vx;
  const SDouble s4 = ext_ownship_vy;
  const SDouble s5 = ext_intruder_vy;
  const SDouble s6 = ext_log_94;
  const SDouble s9 = ext_log_96;
  const SDouble s12 = ext_log_98;
  const SDouble s14 = ext_log_100;
  const SDouble s16 = ext_log_102;
  const SDouble s18 = ext_log_104;
  const SDouble s20 = ext_log_106;
  const SDouble s22 = ext_log_108;
  const SDouble s24 = ext_log_110;
  const SDouble s26 = ext_log_112;
  const SDouble s28 = ext_log_114;
  const SDouble s30 = ext_log_116;
  const SDouble s34 = s0 * 1.7453292519943295e-2;
  const SDouble s35 = s34 /* ?ownLong */;
  const SDouble s36 = 6371000.0 * s35;
  const SDouble s37 = s36 /* ?ownPositionX */;
  const SDouble s38 = s1 * 1.7453292519943295e-2;
  const SDouble s39 = s38 /* ?intLong */;
  const SDouble s40 = 6371000.0 * s39;
  const SDouble s41 = s40 /* ?intPositionX */;
  const SDouble s42 = s37 - s41;
  const SDouble s43 = s2 /* ?ownVelocityX */;
  const SDouble s44 = s3 /* ?intVelocityX */;
  const SDouble s45 = s43 - s44;
  const SBool   s47 = s45 == 0.0;
  const SDouble s48 = s4 /* ?ownVelocityY */;
  const SDouble s49 = s5 /* ?intVelocityY */;
  const SDouble s50 = s48 - s49;
  const SBool   s51 = 0.0 == s50;
  const SBool   s52 = s47 && s51;
  const SDouble s53 = s42 * s45;
  const SDouble s54 = s6 * 6371000.0;
  const SDouble s55 = s54 /* ?ownPositionY */;
  const SDouble s56 = s9 * 6371000.0;
  const SDouble s57 = s56 /* ?intPositionY */;
  const SDouble s58 = s55 - s57;
  const SDouble s59 = s50 * s58;
  const SDouble s60 = s53 + s59;
  const SDouble s61 = s60 /* ?scalar2dim */;
  const SDouble s62 = 0.0 - s61;
  const SDouble s63 = s45 * s45;
  const SDouble s64 = s50 * s50;
  const SDouble s65 = s63 + s64;
  const SDouble s66 = s65 /* ?scalar2dim */;
  const SDouble s67 = s66 /* ?normsq2dim */;
  const SDouble s68 = s62 / s67;
  const SDouble s69 = s52 ? 0.0 : s68;
  const SDouble s70 = s69 /* ?tcpa */;
  const SDouble s71 = s45 * s70;
  const SDouble s72 = s42 + s71;
  const SDouble s73 = s12 * 6371000.0;
  const SDouble s74 = s73 /* ?ownPositionY */;
  const SDouble s75 = s14 * 6371000.0;
  const SDouble s76 = s75 /* ?intPositionY */;
  const SDouble s77 = s74 - s76;
  const SDouble s78 = s50 * s77;
  const SDouble s79 = s53 + s78;
  const SDouble s80 = s79 /* ?scalar2dim */;
  const SDouble s81 = 0.0 - s80;
  const SDouble s82 = s81 / s67;
  const SDouble s83 = s52 ? 0.0 : s82;
  const SDouble s84 = s83 /* ?tcpa */;
  const SDouble s85 = s45 * s84;
  const SDouble s86 = s42 + s85;
  const SDouble s87 = s72 * s86;
  const SDouble s88 = s16 * 6371000.0;
  const SDouble s89 = s88 /* ?ownPositionY */;
  const SDouble s90 = s18 * 6371000.0;
  const SDouble s91 = s90 /* ?intPositionY */;
  const SDouble s92 = s89 - s91;
  const SDouble s93 = s20 * 6371000.0;
  const SDouble s94 = s93 /* ?ownPositionY */;
  const SDouble s95 = s22 * 6371000.0;
  const SDouble s96 = s95 /* ?intPositionY */;
  const SDouble s97 = s94 - s96;
  const SDouble s98 = s50 * s97;
  const SDouble s99 = s53 + s98;
  const SDouble s100 = s99 /* ?scalar2dim */;
  const SDouble s101 = 0.0 - s100;
  const SDouble s102 = s101 / s67;
  const SDouble s103 = s52 ? 0.0 : s102;
  const SDouble s104 = s103 /* ?tcpa */;
  const SDouble s105 = s50 * s104;
  const SDouble s106 = s92 + s105;
  const SDouble s107 = s24 * 6371000.0;
  const SDouble s108 = s107 /* ?ownPositionY */;
  const SDouble s109 = s26 * 6371000.0;
  const SDouble s110 = s109 /* ?intPositionY */;
  const SDouble s111 = s108 - s110;
  const SDouble s112 = s28 * 6371000.0;
  const SDouble s113 = s112 /* ?ownPositionY */;
  const SDouble s114 = s30 * 6371000.0;
  const SDouble s115 = s114 /* ?intPositionY */;
  const SDouble s116 = s113 - s115;
  const SDouble s117 = s50 * s116;
  const SDouble s118 = s53 + s117;
  const SDouble s119 = s118 /* ?scalar2dim */;
  const SDouble s120 = 0.0 - s119;
  const SDouble s121 = s120 / s67;
  const SDouble s122 = s52 ? 0.0 : s121;
  const SDouble s123 = s122 /* ?tcpa */;
  const SDouble s124 = s50 * s123;
  const SDouble s125 = s111 + s124;
  const SDouble s126 = s106 * s125;
  const SDouble s127 = s87 + s126;
  const SDouble s128 = s127 /* ?scalar2dim */;
  const SDouble s129 = s128 /* ?normsq2dim */;

  return s129;
}
