/* File: "ext_ident_bool_763_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="label: wellClearViolation",color=plum, style=filled]
0 -> 1
2 [label="op2: &&",color=green4, style=filled]
1 -> 2
3 [label="ext_ident_bool_738",color=cyan4, style=filled]
2 -> 3
1192 [label="ext_ident_bool_762",color=cyan4, style=filled]
2 -> 1192


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ident_bool_738) && (ext_ident_bool_762))));
*/
SBool ext_ident_bool_763_arg0(const SBool ext_ident_bool_738,
                              const SDouble ext_ident_double_571, const SDouble ext_sqrt_570,
                              const SDouble ext_ident_double_569,
                              const SDouble ext_ident_double_568,
                              const SDouble ext_ident_double_560,
                              const SDouble ext_ownship_x_position_ft,
                              const SDouble ext_ident_double_561,
                              const SDouble ext_intruder_x_position_ft,
                              const SDouble ext_ident_double_562,
                              const SDouble ext_ident_double_563,
                              const SDouble ext_ident_double_564,
                              const SDouble ext_ident_double_565,
                              const SDouble ext_intruder_y_position_ft,
                              const SDouble ext_ident_double_566,
                              const SDouble ext_ident_double_567,
                              const SDouble ext_ident_double_572,
                              const SDouble ext_ident_double_688, const SDouble ext_sqrt_687,
                              const SDouble ext_ident_double_686,
                              const SDouble ext_ident_double_685,
                              const SDouble ext_ident_double_573,
                              const SDouble ext_ident_double_574,
                              const SDouble ext_ident_double_598,
                              const SDouble ext_ident_double_575, const SDouble ext_ownship_vx,
                              const SDouble ext_ident_double_576, const SDouble ext_intruder_vx,
                              const SDouble ext_ident_double_577, const SDouble ext_ownship_vy,
                              const SDouble ext_ident_double_578, const SDouble ext_intruder_vy,
                              const SDouble ext_ident_double_587,
                              const SDouble ext_ident_double_579,
                              const SDouble ext_ident_double_580,
                              const SDouble ext_ident_double_581,
                              const SDouble ext_ident_double_582,
                              const SDouble ext_ident_double_583,
                              const SDouble ext_ident_double_584,
                              const SDouble ext_ident_double_585,
                              const SDouble ext_ident_double_586,
                              const SDouble ext_ident_double_597,
                              const SDouble ext_ident_double_596,
                              const SDouble ext_ident_double_588,
                              const SDouble ext_ident_double_589,
                              const SDouble ext_ident_double_590,
                              const SDouble ext_ident_double_591,
                              const SDouble ext_ident_double_592,
                              const SDouble ext_ident_double_593,
                              const SDouble ext_ident_double_594,
                              const SDouble ext_ident_double_595,
                              const SDouble ext_ident_double_599,
                              const SDouble ext_ident_double_600,
                              const SDouble ext_ident_double_601,
                              const SDouble ext_ident_double_602,
                              const SDouble ext_ident_double_626,
                              const SDouble ext_ident_double_603,
                              const SDouble ext_ident_double_604,
                              const SDouble ext_ident_double_605,
                              const SDouble ext_ident_double_606,
                              const SDouble ext_ident_double_615,
                              const SDouble ext_ident_double_607,
                              const SDouble ext_ident_double_608,
                              const SDouble ext_ident_double_609,
                              const SDouble ext_ident_double_610,
                              const SDouble ext_ident_double_611,
                              const SDouble ext_ident_double_612,
                              const SDouble ext_ident_double_613,
                              const SDouble ext_ident_double_614,
                              const SDouble ext_ident_double_625,
                              const SDouble ext_ident_double_624,
                              const SDouble ext_ident_double_616,
                              const SDouble ext_ident_double_617,
                              const SDouble ext_ident_double_618,
                              const SDouble ext_ident_double_619,
                              const SDouble ext_ident_double_620,
                              const SDouble ext_ident_double_621,
                              const SDouble ext_ident_double_622,
                              const SDouble ext_ident_double_623,
                              const SDouble ext_ident_double_627,
                              const SDouble ext_ident_double_628,
                              const SDouble ext_ident_double_629,
                              const SDouble ext_ident_double_630,
                              const SDouble ext_ident_double_654,
                              const SDouble ext_ident_double_631,
                              const SDouble ext_ident_double_632,
                              const SDouble ext_ident_double_633,
                              const SDouble ext_ident_double_634,
                              const SDouble ext_ident_double_643,
                              const SDouble ext_ident_double_635,
                              const SDouble ext_ident_double_636,
                              const SDouble ext_ident_double_637,
                              const SDouble ext_ident_double_638,
                              const SDouble ext_ident_double_639,
                              const SDouble ext_ident_double_640,
                              const SDouble ext_ident_double_641,
                              const SDouble ext_ident_double_642,
                              const SDouble ext_ident_double_653,
                              const SDouble ext_ident_double_652,
                              const SDouble ext_ident_double_644,
                              const SDouble ext_ident_double_645,
                              const SDouble ext_ident_double_646,
                              const SDouble ext_ident_double_647,
                              const SDouble ext_ident_double_648,
                              const SDouble ext_ident_double_649,
                              const SDouble ext_ident_double_650,
                              const SDouble ext_ident_double_651,
                              const SDouble ext_ident_double_655,
                              const SDouble ext_ident_double_656,
                              const SDouble ext_ident_double_657,
                              const SDouble ext_ident_double_658,
                              const SDouble ext_ident_double_682,
                              const SDouble ext_ident_double_659,
                              const SDouble ext_ident_double_660,
                              const SDouble ext_ident_double_661,
                              const SDouble ext_ident_double_662,
                              const SDouble ext_ident_double_671,
                              const SDouble ext_ident_double_663,
                              const SDouble ext_ident_double_664,
                              const SDouble ext_ident_double_665,
                              const SDouble ext_ident_double_666,
                              const SDouble ext_ident_double_667,
                              const SDouble ext_ident_double_668,
                              const SDouble ext_ident_double_669,
                              const SDouble ext_ident_double_670,
                              const SDouble ext_ident_double_681,
                              const SDouble ext_ident_double_680,
                              const SDouble ext_ident_double_672,
                              const SDouble ext_ident_double_673,
                              const SDouble ext_ident_double_674,
                              const SDouble ext_ident_double_675,
                              const SDouble ext_ident_double_676,
                              const SDouble ext_ident_double_677,
                              const SDouble ext_ident_double_678,
                              const SDouble ext_ident_double_679,
                              const SDouble ext_ident_double_683,
                              const SDouble ext_ident_double_684,
                              const SDouble ext_ident_double_689,
                              const SDouble ext_ident_double_713,
                              const SDouble ext_ident_double_690,
                              const SDouble ext_ident_double_691,
                              const SDouble ext_ident_double_692,
                              const SDouble ext_ident_double_693,
                              const SDouble ext_ident_double_702,
                              const SDouble ext_ident_double_694,
                              const SDouble ext_ident_double_695,
                              const SDouble ext_ident_double_696,
                              const SDouble ext_ident_double_697,
                              const SDouble ext_ident_double_698,
                              const SDouble ext_ident_double_699,
                              const SDouble ext_ident_double_700,
                              const SDouble ext_ident_double_701,
                              const SDouble ext_ident_double_712,
                              const SDouble ext_ident_double_711,
                              const SDouble ext_ident_double_703,
                              const SDouble ext_ident_double_704,
                              const SDouble ext_ident_double_705,
                              const SDouble ext_ident_double_706,
                              const SDouble ext_ident_double_707,
                              const SDouble ext_ident_double_708,
                              const SDouble ext_ident_double_709,
                              const SDouble ext_ident_double_710,
                              const SDouble ext_ident_double_737,
                              const SDouble ext_ident_double_714,
                              const SDouble ext_ident_double_715,
                              const SDouble ext_ident_double_716,
                              const SDouble ext_ident_double_717,
                              const SDouble ext_ident_double_726,
                              const SDouble ext_ident_double_718,
                              const SDouble ext_ident_double_719,
                              const SDouble ext_ident_double_720,
                              const SDouble ext_ident_double_721,
                              const SDouble ext_ident_double_722,
                              const SDouble ext_ident_double_723,
                              const SDouble ext_ident_double_724,
                              const SDouble ext_ident_double_725,
                              const SDouble ext_ident_double_736,
                              const SDouble ext_ident_double_735,
                              const SDouble ext_ident_double_727,
                              const SDouble ext_ident_double_728,
                              const SDouble ext_ident_double_729,
                              const SDouble ext_ident_double_730,
                              const SDouble ext_ident_double_731,
                              const SDouble ext_ident_double_732,
                              const SDouble ext_ident_double_733,
                              const SDouble ext_ident_double_734, const SBool ext_ident_bool_762,
                              const SDouble ext_ident_double_739,
                              const SDouble ext_ownship_z_position_ft,
                              const SDouble ext_ident_double_740,
                              const SDouble ext_intruder_z_position_ft,
                              const SDouble ext_ident_double_743,
                              const SDouble ext_ident_double_741,
                              const SDouble ext_ident_double_742,
                              const SDouble ext_ident_double_752,
                              const SDouble ext_ident_double_744,
                              const SDouble ext_ident_double_745,
                              const SDouble ext_ident_double_746, const SDouble ext_ownship_vz,
                              const SDouble ext_ident_double_747, const SDouble ext_intruder_vz,
                              const SDouble ext_ident_double_748,
                              const SDouble ext_ident_double_749,
                              const SDouble ext_ident_double_750,
                              const SDouble ext_ident_double_751,
                              const SDouble ext_ident_double_761,
                              const SDouble ext_ident_double_753,
                              const SDouble ext_ident_double_754,
                              const SDouble ext_ident_double_755,
                              const SDouble ext_ident_double_756,
                              const SDouble ext_ident_double_757,
                              const SDouble ext_ident_double_758,
                              const SDouble ext_ident_double_759,
                              const SDouble ext_ident_double_760)
{
  const SBool   s0 = ext_ident_bool_738;
  const SBool   s186 = ext_ident_bool_762;
  const SBool   s214 = s0 && s186;
  const SBool   s215 = s214 /* wellClearViolation */;

  return s215;
}
