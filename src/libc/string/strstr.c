// SPDX-FileCopyrightText: 2023-present pfSDK contributors
//
// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * strstr.c --
 *
 *    Source code for the "strstr" library routine.
 *
 * Copyright (c) 1988-1993 The Regents of the University of California.
 * Copyright (c) 1994 Sun Microsystems, Inc.
 *
 * See the file "license.terms" for information on usage and redistribution
 * of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 * RCS: @(#) $Id: strstr.c,v 1.1.1.3 2003/03/06 00:09:04 landonf Exp $
 */

/*
 *----------------------------------------------------------------------
 *
 * strstr --
 *
 *    Locate the first instance of a substring in a string.
 *
 * Results:
 *    If string contains substring, the return value is the
 *    location of the first matching instance of substring
 *    in string.  If string doesn't contain substring, the
 *    return value is 0.  Matching is done on an exact
 *    character-for-character basis with no wildcards or special
 *    characters.
 *
 * Side effects:
 *    None.
 *
 *----------------------------------------------------------------------
 */

#include <string.h>

char* strstr(const char* string, const char* substring)
{
    const char* a;
    const char* b;

    /* First scan quickly through the two strings looking for a
     * single-character match.  When it's found, then compare the
     * rest of the substring.
     */

    b = substring;

    if(*b == 0)
    {
        return (char*)(uintptr_t)string;
    }

    for(; *string != 0; string += 1)
    {
        if(*string != *b)
        {
            continue;
        }

        a = string;

        while(1)
        {
            if(*b == 0)
            {
                return (char*)(uintptr_t)string;
            }

            if(*a++ != *b++)
            {
                break;
            }
        }

        b = substring;
    }

    return NULL;
}
