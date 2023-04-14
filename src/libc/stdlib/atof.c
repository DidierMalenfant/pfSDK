// SPDX-FileCopyrightText: 2023-present Didier Malenfant
//
// SPDX-License-Identifier: GPL-3.0-or-later

#include <stdlib.h>

double atof(const char* src)
{
    return strtod(src, NULL);
}
