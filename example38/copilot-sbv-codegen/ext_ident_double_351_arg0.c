/* File: "ext_ident_double_351_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="label: normsq2dim",color=plum, style=filled]
0 -> 1
2 [label="ext_ident_double_350",color=cyan4, style=filled]
1 -> 2


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((ext_ident_double_350));
*/
SDouble ext_ident_double_351_arg0(const SDouble ext_ident_double_350,
                                  const SDouble ext_ident_double_342,
                                  const SDouble ext_ownship_x_position_ft,
                                  const SDouble ext_ident_double_343,
                                  const SDouble ext_intruder_x_position_ft,
                                  const SDouble ext_ident_double_344,
                                  const SDouble ext_ident_double_345,
                                  const SDouble ext_ident_double_346,
                                  const SDouble ext_ident_double_347,
                                  const SDouble ext_intruder_y_position_ft,
                                  const SDouble ext_ident_double_348,
                                  const SDouble ext_ident_double_349)
{
  const SDouble s0 = ext_ident_double_350;
  const SDouble s12 = s0 /* normsq2dim */;

  return s12;
}
