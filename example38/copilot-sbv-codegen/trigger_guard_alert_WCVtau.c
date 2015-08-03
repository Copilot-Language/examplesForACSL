/* File: "trigger_guard_alert_WCVtau.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 006*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="ext_ident_bool_2141",color=cyan4, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (ext_ident_bool_2141);
*/
SBool trigger_guard_alert_WCVtau(const SBool ext_ident_bool_2141,
                                 const SBool ext_ident_bool_2104,
                                 const SDouble ext_ident_double_1675, const SDouble ext_sqrt_1674,
                                 const SDouble ext_ident_double_1673,
                                 const SDouble ext_ident_double_1672,
                                 const SDouble ext_ident_double_1631,
                                 const SDouble ext_ident_double_1630,
                                 const SDouble ext_ownship_longitude,
                                 const SDouble ext_ident_double_1629,
                                 const SDouble ext_ident_double_1628,
                                 const SDouble ext_ident_double_1635,
                                 const SDouble ext_ident_double_1634,
                                 const SDouble ext_intruder_longitude,
                                 const SDouble ext_ident_double_1633,
                                 const SDouble ext_ident_double_1632,
                                 const SDouble ext_ident_double_1639,
                                 const SDouble ext_ident_double_1638,
                                 const SDouble ext_ident_double_1637,
                                 const SDouble ext_ident_double_1636,
                                 const SDouble ext_ident_double_1643,
                                 const SDouble ext_ident_double_1642,
                                 const SDouble ext_ident_double_1641,
                                 const SDouble ext_ident_double_1640,
                                 const SDouble ext_ident_double_1650, const SDouble ext_log_1649,
                                 const SDouble ext_tan_1648, const SDouble ext_ident_double_1644,
                                 const SDouble ext_ident_double_1647,
                                 const SDouble ext_ownship_latitude,
                                 const SDouble ext_ident_double_1646,
                                 const SDouble ext_ident_double_1645,
                                 const SDouble ext_ident_double_1657, const SDouble ext_log_1656,
                                 const SDouble ext_tan_1655, const SDouble ext_ident_double_1651,
                                 const SDouble ext_ident_double_1654,
                                 const SDouble ext_intruder_latitude,
                                 const SDouble ext_ident_double_1653,
                                 const SDouble ext_ident_double_1652,
                                 const SDouble ext_ident_double_1664, const SDouble ext_log_1663,
                                 const SDouble ext_tan_1662, const SDouble ext_ident_double_1658,
                                 const SDouble ext_ident_double_1661,
                                 const SDouble ext_ident_double_1660,
                                 const SDouble ext_ident_double_1659,
                                 const SDouble ext_ident_double_1671, const SDouble ext_log_1670,
                                 const SDouble ext_tan_1669, const SDouble ext_ident_double_1665,
                                 const SDouble ext_ident_double_1668,
                                 const SDouble ext_ident_double_1667,
                                 const SDouble ext_ident_double_1666,
                                 const SDouble ext_ident_double_1676,
                                 const SDouble ext_ident_double_1900, const SDouble ext_sqrt_1899,
                                 const SDouble ext_ident_double_1898,
                                 const SDouble ext_ident_double_1897,
                                 const SDouble ext_ident_double_1680,
                                 const SDouble ext_ident_double_1679,
                                 const SDouble ext_ident_double_1678,
                                 const SDouble ext_ident_double_1677,
                                 const SDouble ext_ident_double_1684,
                                 const SDouble ext_ident_double_1683,
                                 const SDouble ext_ident_double_1682,
                                 const SDouble ext_ident_double_1681,
                                 const SDouble ext_ident_double_1726,
                                 const SDouble ext_ident_double_1685, const SDouble ext_ownship_vx,
                                 const SDouble ext_ident_double_1686, const SDouble ext_intruder_vx,
                                 const SDouble ext_ident_double_1687, const SDouble ext_ownship_vy,
                                 const SDouble ext_ident_double_1688, const SDouble ext_intruder_vy,
                                 const SDouble ext_ident_double_1715,
                                 const SDouble ext_ident_double_1692,
                                 const SDouble ext_ident_double_1691,
                                 const SDouble ext_ident_double_1690,
                                 const SDouble ext_ident_double_1689,
                                 const SDouble ext_ident_double_1696,
                                 const SDouble ext_ident_double_1695,
                                 const SDouble ext_ident_double_1694,
                                 const SDouble ext_ident_double_1693,
                                 const SDouble ext_ident_double_1697,
                                 const SDouble ext_ident_double_1698,
                                 const SDouble ext_ident_double_1705, const SDouble ext_log_1704,
                                 const SDouble ext_tan_1703, const SDouble ext_ident_double_1699,
                                 const SDouble ext_ident_double_1702,
                                 const SDouble ext_ident_double_1701,
                                 const SDouble ext_ident_double_1700,
                                 const SDouble ext_ident_double_1712, const SDouble ext_log_1711,
                                 const SDouble ext_tan_1710, const SDouble ext_ident_double_1706,
                                 const SDouble ext_ident_double_1709,
                                 const SDouble ext_ident_double_1708,
                                 const SDouble ext_ident_double_1707,
                                 const SDouble ext_ident_double_1713,
                                 const SDouble ext_ident_double_1714,
                                 const SDouble ext_ident_double_1725,
                                 const SDouble ext_ident_double_1724,
                                 const SDouble ext_ident_double_1716,
                                 const SDouble ext_ident_double_1717,
                                 const SDouble ext_ident_double_1718,
                                 const SDouble ext_ident_double_1719,
                                 const SDouble ext_ident_double_1720,
                                 const SDouble ext_ident_double_1721,
                                 const SDouble ext_ident_double_1722,
                                 const SDouble ext_ident_double_1723,
                                 const SDouble ext_ident_double_1727,
                                 const SDouble ext_ident_double_1728,
                                 const SDouble ext_ident_double_1732,
                                 const SDouble ext_ident_double_1731,
                                 const SDouble ext_ident_double_1730,
                                 const SDouble ext_ident_double_1729,
                                 const SDouble ext_ident_double_1736,
                                 const SDouble ext_ident_double_1735,
                                 const SDouble ext_ident_double_1734,
                                 const SDouble ext_ident_double_1733,
                                 const SDouble ext_ident_double_1778,
                                 const SDouble ext_ident_double_1737,
                                 const SDouble ext_ident_double_1738,
                                 const SDouble ext_ident_double_1739,
                                 const SDouble ext_ident_double_1740,
                                 const SDouble ext_ident_double_1767,
                                 const SDouble ext_ident_double_1744,
                                 const SDouble ext_ident_double_1743,
                                 const SDouble ext_ident_double_1742,
                                 const SDouble ext_ident_double_1741,
                                 const SDouble ext_ident_double_1748,
                                 const SDouble ext_ident_double_1747,
                                 const SDouble ext_ident_double_1746,
                                 const SDouble ext_ident_double_1745,
                                 const SDouble ext_ident_double_1749,
                                 const SDouble ext_ident_double_1750,
                                 const SDouble ext_ident_double_1757, const SDouble ext_log_1756,
                                 const SDouble ext_tan_1755, const SDouble ext_ident_double_1751,
                                 const SDouble ext_ident_double_1754,
                                 const SDouble ext_ident_double_1753,
                                 const SDouble ext_ident_double_1752,
                                 const SDouble ext_ident_double_1764, const SDouble ext_log_1763,
                                 const SDouble ext_tan_1762, const SDouble ext_ident_double_1758,
                                 const SDouble ext_ident_double_1761,
                                 const SDouble ext_ident_double_1760,
                                 const SDouble ext_ident_double_1759,
                                 const SDouble ext_ident_double_1765,
                                 const SDouble ext_ident_double_1766,
                                 const SDouble ext_ident_double_1777,
                                 const SDouble ext_ident_double_1776,
                                 const SDouble ext_ident_double_1768,
                                 const SDouble ext_ident_double_1769,
                                 const SDouble ext_ident_double_1770,
                                 const SDouble ext_ident_double_1771,
                                 const SDouble ext_ident_double_1772,
                                 const SDouble ext_ident_double_1773,
                                 const SDouble ext_ident_double_1774,
                                 const SDouble ext_ident_double_1775,
                                 const SDouble ext_ident_double_1779,
                                 const SDouble ext_ident_double_1780,
                                 const SDouble ext_ident_double_1787, const SDouble ext_log_1786,
                                 const SDouble ext_tan_1785, const SDouble ext_ident_double_1781,
                                 const SDouble ext_ident_double_1784,
                                 const SDouble ext_ident_double_1783,
                                 const SDouble ext_ident_double_1782,
                                 const SDouble ext_ident_double_1794, const SDouble ext_log_1793,
                                 const SDouble ext_tan_1792, const SDouble ext_ident_double_1788,
                                 const SDouble ext_ident_double_1791,
                                 const SDouble ext_ident_double_1790,
                                 const SDouble ext_ident_double_1789,
                                 const SDouble ext_ident_double_1836,
                                 const SDouble ext_ident_double_1795,
                                 const SDouble ext_ident_double_1796,
                                 const SDouble ext_ident_double_1797,
                                 const SDouble ext_ident_double_1798,
                                 const SDouble ext_ident_double_1825,
                                 const SDouble ext_ident_double_1802,
                                 const SDouble ext_ident_double_1801,
                                 const SDouble ext_ident_double_1800,
                                 const SDouble ext_ident_double_1799,
                                 const SDouble ext_ident_double_1806,
                                 const SDouble ext_ident_double_1805,
                                 const SDouble ext_ident_double_1804,
                                 const SDouble ext_ident_double_1803,
                                 const SDouble ext_ident_double_1807,
                                 const SDouble ext_ident_double_1808,
                                 const SDouble ext_ident_double_1815, const SDouble ext_log_1814,
                                 const SDouble ext_tan_1813, const SDouble ext_ident_double_1809,
                                 const SDouble ext_ident_double_1812,
                                 const SDouble ext_ident_double_1811,
                                 const SDouble ext_ident_double_1810,
                                 const SDouble ext_ident_double_1822, const SDouble ext_log_1821,
                                 const SDouble ext_tan_1820, const SDouble ext_ident_double_1816,
                                 const SDouble ext_ident_double_1819,
                                 const SDouble ext_ident_double_1818,
                                 const SDouble ext_ident_double_1817,
                                 const SDouble ext_ident_double_1823,
                                 const SDouble ext_ident_double_1824,
                                 const SDouble ext_ident_double_1835,
                                 const SDouble ext_ident_double_1834,
                                 const SDouble ext_ident_double_1826,
                                 const SDouble ext_ident_double_1827,
                                 const SDouble ext_ident_double_1828,
                                 const SDouble ext_ident_double_1829,
                                 const SDouble ext_ident_double_1830,
                                 const SDouble ext_ident_double_1831,
                                 const SDouble ext_ident_double_1832,
                                 const SDouble ext_ident_double_1833,
                                 const SDouble ext_ident_double_1837,
                                 const SDouble ext_ident_double_1838,
                                 const SDouble ext_ident_double_1845, const SDouble ext_log_1844,
                                 const SDouble ext_tan_1843, const SDouble ext_ident_double_1839,
                                 const SDouble ext_ident_double_1842,
                                 const SDouble ext_ident_double_1841,
                                 const SDouble ext_ident_double_1840,
                                 const SDouble ext_ident_double_1852, const SDouble ext_log_1851,
                                 const SDouble ext_tan_1850, const SDouble ext_ident_double_1846,
                                 const SDouble ext_ident_double_1849,
                                 const SDouble ext_ident_double_1848,
                                 const SDouble ext_ident_double_1847,
                                 const SDouble ext_ident_double_1894,
                                 const SDouble ext_ident_double_1853,
                                 const SDouble ext_ident_double_1854,
                                 const SDouble ext_ident_double_1855,
                                 const SDouble ext_ident_double_1856,
                                 const SDouble ext_ident_double_1883,
                                 const SDouble ext_ident_double_1860,
                                 const SDouble ext_ident_double_1859,
                                 const SDouble ext_ident_double_1858,
                                 const SDouble ext_ident_double_1857,
                                 const SDouble ext_ident_double_1864,
                                 const SDouble ext_ident_double_1863,
                                 const SDouble ext_ident_double_1862,
                                 const SDouble ext_ident_double_1861,
                                 const SDouble ext_ident_double_1865,
                                 const SDouble ext_ident_double_1866,
                                 const SDouble ext_ident_double_1873, const SDouble ext_log_1872,
                                 const SDouble ext_tan_1871, const SDouble ext_ident_double_1867,
                                 const SDouble ext_ident_double_1870,
                                 const SDouble ext_ident_double_1869,
                                 const SDouble ext_ident_double_1868,
                                 const SDouble ext_ident_double_1880, const SDouble ext_log_1879,
                                 const SDouble ext_tan_1878, const SDouble ext_ident_double_1874,
                                 const SDouble ext_ident_double_1877,
                                 const SDouble ext_ident_double_1876,
                                 const SDouble ext_ident_double_1875,
                                 const SDouble ext_ident_double_1881,
                                 const SDouble ext_ident_double_1882,
                                 const SDouble ext_ident_double_1893,
                                 const SDouble ext_ident_double_1892,
                                 const SDouble ext_ident_double_1884,
                                 const SDouble ext_ident_double_1885,
                                 const SDouble ext_ident_double_1886,
                                 const SDouble ext_ident_double_1887,
                                 const SDouble ext_ident_double_1888,
                                 const SDouble ext_ident_double_1889,
                                 const SDouble ext_ident_double_1890,
                                 const SDouble ext_ident_double_1891,
                                 const SDouble ext_ident_double_1895,
                                 const SDouble ext_ident_double_1896,
                                 const SDouble ext_ident_double_1901,
                                 const SDouble ext_ident_double_2002,
                                 const SDouble ext_ident_double_1928,
                                 const SDouble ext_ident_double_1905,
                                 const SDouble ext_ident_double_1904,
                                 const SDouble ext_ident_double_1903,
                                 const SDouble ext_ident_double_1902,
                                 const SDouble ext_ident_double_1909,
                                 const SDouble ext_ident_double_1908,
                                 const SDouble ext_ident_double_1907,
                                 const SDouble ext_ident_double_1906,
                                 const SDouble ext_ident_double_1910,
                                 const SDouble ext_ident_double_1911,
                                 const SDouble ext_ident_double_1918, const SDouble ext_log_1917,
                                 const SDouble ext_tan_1916, const SDouble ext_ident_double_1912,
                                 const SDouble ext_ident_double_1915,
                                 const SDouble ext_ident_double_1914,
                                 const SDouble ext_ident_double_1913,
                                 const SDouble ext_ident_double_1925, const SDouble ext_log_1924,
                                 const SDouble ext_tan_1923, const SDouble ext_ident_double_1919,
                                 const SDouble ext_ident_double_1922,
                                 const SDouble ext_ident_double_1921,
                                 const SDouble ext_ident_double_1920,
                                 const SDouble ext_ident_double_1926,
                                 const SDouble ext_ident_double_1927,
                                 const SDouble ext_ident_double_1974,
                                 const SDouble ext_ident_double_1973,
                                 const SDouble ext_ident_double_1932,
                                 const SDouble ext_ident_double_1931,
                                 const SDouble ext_ident_double_1930,
                                 const SDouble ext_ident_double_1929,
                                 const SDouble ext_ident_double_1936,
                                 const SDouble ext_ident_double_1935,
                                 const SDouble ext_ident_double_1934,
                                 const SDouble ext_ident_double_1933,
                                 const SDouble ext_ident_double_1940,
                                 const SDouble ext_ident_double_1939,
                                 const SDouble ext_ident_double_1938,
                                 const SDouble ext_ident_double_1937,
                                 const SDouble ext_ident_double_1944,
                                 const SDouble ext_ident_double_1943,
                                 const SDouble ext_ident_double_1942,
                                 const SDouble ext_ident_double_1941,
                                 const SDouble ext_ident_double_1951, const SDouble ext_log_1950,
                                 const SDouble ext_tan_1949, const SDouble ext_ident_double_1945,
                                 const SDouble ext_ident_double_1948,
                                 const SDouble ext_ident_double_1947,
                                 const SDouble ext_ident_double_1946,
                                 const SDouble ext_ident_double_1958, const SDouble ext_log_1957,
                                 const SDouble ext_tan_1956, const SDouble ext_ident_double_1952,
                                 const SDouble ext_ident_double_1955,
                                 const SDouble ext_ident_double_1954,
                                 const SDouble ext_ident_double_1953,
                                 const SDouble ext_ident_double_1965, const SDouble ext_log_1964,
                                 const SDouble ext_tan_1963, const SDouble ext_ident_double_1959,
                                 const SDouble ext_ident_double_1962,
                                 const SDouble ext_ident_double_1961,
                                 const SDouble ext_ident_double_1960,
                                 const SDouble ext_ident_double_1972, const SDouble ext_log_1971,
                                 const SDouble ext_tan_1970, const SDouble ext_ident_double_1966,
                                 const SDouble ext_ident_double_1969,
                                 const SDouble ext_ident_double_1968,
                                 const SDouble ext_ident_double_1967,
                                 const SDouble ext_ident_double_2001,
                                 const SDouble ext_ident_double_1978,
                                 const SDouble ext_ident_double_1977,
                                 const SDouble ext_ident_double_1976,
                                 const SDouble ext_ident_double_1975,
                                 const SDouble ext_ident_double_1982,
                                 const SDouble ext_ident_double_1981,
                                 const SDouble ext_ident_double_1980,
                                 const SDouble ext_ident_double_1979,
                                 const SDouble ext_ident_double_1983,
                                 const SDouble ext_ident_double_1984,
                                 const SDouble ext_ident_double_1991, const SDouble ext_log_1990,
                                 const SDouble ext_tan_1989, const SDouble ext_ident_double_1985,
                                 const SDouble ext_ident_double_1988,
                                 const SDouble ext_ident_double_1987,
                                 const SDouble ext_ident_double_1986,
                                 const SDouble ext_ident_double_1998, const SDouble ext_log_1997,
                                 const SDouble ext_tan_1996, const SDouble ext_ident_double_1992,
                                 const SDouble ext_ident_double_1995,
                                 const SDouble ext_ident_double_1994,
                                 const SDouble ext_ident_double_1993,
                                 const SDouble ext_ident_double_1999,
                                 const SDouble ext_ident_double_2000,
                                 const SDouble ext_ident_double_2103,
                                 const SDouble ext_ident_double_2029,
                                 const SDouble ext_ident_double_2006,
                                 const SDouble ext_ident_double_2005,
                                 const SDouble ext_ident_double_2004,
                                 const SDouble ext_ident_double_2003,
                                 const SDouble ext_ident_double_2010,
                                 const SDouble ext_ident_double_2009,
                                 const SDouble ext_ident_double_2008,
                                 const SDouble ext_ident_double_2007,
                                 const SDouble ext_ident_double_2011,
                                 const SDouble ext_ident_double_2012,
                                 const SDouble ext_ident_double_2019, const SDouble ext_log_2018,
                                 const SDouble ext_tan_2017, const SDouble ext_ident_double_2013,
                                 const SDouble ext_ident_double_2016,
                                 const SDouble ext_ident_double_2015,
                                 const SDouble ext_ident_double_2014,
                                 const SDouble ext_ident_double_2026, const SDouble ext_log_2025,
                                 const SDouble ext_tan_2024, const SDouble ext_ident_double_2020,
                                 const SDouble ext_ident_double_2023,
                                 const SDouble ext_ident_double_2022,
                                 const SDouble ext_ident_double_2021,
                                 const SDouble ext_ident_double_2027,
                                 const SDouble ext_ident_double_2028,
                                 const SDouble ext_ident_double_2075,
                                 const SDouble ext_ident_double_2074,
                                 const SDouble ext_ident_double_2033,
                                 const SDouble ext_ident_double_2032,
                                 const SDouble ext_ident_double_2031,
                                 const SDouble ext_ident_double_2030,
                                 const SDouble ext_ident_double_2037,
                                 const SDouble ext_ident_double_2036,
                                 const SDouble ext_ident_double_2035,
                                 const SDouble ext_ident_double_2034,
                                 const SDouble ext_ident_double_2041,
                                 const SDouble ext_ident_double_2040,
                                 const SDouble ext_ident_double_2039,
                                 const SDouble ext_ident_double_2038,
                                 const SDouble ext_ident_double_2045,
                                 const SDouble ext_ident_double_2044,
                                 const SDouble ext_ident_double_2043,
                                 const SDouble ext_ident_double_2042,
                                 const SDouble ext_ident_double_2052, const SDouble ext_log_2051,
                                 const SDouble ext_tan_2050, const SDouble ext_ident_double_2046,
                                 const SDouble ext_ident_double_2049,
                                 const SDouble ext_ident_double_2048,
                                 const SDouble ext_ident_double_2047,
                                 const SDouble ext_ident_double_2059, const SDouble ext_log_2058,
                                 const SDouble ext_tan_2057, const SDouble ext_ident_double_2053,
                                 const SDouble ext_ident_double_2056,
                                 const SDouble ext_ident_double_2055,
                                 const SDouble ext_ident_double_2054,
                                 const SDouble ext_ident_double_2066, const SDouble ext_log_2065,
                                 const SDouble ext_tan_2064, const SDouble ext_ident_double_2060,
                                 const SDouble ext_ident_double_2063,
                                 const SDouble ext_ident_double_2062,
                                 const SDouble ext_ident_double_2061,
                                 const SDouble ext_ident_double_2073, const SDouble ext_log_2072,
                                 const SDouble ext_tan_2071, const SDouble ext_ident_double_2067,
                                 const SDouble ext_ident_double_2070,
                                 const SDouble ext_ident_double_2069,
                                 const SDouble ext_ident_double_2068,
                                 const SDouble ext_ident_double_2102,
                                 const SDouble ext_ident_double_2079,
                                 const SDouble ext_ident_double_2078,
                                 const SDouble ext_ident_double_2077,
                                 const SDouble ext_ident_double_2076,
                                 const SDouble ext_ident_double_2083,
                                 const SDouble ext_ident_double_2082,
                                 const SDouble ext_ident_double_2081,
                                 const SDouble ext_ident_double_2080,
                                 const SDouble ext_ident_double_2084,
                                 const SDouble ext_ident_double_2085,
                                 const SDouble ext_ident_double_2092, const SDouble ext_log_2091,
                                 const SDouble ext_tan_2090, const SDouble ext_ident_double_2086,
                                 const SDouble ext_ident_double_2089,
                                 const SDouble ext_ident_double_2088,
                                 const SDouble ext_ident_double_2087,
                                 const SDouble ext_ident_double_2099, const SDouble ext_log_2098,
                                 const SDouble ext_tan_2097, const SDouble ext_ident_double_2093,
                                 const SDouble ext_ident_double_2096,
                                 const SDouble ext_ident_double_2095,
                                 const SDouble ext_ident_double_2094,
                                 const SDouble ext_ident_double_2100,
                                 const SDouble ext_ident_double_2101,
                                 const SBool ext_ident_bool_2140,
                                 const SDouble ext_ident_double_2106,
                                 const SDouble ext_ident_double_2105,
                                 const SDouble ext_ownship_altitude_ft,
                                 const SDouble ext_ident_double_2108,
                                 const SDouble ext_ident_double_2107,
                                 const SDouble ext_intruder_altitude_ft,
                                 const SDouble ext_ident_double_2113,
                                 const SDouble ext_ident_double_2110,
                                 const SDouble ext_ident_double_2109,
                                 const SDouble ext_ident_double_2112,
                                 const SDouble ext_ident_double_2111,
                                 const SDouble ext_ident_double_2126,
                                 const SDouble ext_ident_double_2115,
                                 const SDouble ext_ident_double_2114,
                                 const SDouble ext_ident_double_2117,
                                 const SDouble ext_ident_double_2116,
                                 const SDouble ext_ident_double_2118, const SDouble ext_ownship_vz,
                                 const SDouble ext_ident_double_2119, const SDouble ext_intruder_vz,
                                 const SDouble ext_ident_double_2121,
                                 const SDouble ext_ident_double_2120,
                                 const SDouble ext_ident_double_2123,
                                 const SDouble ext_ident_double_2122,
                                 const SDouble ext_ident_double_2124,
                                 const SDouble ext_ident_double_2125,
                                 const SDouble ext_ident_double_2139,
                                 const SDouble ext_ident_double_2128,
                                 const SDouble ext_ident_double_2127,
                                 const SDouble ext_ident_double_2130,
                                 const SDouble ext_ident_double_2129,
                                 const SDouble ext_ident_double_2131,
                                 const SDouble ext_ident_double_2132,
                                 const SDouble ext_ident_double_2134,
                                 const SDouble ext_ident_double_2133,
                                 const SDouble ext_ident_double_2136,
                                 const SDouble ext_ident_double_2135,
                                 const SDouble ext_ident_double_2137,
                                 const SDouble ext_ident_double_2138)
{
  const SBool   s0 = ext_ident_bool_2141;
  return s0;
}