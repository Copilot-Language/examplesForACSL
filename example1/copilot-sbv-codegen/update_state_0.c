/* File: "update_state_0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="op1: not",color=green4, style=filled]
0 -> 1
2 [label="stream: 0",color=crimson, style=filled]
1 -> 2


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (! ((queue_0[0])));
*/
SBool update_state_0(const SBool *queue_0, const SWord32 ptr_0)
{
  const SBool   s0 = queue_0[0];
  const SWord32 s1 = ptr_0;
  const SBool   s2 = !s0;

  return s2;
}
