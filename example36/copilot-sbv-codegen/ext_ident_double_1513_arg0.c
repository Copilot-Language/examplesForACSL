/* File: "ext_ident_double_1513_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="label: mini",color=plum, style=filled]
0 -> 1
2 [label="op3: mux",color=green4, style=filled]
1 -> 2
3 [label="op2: <=",color=green4, style=filled]
2 -> 3
4 [label="ext_ident_double_1444",color=cyan4, style=filled]
3 -> 4
648 [label="ext_ident_double_1467",color=cyan4, style=filled]
3 -> 648
1309 [label="ext_ident_double_1489",color=cyan4, style=filled]
2 -> 1309
1953 [label="ext_ident_double_1512",color=cyan4, style=filled]
2 -> 1953


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((( (((ext_ident_double_1444) <= (ext_ident_double_1467))) ? (ext_ident_double_1489) : (ext_ident_double_1512))));
*/
SDouble ext_ident_double_1513_arg0(const SDouble ext_ident_double_1444,
                                   const SDouble ext_ident_double_1423,
                                   const SDouble ext_ownship_position_x,
                                   const SDouble ext_intruder_position_x,
                                   const SDouble ext_ownship_velocity_x,
                                   const SDouble ext_intruder_velocity_x,
                                   const SDouble ext_ownship_position_y,
                                   const SDouble ext_intruder_position_y,
                                   const SDouble ext_ownship_velocity_y,
                                   const SDouble ext_intruder_velocity_y,
                                   const SDouble ext_ident_double_1440,
                                   const SDouble ext_ident_double_1431,
                                   const SWord64 ext_ident_word64_1424,
                                   const SDouble ext_ownship_position_z,
                                   const SWord64 ext_ident_word64_1425,
                                   const SWord64 ext_ident_word64_1426,
                                   const SWord64 ext_ident_word64_1427,
                                   const SWord64 ext_ident_word64_1428,
                                   const SWord64 ext_ident_word64_1429,
                                   const SWord64 ext_ident_word64_1430,
                                   const SDouble ext_ident_double_1439,
                                   const SWord64 ext_ident_word64_1432,
                                   const SWord64 ext_ident_word64_1433,
                                   const SWord64 ext_ident_word64_1434,
                                   const SWord64 ext_ident_word64_1435,
                                   const SWord64 ext_ident_word64_1436,
                                   const SWord64 ext_ident_word64_1437,
                                   const SWord64 ext_ident_word64_1438,
                                   const SDouble ext_ident_double_1442,
                                   const SDouble ext_ident_double_1441,
                                   const SDouble ext_ident_double_1443,
                                   const SDouble ext_ident_double_1467,
                                   const SDouble ext_ident_double_1466,
                                   const SDouble ext_ident_double_1445,
                                   const SDouble ext_ident_double_1462,
                                   const SDouble ext_ident_double_1453,
                                   const SWord64 ext_ident_word64_1446,
                                   const SWord64 ext_ident_word64_1447,
                                   const SWord64 ext_ident_word64_1448,
                                   const SWord64 ext_ident_word64_1449,
                                   const SWord64 ext_ident_word64_1450,
                                   const SWord64 ext_ident_word64_1451,
                                   const SWord64 ext_ident_word64_1452,
                                   const SDouble ext_ident_double_1461,
                                   const SWord64 ext_ident_word64_1454,
                                   const SWord64 ext_ident_word64_1455,
                                   const SWord64 ext_ident_word64_1456,
                                   const SWord64 ext_ident_word64_1457,
                                   const SWord64 ext_ident_word64_1458,
                                   const SWord64 ext_ident_word64_1459,
                                   const SWord64 ext_ident_word64_1460,
                                   const SDouble ext_ident_double_1464,
                                   const SDouble ext_ident_double_1463,
                                   const SDouble ext_ident_double_1465,
                                   const SDouble ext_ownship_velocity_z,
                                   const SDouble ext_ident_double_1489,
                                   const SDouble ext_ident_double_1468,
                                   const SDouble ext_ident_double_1485,
                                   const SDouble ext_ident_double_1476,
                                   const SWord64 ext_ident_word64_1469,
                                   const SWord64 ext_ident_word64_1470,
                                   const SWord64 ext_ident_word64_1471,
                                   const SWord64 ext_ident_word64_1472,
                                   const SWord64 ext_ident_word64_1473,
                                   const SWord64 ext_ident_word64_1474,
                                   const SWord64 ext_ident_word64_1475,
                                   const SDouble ext_ident_double_1484,
                                   const SWord64 ext_ident_word64_1477,
                                   const SWord64 ext_ident_word64_1478,
                                   const SWord64 ext_ident_word64_1479,
                                   const SWord64 ext_ident_word64_1480,
                                   const SWord64 ext_ident_word64_1481,
                                   const SWord64 ext_ident_word64_1482,
                                   const SWord64 ext_ident_word64_1483,
                                   const SDouble ext_ident_double_1487,
                                   const SDouble ext_ident_double_1486,
                                   const SDouble ext_ident_double_1488,
                                   const SDouble ext_ident_double_1512,
                                   const SDouble ext_ident_double_1511,
                                   const SDouble ext_ident_double_1490,
                                   const SDouble ext_ident_double_1507,
                                   const SDouble ext_ident_double_1498,
                                   const SWord64 ext_ident_word64_1491,
                                   const SWord64 ext_ident_word64_1492,
                                   const SWord64 ext_ident_word64_1493,
                                   const SWord64 ext_ident_word64_1494,
                                   const SWord64 ext_ident_word64_1495,
                                   const SWord64 ext_ident_word64_1496,
                                   const SWord64 ext_ident_word64_1497,
                                   const SDouble ext_ident_double_1506,
                                   const SWord64 ext_ident_word64_1499,
                                   const SWord64 ext_ident_word64_1500,
                                   const SWord64 ext_ident_word64_1501,
                                   const SWord64 ext_ident_word64_1502,
                                   const SWord64 ext_ident_word64_1503,
                                   const SWord64 ext_ident_word64_1504,
                                   const SWord64 ext_ident_word64_1505,
                                   const SDouble ext_ident_double_1509,
                                   const SDouble ext_ident_double_1508,
                                   const SDouble ext_ident_double_1510)
{
  const SDouble s0 = ext_ident_double_1444;
  const SDouble s1 = ext_ident_double_1423;
  const SDouble s2 = ext_ownship_position_x;
  const SDouble s3 = ext_intruder_position_x;
  const SDouble s4 = ext_ownship_velocity_x;
  const SDouble s5 = ext_intruder_velocity_x;
  const SDouble s6 = ext_ownship_position_y;
  const SDouble s7 = ext_intruder_position_y;
  const SDouble s8 = ext_ownship_velocity_y;
  const SDouble s9 = ext_intruder_velocity_y;
  const SDouble s10 = ext_ident_double_1440;
  const SDouble s11 = ext_ident_double_1431;
  const SWord64 s12 = ext_ident_word64_1424;
  const SDouble s13 = ext_ownship_position_z;
  const SWord64 s14 = ext_ident_word64_1425;
  const SWord64 s15 = ext_ident_word64_1426;
  const SWord64 s16 = ext_ident_word64_1427;
  const SWord64 s17 = ext_ident_word64_1428;
  const SWord64 s18 = ext_ident_word64_1429;
  const SWord64 s19 = ext_ident_word64_1430;
  const SDouble s20 = ext_ident_double_1439;
  const SWord64 s21 = ext_ident_word64_1432;
  const SWord64 s22 = ext_ident_word64_1433;
  const SWord64 s23 = ext_ident_word64_1434;
  const SWord64 s24 = ext_ident_word64_1435;
  const SWord64 s25 = ext_ident_word64_1436;
  const SWord64 s26 = ext_ident_word64_1437;
  const SWord64 s27 = ext_ident_word64_1438;
  const SDouble s28 = ext_ident_double_1442;
  const SDouble s29 = ext_ident_double_1441;
  const SDouble s30 = ext_ident_double_1443;
  const SDouble s31 = ext_ident_double_1467;
  const SDouble s32 = ext_ident_double_1466;
  const SDouble s33 = ext_ident_double_1445;
  const SDouble s34 = ext_ident_double_1462;
  const SDouble s35 = ext_ident_double_1453;
  const SWord64 s36 = ext_ident_word64_1446;
  const SWord64 s37 = ext_ident_word64_1447;
  const SWord64 s38 = ext_ident_word64_1448;
  const SWord64 s39 = ext_ident_word64_1449;
  const SWord64 s40 = ext_ident_word64_1450;
  const SWord64 s41 = ext_ident_word64_1451;
  const SWord64 s42 = ext_ident_word64_1452;
  const SDouble s43 = ext_ident_double_1461;
  const SWord64 s44 = ext_ident_word64_1454;
  const SWord64 s45 = ext_ident_word64_1455;
  const SWord64 s46 = ext_ident_word64_1456;
  const SWord64 s47 = ext_ident_word64_1457;
  const SWord64 s48 = ext_ident_word64_1458;
  const SWord64 s49 = ext_ident_word64_1459;
  const SWord64 s50 = ext_ident_word64_1460;
  const SDouble s51 = ext_ident_double_1464;
  const SDouble s52 = ext_ident_double_1463;
  const SDouble s53 = ext_ident_double_1465;
  const SDouble s54 = ext_ownship_velocity_z;
  const SDouble s55 = ext_ident_double_1489;
  const SDouble s56 = ext_ident_double_1468;
  const SDouble s57 = ext_ident_double_1485;
  const SDouble s58 = ext_ident_double_1476;
  const SWord64 s59 = ext_ident_word64_1469;
  const SWord64 s60 = ext_ident_word64_1470;
  const SWord64 s61 = ext_ident_word64_1471;
  const SWord64 s62 = ext_ident_word64_1472;
  const SWord64 s63 = ext_ident_word64_1473;
  const SWord64 s64 = ext_ident_word64_1474;
  const SWord64 s65 = ext_ident_word64_1475;
  const SDouble s66 = ext_ident_double_1484;
  const SWord64 s67 = ext_ident_word64_1477;
  const SWord64 s68 = ext_ident_word64_1478;
  const SWord64 s69 = ext_ident_word64_1479;
  const SWord64 s70 = ext_ident_word64_1480;
  const SWord64 s71 = ext_ident_word64_1481;
  const SWord64 s72 = ext_ident_word64_1482;
  const SWord64 s73 = ext_ident_word64_1483;
  const SDouble s74 = ext_ident_double_1487;
  const SDouble s75 = ext_ident_double_1486;
  const SDouble s76 = ext_ident_double_1488;
  const SDouble s77 = ext_ident_double_1512;
  const SDouble s78 = ext_ident_double_1511;
  const SDouble s79 = ext_ident_double_1490;
  const SDouble s80 = ext_ident_double_1507;
  const SDouble s81 = ext_ident_double_1498;
  const SWord64 s82 = ext_ident_word64_1491;
  const SWord64 s83 = ext_ident_word64_1492;
  const SWord64 s84 = ext_ident_word64_1493;
  const SWord64 s85 = ext_ident_word64_1494;
  const SWord64 s86 = ext_ident_word64_1495;
  const SWord64 s87 = ext_ident_word64_1496;
  const SWord64 s88 = ext_ident_word64_1497;
  const SDouble s89 = ext_ident_double_1506;
  const SWord64 s90 = ext_ident_word64_1499;
  const SWord64 s91 = ext_ident_word64_1500;
  const SWord64 s92 = ext_ident_word64_1501;
  const SWord64 s93 = ext_ident_word64_1502;
  const SWord64 s94 = ext_ident_word64_1503;
  const SWord64 s95 = ext_ident_word64_1504;
  const SWord64 s96 = ext_ident_word64_1505;
  const SDouble s97 = ext_ident_double_1509;
  const SDouble s98 = ext_ident_double_1508;
  const SDouble s99 = ext_ident_double_1510;
  const SBool   s100 = s0 <= s31;
  const SDouble s101 = s100 ? s55 : s77;
  const SDouble s102 = s101 /* mini */;

  return s102;
}
