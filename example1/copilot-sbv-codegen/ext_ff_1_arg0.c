/* File: "ext_ff_1_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 1",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_1[ptr_1]);
*/
SWord8 ext_ff_1_arg0(const SWord8 *queue_1, const SWord32 ptr_1)
{
  const SWord8  s0 = queue_1[0];
  const SWord8  s1 = queue_1[1];
  const SWord32 s2 = ptr_1;
  const SWord8 table0[] = {
      s0, s1
  };
  const SWord32 s4 = (0x00000002UL == 0) ? s2 : (s2 % 0x00000002UL);
  const SWord8  s5 = table0[s4];

  return s5;
}
