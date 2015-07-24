/* File: "ext_ident_double_1420_arg0.c". Automatically generated by SBV. Do not edit! */

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
4 [label="ext_ident_double_1351",color=cyan4, style=filled]
3 -> 4
648 [label="ext_ident_double_1374",color=cyan4, style=filled]
3 -> 648
1309 [label="ext_ident_double_1396",color=cyan4, style=filled]
2 -> 1309
1953 [label="ext_ident_double_1419",color=cyan4, style=filled]
2 -> 1953


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((( (((ext_ident_double_1351) <= (ext_ident_double_1374))) ? (ext_ident_double_1396) : (ext_ident_double_1419))));
*/
SDouble ext_ident_double_1420_arg0(const SDouble ext_ident_double_1351,
                                   const SDouble ext_ident_double_1330,
                                   const SDouble ext_ownship_position_x,
                                   const SDouble ext_intruder_position_x,
                                   const SDouble ext_ownship_velocity_x,
                                   const SDouble ext_intruder_velocity_x,
                                   const SDouble ext_ownship_position_y,
                                   const SDouble ext_intruder_position_y,
                                   const SDouble ext_ownship_velocity_y,
                                   const SDouble ext_intruder_velocity_y,
                                   const SDouble ext_ident_double_1347,
                                   const SDouble ext_ident_double_1338,
                                   const SWord64 ext_ident_word64_1331,
                                   const SDouble ext_ownship_position_z,
                                   const SWord64 ext_ident_word64_1332,
                                   const SWord64 ext_ident_word64_1333,
                                   const SWord64 ext_ident_word64_1334,
                                   const SWord64 ext_ident_word64_1335,
                                   const SWord64 ext_ident_word64_1336,
                                   const SWord64 ext_ident_word64_1337,
                                   const SDouble ext_ident_double_1346,
                                   const SWord64 ext_ident_word64_1339,
                                   const SWord64 ext_ident_word64_1340,
                                   const SWord64 ext_ident_word64_1341,
                                   const SWord64 ext_ident_word64_1342,
                                   const SWord64 ext_ident_word64_1343,
                                   const SWord64 ext_ident_word64_1344,
                                   const SWord64 ext_ident_word64_1345,
                                   const SDouble ext_ident_double_1349,
                                   const SDouble ext_ident_double_1348,
                                   const SDouble ext_ident_double_1350,
                                   const SDouble ext_ident_double_1374,
                                   const SDouble ext_ident_double_1373,
                                   const SDouble ext_ident_double_1352,
                                   const SDouble ext_ident_double_1369,
                                   const SDouble ext_ident_double_1360,
                                   const SWord64 ext_ident_word64_1353,
                                   const SWord64 ext_ident_word64_1354,
                                   const SWord64 ext_ident_word64_1355,
                                   const SWord64 ext_ident_word64_1356,
                                   const SWord64 ext_ident_word64_1357,
                                   const SWord64 ext_ident_word64_1358,
                                   const SWord64 ext_ident_word64_1359,
                                   const SDouble ext_ident_double_1368,
                                   const SWord64 ext_ident_word64_1361,
                                   const SWord64 ext_ident_word64_1362,
                                   const SWord64 ext_ident_word64_1363,
                                   const SWord64 ext_ident_word64_1364,
                                   const SWord64 ext_ident_word64_1365,
                                   const SWord64 ext_ident_word64_1366,
                                   const SWord64 ext_ident_word64_1367,
                                   const SDouble ext_ident_double_1371,
                                   const SDouble ext_ident_double_1370,
                                   const SDouble ext_ident_double_1372,
                                   const SDouble ext_ownship_velocity_z,
                                   const SDouble ext_ident_double_1396,
                                   const SDouble ext_ident_double_1375,
                                   const SDouble ext_ident_double_1392,
                                   const SDouble ext_ident_double_1383,
                                   const SWord64 ext_ident_word64_1376,
                                   const SWord64 ext_ident_word64_1377,
                                   const SWord64 ext_ident_word64_1378,
                                   const SWord64 ext_ident_word64_1379,
                                   const SWord64 ext_ident_word64_1380,
                                   const SWord64 ext_ident_word64_1381,
                                   const SWord64 ext_ident_word64_1382,
                                   const SDouble ext_ident_double_1391,
                                   const SWord64 ext_ident_word64_1384,
                                   const SWord64 ext_ident_word64_1385,
                                   const SWord64 ext_ident_word64_1386,
                                   const SWord64 ext_ident_word64_1387,
                                   const SWord64 ext_ident_word64_1388,
                                   const SWord64 ext_ident_word64_1389,
                                   const SWord64 ext_ident_word64_1390,
                                   const SDouble ext_ident_double_1394,
                                   const SDouble ext_ident_double_1393,
                                   const SDouble ext_ident_double_1395,
                                   const SDouble ext_ident_double_1419,
                                   const SDouble ext_ident_double_1418,
                                   const SDouble ext_ident_double_1397,
                                   const SDouble ext_ident_double_1414,
                                   const SDouble ext_ident_double_1405,
                                   const SWord64 ext_ident_word64_1398,
                                   const SWord64 ext_ident_word64_1399,
                                   const SWord64 ext_ident_word64_1400,
                                   const SWord64 ext_ident_word64_1401,
                                   const SWord64 ext_ident_word64_1402,
                                   const SWord64 ext_ident_word64_1403,
                                   const SWord64 ext_ident_word64_1404,
                                   const SDouble ext_ident_double_1413,
                                   const SWord64 ext_ident_word64_1406,
                                   const SWord64 ext_ident_word64_1407,
                                   const SWord64 ext_ident_word64_1408,
                                   const SWord64 ext_ident_word64_1409,
                                   const SWord64 ext_ident_word64_1410,
                                   const SWord64 ext_ident_word64_1411,
                                   const SWord64 ext_ident_word64_1412,
                                   const SDouble ext_ident_double_1416,
                                   const SDouble ext_ident_double_1415,
                                   const SDouble ext_ident_double_1417)
{
  const SDouble s0 = ext_ident_double_1351;
  const SDouble s1 = ext_ident_double_1330;
  const SDouble s2 = ext_ownship_position_x;
  const SDouble s3 = ext_intruder_position_x;
  const SDouble s4 = ext_ownship_velocity_x;
  const SDouble s5 = ext_intruder_velocity_x;
  const SDouble s6 = ext_ownship_position_y;
  const SDouble s7 = ext_intruder_position_y;
  const SDouble s8 = ext_ownship_velocity_y;
  const SDouble s9 = ext_intruder_velocity_y;
  const SDouble s10 = ext_ident_double_1347;
  const SDouble s11 = ext_ident_double_1338;
  const SWord64 s12 = ext_ident_word64_1331;
  const SDouble s13 = ext_ownship_position_z;
  const SWord64 s14 = ext_ident_word64_1332;
  const SWord64 s15 = ext_ident_word64_1333;
  const SWord64 s16 = ext_ident_word64_1334;
  const SWord64 s17 = ext_ident_word64_1335;
  const SWord64 s18 = ext_ident_word64_1336;
  const SWord64 s19 = ext_ident_word64_1337;
  const SDouble s20 = ext_ident_double_1346;
  const SWord64 s21 = ext_ident_word64_1339;
  const SWord64 s22 = ext_ident_word64_1340;
  const SWord64 s23 = ext_ident_word64_1341;
  const SWord64 s24 = ext_ident_word64_1342;
  const SWord64 s25 = ext_ident_word64_1343;
  const SWord64 s26 = ext_ident_word64_1344;
  const SWord64 s27 = ext_ident_word64_1345;
  const SDouble s28 = ext_ident_double_1349;
  const SDouble s29 = ext_ident_double_1348;
  const SDouble s30 = ext_ident_double_1350;
  const SDouble s31 = ext_ident_double_1374;
  const SDouble s32 = ext_ident_double_1373;
  const SDouble s33 = ext_ident_double_1352;
  const SDouble s34 = ext_ident_double_1369;
  const SDouble s35 = ext_ident_double_1360;
  const SWord64 s36 = ext_ident_word64_1353;
  const SWord64 s37 = ext_ident_word64_1354;
  const SWord64 s38 = ext_ident_word64_1355;
  const SWord64 s39 = ext_ident_word64_1356;
  const SWord64 s40 = ext_ident_word64_1357;
  const SWord64 s41 = ext_ident_word64_1358;
  const SWord64 s42 = ext_ident_word64_1359;
  const SDouble s43 = ext_ident_double_1368;
  const SWord64 s44 = ext_ident_word64_1361;
  const SWord64 s45 = ext_ident_word64_1362;
  const SWord64 s46 = ext_ident_word64_1363;
  const SWord64 s47 = ext_ident_word64_1364;
  const SWord64 s48 = ext_ident_word64_1365;
  const SWord64 s49 = ext_ident_word64_1366;
  const SWord64 s50 = ext_ident_word64_1367;
  const SDouble s51 = ext_ident_double_1371;
  const SDouble s52 = ext_ident_double_1370;
  const SDouble s53 = ext_ident_double_1372;
  const SDouble s54 = ext_ownship_velocity_z;
  const SDouble s55 = ext_ident_double_1396;
  const SDouble s56 = ext_ident_double_1375;
  const SDouble s57 = ext_ident_double_1392;
  const SDouble s58 = ext_ident_double_1383;
  const SWord64 s59 = ext_ident_word64_1376;
  const SWord64 s60 = ext_ident_word64_1377;
  const SWord64 s61 = ext_ident_word64_1378;
  const SWord64 s62 = ext_ident_word64_1379;
  const SWord64 s63 = ext_ident_word64_1380;
  const SWord64 s64 = ext_ident_word64_1381;
  const SWord64 s65 = ext_ident_word64_1382;
  const SDouble s66 = ext_ident_double_1391;
  const SWord64 s67 = ext_ident_word64_1384;
  const SWord64 s68 = ext_ident_word64_1385;
  const SWord64 s69 = ext_ident_word64_1386;
  const SWord64 s70 = ext_ident_word64_1387;
  const SWord64 s71 = ext_ident_word64_1388;
  const SWord64 s72 = ext_ident_word64_1389;
  const SWord64 s73 = ext_ident_word64_1390;
  const SDouble s74 = ext_ident_double_1394;
  const SDouble s75 = ext_ident_double_1393;
  const SDouble s76 = ext_ident_double_1395;
  const SDouble s77 = ext_ident_double_1419;
  const SDouble s78 = ext_ident_double_1418;
  const SDouble s79 = ext_ident_double_1397;
  const SDouble s80 = ext_ident_double_1414;
  const SDouble s81 = ext_ident_double_1405;
  const SWord64 s82 = ext_ident_word64_1398;
  const SWord64 s83 = ext_ident_word64_1399;
  const SWord64 s84 = ext_ident_word64_1400;
  const SWord64 s85 = ext_ident_word64_1401;
  const SWord64 s86 = ext_ident_word64_1402;
  const SWord64 s87 = ext_ident_word64_1403;
  const SWord64 s88 = ext_ident_word64_1404;
  const SDouble s89 = ext_ident_double_1413;
  const SWord64 s90 = ext_ident_word64_1406;
  const SWord64 s91 = ext_ident_word64_1407;
  const SWord64 s92 = ext_ident_word64_1408;
  const SWord64 s93 = ext_ident_word64_1409;
  const SWord64 s94 = ext_ident_word64_1410;
  const SWord64 s95 = ext_ident_word64_1411;
  const SWord64 s96 = ext_ident_word64_1412;
  const SDouble s97 = ext_ident_double_1416;
  const SDouble s98 = ext_ident_double_1415;
  const SDouble s99 = ext_ident_double_1417;
  const SBool   s100 = s0 <= s31;
  const SDouble s101 = s100 ? s55 : s77;
  const SDouble s102 = s101 /* mini */;

  return s102;
}
