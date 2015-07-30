/* File: "ext_tan_234_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="op2: +",color=green4, style=filled]
0 -> 1
2 [label="op2: /",color=green4, style=filled]
1 -> 2
3 [label="label: ?pi",color=plum, style=filled]
2 -> 3
4 [label="const: 3.141592653589793",color=red1, style=filled]
3 -> 4
5 [label="const: 4.0",color=red1, style=filled]
2 -> 5
6 [label="op2: /",color=green4, style=filled]
1 -> 6
7 [label="label: ?ownLat",color=plum, style=filled]
6 -> 7
8 [label="op2: *",color=green4, style=filled]
7 -> 8
9 [label="ext_ownship_latitude",color=cyan1, style=filled]
8 -> 9
10 [label="label: ?deg",color=plum, style=filled]
8 -> 10
11 [label="op2: /",color=green4, style=filled]
10 -> 11
12 [label="label: ?pi",color=plum, style=filled]
11 -> 12
13 [label="const: 3.141592653589793",color=red1, style=filled]
12 -> 13
14 [label="const: 180.0",color=red1, style=filled]
11 -> 14
15 [label="const: 2.0",color=red1, style=filled]
6 -> 15


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((((((3.141592653589793)) / (4.0))) + ((((((ext_ownship_latitude) * (((((3.141592653589793)) / (180.0))))))) / (2.0)))));
*/
SDouble ext_tan_234_arg0(const SDouble ext_ownship_latitude)
{
  const SDouble s0 = ext_ownship_latitude;
  const SDouble s3 = s0 * 1.7453292519943295e-2;
  const SDouble s4 = s3 /* ?ownLat */;
  const SDouble s6 = s4 / 2.0;
  const SDouble s7 = 0.7853981633974483 + s6;

  return s7;
}
