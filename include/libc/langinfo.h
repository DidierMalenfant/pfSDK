// SPDX-FileCopyrightText: 2023-present Didier Malenfant
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Based on code Copyright 2021-2022 Tom Storey

#ifndef __LANGINFO_H_
#define __LANGINFO_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <nl_types.h>

// TODO: pull documentation from
// https://www.gnu.org/software/libc/manual/html_node/The-Elegant-and-Fast-Way.html

/**
 * The nl_langinfo function can be used to access individual elements of the locale categories.
 * Unlike the localeconv function, which returns all the information, nl_langinfo lets the caller
 * select what information it requires. This is very fast and it is not a problem to call this
 * function multiple times.
 *
 * A second advantage is that in addition to the numeric and monetary formatting information,
 * information from the LC_TIME and LC_MESSAGES categories is available.
 *
 * The type `item` is defined in nl_types.h. The argument item is a numeric value defined in this
 * header.
 */
char* nl_langinfo(nl_item item);

#define ABDAY_1 0x20000
#define ABDAY_2 0x20001
#define ABDAY_3 0x20002
#define ABDAY_4 0x20003
#define ABDAY_5 0x20004
#define ABDAY_6 0x20005
#define ABDAY_7 0x20006

#define DAY_1 0x20007
#define DAY_2 0x20008
#define DAY_3 0x20009
#define DAY_4 0x2000A
#define DAY_5 0x2000B
#define DAY_6 0x2000C
#define DAY_7 0x2000D

#define ABMON_1 0x2000E
#define ABMON_2 0x2000F
#define ABMON_3 0x20010
#define ABMON_4 0x20011
#define ABMON_5 0x20012
#define ABMON_6 0x20013
#define ABMON_7 0x20014
#define ABMON_8 0x20015
#define ABMON_9 0x20016
#define ABMON_10 0x20017
#define ABMON_11 0x20018
#define ABMON_12 0x20019

#define MON_1 0x2001A
#define MON_2 0x2001B
#define MON_3 0x2001C
#define MON_4 0x2001D
#define MON_5 0x2001E
#define MON_6 0x2001F
#define MON_7 0x20020
#define MON_8 0x20021
#define MON_9 0x20022
#define MON_10 0x20023
#define MON_11 0x20024
#define MON_12 0x20025

#define AM_STR 0x20026
#define PM_STR 0x20027

#define D_T_FMT 0x20028
#define D_FMT 0x20029
#define T_FMT 0x2002A
#define T_FMT_AMPM 0x2002B

#define ERA 0x2002C
#define ERA_D_FMT 0x2002E
#define ALT_DIGITS 0x2002F
#define ERA_D_T_FMT 0x20030
#define ERA_T_FMT 0x20031

#define CODESET 14

#define CRNCYSTR 0x4000F

#define RADIXCHAR 0x10000
#define THOUSEP 0x10001
#define YESEXPR 0x50000
#define NOEXPR 0x50001

#define _NL_LOCALE_NAME(cat) (((cat) << 16) | 0xffff)

#if defined(_GNU_SOURCE)
#define NL_LOCALE_NAME(cat) _NL_LOCALE_NAME(cat)
#endif

#if defined(_GNU_SOURCE) || defined(_BSD_SOURCE)
#define YESSTR 0x50002
#define NOSTR 0x50003
#endif

#ifdef __cplusplus
}
#endif

#endif // __LANGINFO_H_
