// SPDX-FileCopyrightText: 2023-present Didier Malenfant
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Based on code Copyright 2021-2022 Tom Storey

#include <assert.h>
#include <errno.h>
#include <string.h>

int strerror_r(int err_no, char* buffer, size_t buffer_size)
{
    int r = 0;
    char* err_msg = strerror(err_no);
    size_t length = strlen(err_msg);

    assert(buffer);

    if(length >= buffer_size)
    {
        if(buffer_size)
        {
            // -1 so we don't copy an extra byte...
            memcpy(buffer, err_msg, buffer_size - 1);
            // since we will null terminate the string
            buffer[buffer_size - 1] = 0;
        }

        r = ERANGE;
    }
    else
    {
        // +1 for null termination
        memcpy(buffer, err_msg, length + 1);
    }

    return r;
}
