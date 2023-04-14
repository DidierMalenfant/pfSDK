// SPDX-FileCopyrightText: 2023-present Didier Malenfant
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Based on code Copyright 2021-2022 Tom Storey

#include <printf.h>
#include <stdio.h>

int putchar(int c)
{
    _putchar((char)c);
    return c;
}
