// SPDX-FileCopyrightText: 2023-present Didier Malenfant
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Based on code Copyright 2021-2022 Tom Storey

#include <ctype.h>
#include <wctype.h>

int iswblank(wint_t wc)
{
    return isblank((int)wc);
}
