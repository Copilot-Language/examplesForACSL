/* File: "ext_ident_bool_559_arg0.c". Automatically generated by SBV. Do not edit! */

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
3 [label="ext_ident_bool_534",color=cyan4, style=filled]
2 -> 3
1220 [label="ext_ident_bool_558",color=cyan4, style=filled]
2 -> 1220


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ident_bool_534) && (ext_ident_bool_558))));
*/
SBool ext_ident_bool_559_arg0(const SBool ext_ident_bool_534,
                              const SDouble ext_ident_double_353, const SDouble ext_sqrt_352,
                              const SDouble ext_ident_double_351,
                              const SDouble ext_ident_double_350,
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
                              const SDouble ext_ident_double_349,
                              const SDouble ext_ident_double_354,
                              const SDouble ext_ident_double_470, const SDouble ext_sqrt_469,
                              const SDouble ext_ident_double_468,
                              const SDouble ext_ident_double_467,
                              const SDouble ext_ident_double_355,
                              const SDouble ext_ident_double_356,
                              const SDouble ext_ident_double_380,
                              const SDouble ext_ident_double_357, const SDouble ext_ownship_vx,
                              const SDouble ext_ident_double_358, const SDouble ext_intruder_vx,
                              const SDouble ext_ident_double_359, const SDouble ext_ownship_vy,
                              const SDouble ext_ident_double_360, const SDouble ext_intruder_vy,
                              const SDouble ext_ident_double_369,
                              const SDouble ext_ident_double_361,
                              const SDouble ext_ident_double_362,
                              const SDouble ext_ident_double_363,
                              const SDouble ext_ident_double_364,
                              const SDouble ext_ident_double_365,
                              const SDouble ext_ident_double_366,
                              const SDouble ext_ident_double_367,
                              const SDouble ext_ident_double_368,
                              const SDouble ext_ident_double_379,
                              const SDouble ext_ident_double_378,
                              const SDouble ext_ident_double_370,
                              const SDouble ext_ident_double_371,
                              const SDouble ext_ident_double_372,
                              const SDouble ext_ident_double_373,
                              const SDouble ext_ident_double_374,
                              const SDouble ext_ident_double_375,
                              const SDouble ext_ident_double_376,
                              const SDouble ext_ident_double_377,
                              const SDouble ext_ident_double_381,
                              const SDouble ext_ident_double_382,
                              const SDouble ext_ident_double_383,
                              const SDouble ext_ident_double_384,
                              const SDouble ext_ident_double_408,
                              const SDouble ext_ident_double_385,
                              const SDouble ext_ident_double_386,
                              const SDouble ext_ident_double_387,
                              const SDouble ext_ident_double_388,
                              const SDouble ext_ident_double_397,
                              const SDouble ext_ident_double_389,
                              const SDouble ext_ident_double_390,
                              const SDouble ext_ident_double_391,
                              const SDouble ext_ident_double_392,
                              const SDouble ext_ident_double_393,
                              const SDouble ext_ident_double_394,
                              const SDouble ext_ident_double_395,
                              const SDouble ext_ident_double_396,
                              const SDouble ext_ident_double_407,
                              const SDouble ext_ident_double_406,
                              const SDouble ext_ident_double_398,
                              const SDouble ext_ident_double_399,
                              const SDouble ext_ident_double_400,
                              const SDouble ext_ident_double_401,
                              const SDouble ext_ident_double_402,
                              const SDouble ext_ident_double_403,
                              const SDouble ext_ident_double_404,
                              const SDouble ext_ident_double_405,
                              const SDouble ext_ident_double_409,
                              const SDouble ext_ident_double_410,
                              const SDouble ext_ident_double_411,
                              const SDouble ext_ident_double_412,
                              const SDouble ext_ident_double_436,
                              const SDouble ext_ident_double_413,
                              const SDouble ext_ident_double_414,
                              const SDouble ext_ident_double_415,
                              const SDouble ext_ident_double_416,
                              const SDouble ext_ident_double_425,
                              const SDouble ext_ident_double_417,
                              const SDouble ext_ident_double_418,
                              const SDouble ext_ident_double_419,
                              const SDouble ext_ident_double_420,
                              const SDouble ext_ident_double_421,
                              const SDouble ext_ident_double_422,
                              const SDouble ext_ident_double_423,
                              const SDouble ext_ident_double_424,
                              const SDouble ext_ident_double_435,
                              const SDouble ext_ident_double_434,
                              const SDouble ext_ident_double_426,
                              const SDouble ext_ident_double_427,
                              const SDouble ext_ident_double_428,
                              const SDouble ext_ident_double_429,
                              const SDouble ext_ident_double_430,
                              const SDouble ext_ident_double_431,
                              const SDouble ext_ident_double_432,
                              const SDouble ext_ident_double_433,
                              const SDouble ext_ident_double_437,
                              const SDouble ext_ident_double_438,
                              const SDouble ext_ident_double_439,
                              const SDouble ext_ident_double_440,
                              const SDouble ext_ident_double_464,
                              const SDouble ext_ident_double_441,
                              const SDouble ext_ident_double_442,
                              const SDouble ext_ident_double_443,
                              const SDouble ext_ident_double_444,
                              const SDouble ext_ident_double_453,
                              const SDouble ext_ident_double_445,
                              const SDouble ext_ident_double_446,
                              const SDouble ext_ident_double_447,
                              const SDouble ext_ident_double_448,
                              const SDouble ext_ident_double_449,
                              const SDouble ext_ident_double_450,
                              const SDouble ext_ident_double_451,
                              const SDouble ext_ident_double_452,
                              const SDouble ext_ident_double_463,
                              const SDouble ext_ident_double_462,
                              const SDouble ext_ident_double_454,
                              const SDouble ext_ident_double_455,
                              const SDouble ext_ident_double_456,
                              const SDouble ext_ident_double_457,
                              const SDouble ext_ident_double_458,
                              const SDouble ext_ident_double_459,
                              const SDouble ext_ident_double_460,
                              const SDouble ext_ident_double_461,
                              const SDouble ext_ident_double_465,
                              const SDouble ext_ident_double_466,
                              const SDouble ext_ident_double_471,
                              const SDouble ext_ident_double_502,
                              const SDouble ext_ident_double_480,
                              const SDouble ext_ident_double_472,
                              const SDouble ext_ident_double_473,
                              const SDouble ext_ident_double_474,
                              const SDouble ext_ident_double_475,
                              const SDouble ext_ident_double_476,
                              const SDouble ext_ident_double_477,
                              const SDouble ext_ident_double_478,
                              const SDouble ext_ident_double_479,
                              const SDouble ext_ident_double_481,
                              const SDouble ext_ident_double_482,
                              const SDouble ext_ident_double_492,
                              const SDouble ext_ident_double_491,
                              const SDouble ext_ident_double_483,
                              const SDouble ext_ident_double_484,
                              const SDouble ext_ident_double_485,
                              const SDouble ext_ident_double_486,
                              const SDouble ext_ident_double_487,
                              const SDouble ext_ident_double_488,
                              const SDouble ext_ident_double_489,
                              const SDouble ext_ident_double_490,
                              const SDouble ext_ident_double_501,
                              const SDouble ext_ident_double_493,
                              const SDouble ext_ident_double_494,
                              const SDouble ext_ident_double_495,
                              const SDouble ext_ident_double_496,
                              const SDouble ext_ident_double_497,
                              const SDouble ext_ident_double_498,
                              const SDouble ext_ident_double_499,
                              const SDouble ext_ident_double_500,
                              const SDouble ext_ident_double_533,
                              const SDouble ext_ident_double_511,
                              const SDouble ext_ident_double_503,
                              const SDouble ext_ident_double_504,
                              const SDouble ext_ident_double_505,
                              const SDouble ext_ident_double_506,
                              const SDouble ext_ident_double_507,
                              const SDouble ext_ident_double_508,
                              const SDouble ext_ident_double_509,
                              const SDouble ext_ident_double_510,
                              const SDouble ext_ident_double_512,
                              const SDouble ext_ident_double_513,
                              const SDouble ext_ident_double_523,
                              const SDouble ext_ident_double_522,
                              const SDouble ext_ident_double_514,
                              const SDouble ext_ident_double_515,
                              const SDouble ext_ident_double_516,
                              const SDouble ext_ident_double_517,
                              const SDouble ext_ident_double_518,
                              const SDouble ext_ident_double_519,
                              const SDouble ext_ident_double_520,
                              const SDouble ext_ident_double_521,
                              const SDouble ext_ident_double_532,
                              const SDouble ext_ident_double_524,
                              const SDouble ext_ident_double_525,
                              const SDouble ext_ident_double_526,
                              const SDouble ext_ident_double_527,
                              const SDouble ext_ident_double_528,
                              const SDouble ext_ident_double_529,
                              const SDouble ext_ident_double_530,
                              const SDouble ext_ident_double_531, const SBool ext_ident_bool_558,
                              const SDouble ext_ident_double_535,
                              const SDouble ext_ownship_z_position_ft,
                              const SDouble ext_ident_double_536,
                              const SDouble ext_intruder_z_position_ft,
                              const SDouble ext_ident_double_539,
                              const SDouble ext_ident_double_537,
                              const SDouble ext_ident_double_538,
                              const SDouble ext_ident_double_548,
                              const SDouble ext_ident_double_540,
                              const SDouble ext_ident_double_541,
                              const SDouble ext_ident_double_542, const SDouble ext_ownship_vz,
                              const SDouble ext_ident_double_543, const SDouble ext_intruder_vz,
                              const SDouble ext_ident_double_544,
                              const SDouble ext_ident_double_545,
                              const SDouble ext_ident_double_546,
                              const SDouble ext_ident_double_547,
                              const SDouble ext_ident_double_557,
                              const SDouble ext_ident_double_549,
                              const SDouble ext_ident_double_550,
                              const SDouble ext_ident_double_551,
                              const SDouble ext_ident_double_552,
                              const SDouble ext_ident_double_553,
                              const SDouble ext_ident_double_554,
                              const SDouble ext_ident_double_555,
                              const SDouble ext_ident_double_556)
{
  const SBool   s0 = ext_ident_bool_534;
  const SBool   s200 = ext_ident_bool_558;
  const SBool   s228 = s0 && s200;
  const SBool   s229 = s228 /* wellClearViolation */;

  return s229;
}
