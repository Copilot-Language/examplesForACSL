/* File: "update_state_2.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="op2: ||",color=green4, style=filled]
0 -> 1
2 [label="stream: 2",color=crimson, style=filled]
1 -> 2
3 [label="op2: &&",color=green4, style=filled]
1 -> 3
4 [label="drop 1: 
stream: 2",color=crimson, style=filled]
3 -> 4
5 [label="op2: ==",color=green4, style=filled]
3 -> 5
6 [label="op2: mod",color=green4, style=filled]
5 -> 6
7 [label="drop 1: 
stream: 1",color=crimson, style=filled]
6 -> 7
8 [label="const: 2",color=red1, style=filled]
6 -> 8
9 [label="const: 0",color=red1, style=filled]
5 -> 9


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (((queue_2[ptr_2]) || (((queue_2[(ptr_2 + 1) % 2]) && (((((queue_1[(ptr_1 + 1) % 2]) % (2))) == (0)))))));
*/
SBool update_state_2(const SBool *queue_2, const SWord32 ptr_2,
                     const SWord8 *queue_1, const SWord32 ptr_1)
{
  const SBool   s0 = queue_2[0];
  const SBool   s1 = queue_2[1];
  const SWord32 s2 = ptr_2;
  const SWord8  s3 = queue_1[0];
  const SWord8  s4 = queue_1[1];
  const SWord32 s5 = ptr_1;
  const SBool table0[] = {
      s0, s1
  };
  const SWord8 table1[] = {
      s3, s4
  };
  const SWord32 s7 = (0x00000002UL == 0) ? s2 : (s2 % 0x00000002UL);
  const SBool   s8 = table0[s7];
  const SWord32 s10 = s2 + 0x00000001UL;
  const SWord32 s11 = (0x00000002UL == 0) ? s10 : (s10 % 0x00000002UL);
  const SBool   s12 = table0[s11];
  const SWord32 s13 = s5 + 0x00000001UL;
  const SWord32 s14 = (0x00000002UL == 0) ? s13 : (s13 % 0x00000002UL);
  const SWord8  s15 = table1[s14];
  const SWord8  s17 = (2 == 0) ? s15 : (s15 % 2);
  const SBool   s19 = s17 == 0;
  const SBool   s20 = s12 && s19;
  const SBool   s21 = s8 || s20;

  return s21;
}
