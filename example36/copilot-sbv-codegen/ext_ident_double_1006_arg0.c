/* File: "ext_ident_double_1006_arg0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="label: sq",color=plum, style=filled]
0 -> 1
2 [label="op2: *",color=green4, style=filled]
1 -> 2
3 [label="ext_ident_double_913",color=cyan4, style=filled]
2 -> 3
2615 [label="ext_ident_double_1005",color=cyan4, style=filled]
2 -> 2615


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((((ext_ident_double_913) * (ext_ident_double_1005))));
*/
SDouble ext_ident_double_1006_arg0(const SDouble ext_ident_double_913,
                                   const SDouble ext_ident_double_912,
                                   const SDouble ext_ident_double_843,
                                   const SDouble ext_ident_double_822,
                                   const SDouble ext_ownship_position_x,
                                   const SDouble ext_intruder_position_x,
                                   const SDouble ext_ownship_velocity_x,
                                   const SDouble ext_intruder_velocity_x,
                                   const SDouble ext_ownship_position_y,
                                   const SDouble ext_intruder_position_y,
                                   const SDouble ext_ownship_velocity_y,
                                   const SDouble ext_intruder_velocity_y,
                                   const SDouble ext_ident_double_839,
                                   const SDouble ext_ident_double_830,
                                   const SWord64 ext_ident_word64_823,
                                   const SDouble ext_ownship_position_z,
                                   const SWord64 ext_ident_word64_824,
                                   const SWord64 ext_ident_word64_825,
                                   const SWord64 ext_ident_word64_826,
                                   const SWord64 ext_ident_word64_827,
                                   const SWord64 ext_ident_word64_828,
                                   const SWord64 ext_ident_word64_829,
                                   const SDouble ext_ident_double_838,
                                   const SWord64 ext_ident_word64_831,
                                   const SWord64 ext_ident_word64_832,
                                   const SWord64 ext_ident_word64_833,
                                   const SWord64 ext_ident_word64_834,
                                   const SWord64 ext_ident_word64_835,
                                   const SWord64 ext_ident_word64_836,
                                   const SWord64 ext_ident_word64_837,
                                   const SDouble ext_ident_double_841,
                                   const SDouble ext_ident_double_840,
                                   const SDouble ext_ident_double_842,
                                   const SDouble ext_ident_double_866,
                                   const SDouble ext_ident_double_865,
                                   const SDouble ext_ident_double_844,
                                   const SDouble ext_ident_double_861,
                                   const SDouble ext_ident_double_852,
                                   const SWord64 ext_ident_word64_845,
                                   const SWord64 ext_ident_word64_846,
                                   const SWord64 ext_ident_word64_847,
                                   const SWord64 ext_ident_word64_848,
                                   const SWord64 ext_ident_word64_849,
                                   const SWord64 ext_ident_word64_850,
                                   const SWord64 ext_ident_word64_851,
                                   const SDouble ext_ident_double_860,
                                   const SWord64 ext_ident_word64_853,
                                   const SWord64 ext_ident_word64_854,
                                   const SWord64 ext_ident_word64_855,
                                   const SWord64 ext_ident_word64_856,
                                   const SWord64 ext_ident_word64_857,
                                   const SWord64 ext_ident_word64_858,
                                   const SWord64 ext_ident_word64_859,
                                   const SDouble ext_ident_double_863,
                                   const SDouble ext_ident_double_862,
                                   const SDouble ext_ident_double_864,
                                   const SDouble ext_ownship_velocity_z,
                                   const SDouble ext_ident_double_888,
                                   const SDouble ext_ident_double_867,
                                   const SDouble ext_ident_double_884,
                                   const SDouble ext_ident_double_875,
                                   const SWord64 ext_ident_word64_868,
                                   const SWord64 ext_ident_word64_869,
                                   const SWord64 ext_ident_word64_870,
                                   const SWord64 ext_ident_word64_871,
                                   const SWord64 ext_ident_word64_872,
                                   const SWord64 ext_ident_word64_873,
                                   const SWord64 ext_ident_word64_874,
                                   const SDouble ext_ident_double_883,
                                   const SWord64 ext_ident_word64_876,
                                   const SWord64 ext_ident_word64_877,
                                   const SWord64 ext_ident_word64_878,
                                   const SWord64 ext_ident_word64_879,
                                   const SWord64 ext_ident_word64_880,
                                   const SWord64 ext_ident_word64_881,
                                   const SWord64 ext_ident_word64_882,
                                   const SDouble ext_ident_double_886,
                                   const SDouble ext_ident_double_885,
                                   const SDouble ext_ident_double_887,
                                   const SDouble ext_ident_double_911,
                                   const SDouble ext_ident_double_910,
                                   const SDouble ext_ident_double_889,
                                   const SDouble ext_ident_double_906,
                                   const SDouble ext_ident_double_897,
                                   const SWord64 ext_ident_word64_890,
                                   const SWord64 ext_ident_word64_891,
                                   const SWord64 ext_ident_word64_892,
                                   const SWord64 ext_ident_word64_893,
                                   const SWord64 ext_ident_word64_894,
                                   const SWord64 ext_ident_word64_895,
                                   const SWord64 ext_ident_word64_896,
                                   const SDouble ext_ident_double_905,
                                   const SWord64 ext_ident_word64_898,
                                   const SWord64 ext_ident_word64_899,
                                   const SWord64 ext_ident_word64_900,
                                   const SWord64 ext_ident_word64_901,
                                   const SWord64 ext_ident_word64_902,
                                   const SWord64 ext_ident_word64_903,
                                   const SWord64 ext_ident_word64_904,
                                   const SDouble ext_ident_double_908,
                                   const SDouble ext_ident_double_907,
                                   const SDouble ext_ident_double_909,
                                   const SDouble ext_ident_double_1005,
                                   const SDouble ext_ident_double_1004,
                                   const SDouble ext_ident_double_935,
                                   const SDouble ext_ident_double_914,
                                   const SDouble ext_ident_double_931,
                                   const SDouble ext_ident_double_922,
                                   const SWord64 ext_ident_word64_915,
                                   const SWord64 ext_ident_word64_916,
                                   const SWord64 ext_ident_word64_917,
                                   const SWord64 ext_ident_word64_918,
                                   const SWord64 ext_ident_word64_919,
                                   const SWord64 ext_ident_word64_920,
                                   const SWord64 ext_ident_word64_921,
                                   const SDouble ext_ident_double_930,
                                   const SWord64 ext_ident_word64_923,
                                   const SWord64 ext_ident_word64_924,
                                   const SWord64 ext_ident_word64_925,
                                   const SWord64 ext_ident_word64_926,
                                   const SWord64 ext_ident_word64_927,
                                   const SWord64 ext_ident_word64_928,
                                   const SWord64 ext_ident_word64_929,
                                   const SDouble ext_ident_double_933,
                                   const SDouble ext_ident_double_932,
                                   const SDouble ext_ident_double_934,
                                   const SDouble ext_ident_double_958,
                                   const SDouble ext_ident_double_957,
                                   const SDouble ext_ident_double_936,
                                   const SDouble ext_ident_double_953,
                                   const SDouble ext_ident_double_944,
                                   const SWord64 ext_ident_word64_937,
                                   const SWord64 ext_ident_word64_938,
                                   const SWord64 ext_ident_word64_939,
                                   const SWord64 ext_ident_word64_940,
                                   const SWord64 ext_ident_word64_941,
                                   const SWord64 ext_ident_word64_942,
                                   const SWord64 ext_ident_word64_943,
                                   const SDouble ext_ident_double_952,
                                   const SWord64 ext_ident_word64_945,
                                   const SWord64 ext_ident_word64_946,
                                   const SWord64 ext_ident_word64_947,
                                   const SWord64 ext_ident_word64_948,
                                   const SWord64 ext_ident_word64_949,
                                   const SWord64 ext_ident_word64_950,
                                   const SWord64 ext_ident_word64_951,
                                   const SDouble ext_ident_double_955,
                                   const SDouble ext_ident_double_954,
                                   const SDouble ext_ident_double_956,
                                   const SDouble ext_ident_double_980,
                                   const SDouble ext_ident_double_959,
                                   const SDouble ext_ident_double_976,
                                   const SDouble ext_ident_double_967,
                                   const SWord64 ext_ident_word64_960,
                                   const SWord64 ext_ident_word64_961,
                                   const SWord64 ext_ident_word64_962,
                                   const SWord64 ext_ident_word64_963,
                                   const SWord64 ext_ident_word64_964,
                                   const SWord64 ext_ident_word64_965,
                                   const SWord64 ext_ident_word64_966,
                                   const SDouble ext_ident_double_975,
                                   const SWord64 ext_ident_word64_968,
                                   const SWord64 ext_ident_word64_969,
                                   const SWord64 ext_ident_word64_970,
                                   const SWord64 ext_ident_word64_971,
                                   const SWord64 ext_ident_word64_972,
                                   const SWord64 ext_ident_word64_973,
                                   const SWord64 ext_ident_word64_974,
                                   const SDouble ext_ident_double_978,
                                   const SDouble ext_ident_double_977,
                                   const SDouble ext_ident_double_979,
                                   const SDouble ext_ident_double_1003,
                                   const SDouble ext_ident_double_1002,
                                   const SDouble ext_ident_double_981,
                                   const SDouble ext_ident_double_998,
                                   const SDouble ext_ident_double_989,
                                   const SWord64 ext_ident_word64_982,
                                   const SWord64 ext_ident_word64_983,
                                   const SWord64 ext_ident_word64_984,
                                   const SWord64 ext_ident_word64_985,
                                   const SWord64 ext_ident_word64_986,
                                   const SWord64 ext_ident_word64_987,
                                   const SWord64 ext_ident_word64_988,
                                   const SDouble ext_ident_double_997,
                                   const SWord64 ext_ident_word64_990,
                                   const SWord64 ext_ident_word64_991,
                                   const SWord64 ext_ident_word64_992,
                                   const SWord64 ext_ident_word64_993,
                                   const SWord64 ext_ident_word64_994,
                                   const SWord64 ext_ident_word64_995,
                                   const SWord64 ext_ident_word64_996,
                                   const SDouble ext_ident_double_1000,
                                   const SDouble ext_ident_double_999,
                                   const SDouble ext_ident_double_1001)
{
  const SDouble s0 = ext_ident_double_913;
  const SDouble s1 = ext_ident_double_912;
  const SDouble s2 = ext_ident_double_843;
  const SDouble s3 = ext_ident_double_822;
  const SDouble s4 = ext_ownship_position_x;
  const SDouble s5 = ext_intruder_position_x;
  const SDouble s6 = ext_ownship_velocity_x;
  const SDouble s7 = ext_intruder_velocity_x;
  const SDouble s8 = ext_ownship_position_y;
  const SDouble s9 = ext_intruder_position_y;
  const SDouble s10 = ext_ownship_velocity_y;
  const SDouble s11 = ext_intruder_velocity_y;
  const SDouble s12 = ext_ident_double_839;
  const SDouble s13 = ext_ident_double_830;
  const SWord64 s14 = ext_ident_word64_823;
  const SDouble s15 = ext_ownship_position_z;
  const SWord64 s16 = ext_ident_word64_824;
  const SWord64 s17 = ext_ident_word64_825;
  const SWord64 s18 = ext_ident_word64_826;
  const SWord64 s19 = ext_ident_word64_827;
  const SWord64 s20 = ext_ident_word64_828;
  const SWord64 s21 = ext_ident_word64_829;
  const SDouble s22 = ext_ident_double_838;
  const SWord64 s23 = ext_ident_word64_831;
  const SWord64 s24 = ext_ident_word64_832;
  const SWord64 s25 = ext_ident_word64_833;
  const SWord64 s26 = ext_ident_word64_834;
  const SWord64 s27 = ext_ident_word64_835;
  const SWord64 s28 = ext_ident_word64_836;
  const SWord64 s29 = ext_ident_word64_837;
  const SDouble s30 = ext_ident_double_841;
  const SDouble s31 = ext_ident_double_840;
  const SDouble s32 = ext_ident_double_842;
  const SDouble s33 = ext_ident_double_866;
  const SDouble s34 = ext_ident_double_865;
  const SDouble s35 = ext_ident_double_844;
  const SDouble s36 = ext_ident_double_861;
  const SDouble s37 = ext_ident_double_852;
  const SWord64 s38 = ext_ident_word64_845;
  const SWord64 s39 = ext_ident_word64_846;
  const SWord64 s40 = ext_ident_word64_847;
  const SWord64 s41 = ext_ident_word64_848;
  const SWord64 s42 = ext_ident_word64_849;
  const SWord64 s43 = ext_ident_word64_850;
  const SWord64 s44 = ext_ident_word64_851;
  const SDouble s45 = ext_ident_double_860;
  const SWord64 s46 = ext_ident_word64_853;
  const SWord64 s47 = ext_ident_word64_854;
  const SWord64 s48 = ext_ident_word64_855;
  const SWord64 s49 = ext_ident_word64_856;
  const SWord64 s50 = ext_ident_word64_857;
  const SWord64 s51 = ext_ident_word64_858;
  const SWord64 s52 = ext_ident_word64_859;
  const SDouble s53 = ext_ident_double_863;
  const SDouble s54 = ext_ident_double_862;
  const SDouble s55 = ext_ident_double_864;
  const SDouble s56 = ext_ownship_velocity_z;
  const SDouble s57 = ext_ident_double_888;
  const SDouble s58 = ext_ident_double_867;
  const SDouble s59 = ext_ident_double_884;
  const SDouble s60 = ext_ident_double_875;
  const SWord64 s61 = ext_ident_word64_868;
  const SWord64 s62 = ext_ident_word64_869;
  const SWord64 s63 = ext_ident_word64_870;
  const SWord64 s64 = ext_ident_word64_871;
  const SWord64 s65 = ext_ident_word64_872;
  const SWord64 s66 = ext_ident_word64_873;
  const SWord64 s67 = ext_ident_word64_874;
  const SDouble s68 = ext_ident_double_883;
  const SWord64 s69 = ext_ident_word64_876;
  const SWord64 s70 = ext_ident_word64_877;
  const SWord64 s71 = ext_ident_word64_878;
  const SWord64 s72 = ext_ident_word64_879;
  const SWord64 s73 = ext_ident_word64_880;
  const SWord64 s74 = ext_ident_word64_881;
  const SWord64 s75 = ext_ident_word64_882;
  const SDouble s76 = ext_ident_double_886;
  const SDouble s77 = ext_ident_double_885;
  const SDouble s78 = ext_ident_double_887;
  const SDouble s79 = ext_ident_double_911;
  const SDouble s80 = ext_ident_double_910;
  const SDouble s81 = ext_ident_double_889;
  const SDouble s82 = ext_ident_double_906;
  const SDouble s83 = ext_ident_double_897;
  const SWord64 s84 = ext_ident_word64_890;
  const SWord64 s85 = ext_ident_word64_891;
  const SWord64 s86 = ext_ident_word64_892;
  const SWord64 s87 = ext_ident_word64_893;
  const SWord64 s88 = ext_ident_word64_894;
  const SWord64 s89 = ext_ident_word64_895;
  const SWord64 s90 = ext_ident_word64_896;
  const SDouble s91 = ext_ident_double_905;
  const SWord64 s92 = ext_ident_word64_898;
  const SWord64 s93 = ext_ident_word64_899;
  const SWord64 s94 = ext_ident_word64_900;
  const SWord64 s95 = ext_ident_word64_901;
  const SWord64 s96 = ext_ident_word64_902;
  const SWord64 s97 = ext_ident_word64_903;
  const SWord64 s98 = ext_ident_word64_904;
  const SDouble s99 = ext_ident_double_908;
  const SDouble s100 = ext_ident_double_907;
  const SDouble s101 = ext_ident_double_909;
  const SDouble s102 = ext_ident_double_1005;
  const SDouble s103 = ext_ident_double_1004;
  const SDouble s104 = ext_ident_double_935;
  const SDouble s105 = ext_ident_double_914;
  const SDouble s106 = ext_ident_double_931;
  const SDouble s107 = ext_ident_double_922;
  const SWord64 s108 = ext_ident_word64_915;
  const SWord64 s109 = ext_ident_word64_916;
  const SWord64 s110 = ext_ident_word64_917;
  const SWord64 s111 = ext_ident_word64_918;
  const SWord64 s112 = ext_ident_word64_919;
  const SWord64 s113 = ext_ident_word64_920;
  const SWord64 s114 = ext_ident_word64_921;
  const SDouble s115 = ext_ident_double_930;
  const SWord64 s116 = ext_ident_word64_923;
  const SWord64 s117 = ext_ident_word64_924;
  const SWord64 s118 = ext_ident_word64_925;
  const SWord64 s119 = ext_ident_word64_926;
  const SWord64 s120 = ext_ident_word64_927;
  const SWord64 s121 = ext_ident_word64_928;
  const SWord64 s122 = ext_ident_word64_929;
  const SDouble s123 = ext_ident_double_933;
  const SDouble s124 = ext_ident_double_932;
  const SDouble s125 = ext_ident_double_934;
  const SDouble s126 = ext_ident_double_958;
  const SDouble s127 = ext_ident_double_957;
  const SDouble s128 = ext_ident_double_936;
  const SDouble s129 = ext_ident_double_953;
  const SDouble s130 = ext_ident_double_944;
  const SWord64 s131 = ext_ident_word64_937;
  const SWord64 s132 = ext_ident_word64_938;
  const SWord64 s133 = ext_ident_word64_939;
  const SWord64 s134 = ext_ident_word64_940;
  const SWord64 s135 = ext_ident_word64_941;
  const SWord64 s136 = ext_ident_word64_942;
  const SWord64 s137 = ext_ident_word64_943;
  const SDouble s138 = ext_ident_double_952;
  const SWord64 s139 = ext_ident_word64_945;
  const SWord64 s140 = ext_ident_word64_946;
  const SWord64 s141 = ext_ident_word64_947;
  const SWord64 s142 = ext_ident_word64_948;
  const SWord64 s143 = ext_ident_word64_949;
  const SWord64 s144 = ext_ident_word64_950;
  const SWord64 s145 = ext_ident_word64_951;
  const SDouble s146 = ext_ident_double_955;
  const SDouble s147 = ext_ident_double_954;
  const SDouble s148 = ext_ident_double_956;
  const SDouble s149 = ext_ident_double_980;
  const SDouble s150 = ext_ident_double_959;
  const SDouble s151 = ext_ident_double_976;
  const SDouble s152 = ext_ident_double_967;
  const SWord64 s153 = ext_ident_word64_960;
  const SWord64 s154 = ext_ident_word64_961;
  const SWord64 s155 = ext_ident_word64_962;
  const SWord64 s156 = ext_ident_word64_963;
  const SWord64 s157 = ext_ident_word64_964;
  const SWord64 s158 = ext_ident_word64_965;
  const SWord64 s159 = ext_ident_word64_966;
  const SDouble s160 = ext_ident_double_975;
  const SWord64 s161 = ext_ident_word64_968;
  const SWord64 s162 = ext_ident_word64_969;
  const SWord64 s163 = ext_ident_word64_970;
  const SWord64 s164 = ext_ident_word64_971;
  const SWord64 s165 = ext_ident_word64_972;
  const SWord64 s166 = ext_ident_word64_973;
  const SWord64 s167 = ext_ident_word64_974;
  const SDouble s168 = ext_ident_double_978;
  const SDouble s169 = ext_ident_double_977;
  const SDouble s170 = ext_ident_double_979;
  const SDouble s171 = ext_ident_double_1003;
  const SDouble s172 = ext_ident_double_1002;
  const SDouble s173 = ext_ident_double_981;
  const SDouble s174 = ext_ident_double_998;
  const SDouble s175 = ext_ident_double_989;
  const SWord64 s176 = ext_ident_word64_982;
  const SWord64 s177 = ext_ident_word64_983;
  const SWord64 s178 = ext_ident_word64_984;
  const SWord64 s179 = ext_ident_word64_985;
  const SWord64 s180 = ext_ident_word64_986;
  const SWord64 s181 = ext_ident_word64_987;
  const SWord64 s182 = ext_ident_word64_988;
  const SDouble s183 = ext_ident_double_997;
  const SWord64 s184 = ext_ident_word64_990;
  const SWord64 s185 = ext_ident_word64_991;
  const SWord64 s186 = ext_ident_word64_992;
  const SWord64 s187 = ext_ident_word64_993;
  const SWord64 s188 = ext_ident_word64_994;
  const SWord64 s189 = ext_ident_word64_995;
  const SWord64 s190 = ext_ident_word64_996;
  const SDouble s191 = ext_ident_double_1000;
  const SDouble s192 = ext_ident_double_999;
  const SDouble s193 = ext_ident_double_1001;
  const SDouble s194 = s0 * s102;
  const SDouble s195 = s194 /* sq */;

  return s195;
}
