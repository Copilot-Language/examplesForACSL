/* File: "ext_ident_double_1405_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="label: dmodRA",color=plum, style=filled]
0 -> 1
2 [label="op3: mux",color=green4, style=filled]
1 -> 2
3 [label="op2: ==",color=green4, style=filled]
2 -> 3
4 [label="ext_ident_word64_1398",color=cyan4, style=filled]
3 -> 4
41 [label="const: 2",color=red1, style=filled]
3 -> 41
42 [label="const: 0.0",color=red1, style=filled]
2 -> 42
43 [label="op3: mux",color=green4, style=filled]
2 -> 43
44 [label="op2: ==",color=green4, style=filled]
43 -> 44
45 [label="ext_ident_word64_1399",color=cyan4, style=filled]
44 -> 45
82 [label="const: 3",color=red1, style=filled]
44 -> 82
83 [label="const: 370.40000000000003",color=red1, style=filled]
43 -> 83
84 [label="op3: mux",color=green4, style=filled]
43 -> 84
85 [label="op2: ==",color=green4, style=filled]
84 -> 85
86 [label="ext_ident_word64_1400",color=cyan4, style=filled]
85 -> 86
123 [label="const: 4",color=red1, style=filled]
85 -> 123
124 [label="const: 648.1999999999999",color=red1, style=filled]
84 -> 124
125 [label="op3: mux",color=green4, style=filled]
84 -> 125
126 [label="op2: ==",color=green4, style=filled]
125 -> 126
127 [label="ext_ident_word64_1401",color=cyan4, style=filled]
126 -> 127
164 [label="const: 5",color=red1, style=filled]
126 -> 164
165 [label="const: 1018.6000000000001",color=red1, style=filled]
125 -> 165
166 [label="op3: mux",color=green4, style=filled]
125 -> 166
167 [label="op2: ==",color=green4, style=filled]
166 -> 167
168 [label="ext_ident_word64_1402",color=cyan4, style=filled]
167 -> 168
205 [label="const: 6",color=red1, style=filled]
167 -> 205
206 [label="const: 1481.6000000000001",color=red1, style=filled]
166 -> 206
207 [label="op3: mux",color=green4, style=filled]
166 -> 207
208 [label="op2: ==",color=green4, style=filled]
207 -> 208
209 [label="ext_ident_word64_1403",color=cyan4, style=filled]
208 -> 209
246 [label="const: 7",color=red1, style=filled]
208 -> 246
247 [label="const: 2037.2000000000003",color=red1, style=filled]
207 -> 247
248 [label="op3: mux",color=green4, style=filled]
207 -> 248
249 [label="op2: ==",color=green4, style=filled]
248 -> 249
250 [label="ext_ident_word64_1404",color=cyan4, style=filled]
249 -> 250
287 [label="const: 8",color=red1, style=filled]
249 -> 287
288 [label="const: 2037.2000000000003",color=red1, style=filled]
248 -> 288
289 [label="const: 0.0",color=red1, style=filled]
248 -> 289


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((( (((ext_ident_word64_1398) == (2))) ? (0.0) : (( (((ext_ident_word64_1399) == (3))) ? (370.40000000000003) : (( (((ext_ident_word64_1400) == (4))) ? (648.1999999999999) : (( (((ext_ident_word64_1401) == (5))) ? (1018.6000000000001) : (( (((ext_ident_word64_1402) == (6))) ? (1481.6000000000001) : (( (((ext_ident_word64_1403) == (7))) ? (2037.2000000000003) : (( (((ext_ident_word64_1404) == (8))) ? (2037.2000000000003) : (0.0))))))))))))))));
*/
SDouble ext_ident_double_1405_arg0(const SWord64 ext_ident_word64_1398,
                                   const SDouble ext_ownship_position_z,
                                   const SWord64 ext_ident_word64_1399,
                                   const SWord64 ext_ident_word64_1400,
                                   const SWord64 ext_ident_word64_1401,
                                   const SWord64 ext_ident_word64_1402,
                                   const SWord64 ext_ident_word64_1403,
                                   const SWord64 ext_ident_word64_1404)
{
  const SWord64 s0 = ext_ident_word64_1398;
  const SDouble s1 = ext_ownship_position_z;
  const SWord64 s2 = ext_ident_word64_1399;
  const SWord64 s3 = ext_ident_word64_1400;
  const SWord64 s4 = ext_ident_word64_1401;
  const SWord64 s5 = ext_ident_word64_1402;
  const SWord64 s6 = ext_ident_word64_1403;
  const SWord64 s7 = ext_ident_word64_1404;
  const SBool   s9 = s0 == 0x0000000000000002ULL;
  const SBool   s12 = s2 == 0x0000000000000003ULL;
  const SBool   s15 = s3 == 0x0000000000000004ULL;
  const SBool   s18 = s4 == 0x0000000000000005ULL;
  const SBool   s21 = s5 == 0x0000000000000006ULL;
  const SBool   s24 = s6 == 0x0000000000000007ULL;
  const SBool   s27 = s7 == 0x0000000000000008ULL;
  const SDouble s28 = s27 ? 2037.2000000000003 : 0.0;
  const SDouble s29 = s24 ? 2037.2000000000003 : s28;
  const SDouble s30 = s21 ? 1481.6000000000001 : s29;
  const SDouble s31 = s18 ? 1018.6000000000001 : s30;
  const SDouble s32 = s15 ? 648.1999999999999 : s31;
  const SDouble s33 = s12 ? 370.40000000000003 : s32;
  const SDouble s34 = s9 ? 0.0 : s33;
  const SDouble s35 = s34 /* dmodRA */;

  return s35;
}
