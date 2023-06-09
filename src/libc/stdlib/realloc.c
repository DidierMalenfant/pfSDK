// SPDX-FileCopyrightText: 2023-present Didier Malenfant
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Based on code Copyright 2021-2022 Tom Storey

#include <stdlib.h>
#include <string.h>

void* realloc(void* ptr, size_t size)
{
    void* new_data = NULL;

    if(size)
    {
        if(!ptr)
        {
            return malloc(size);
        }

        new_data = malloc(size);
        if(new_data)
        {
            memcpy(new_data, ptr, size); // TODO: unsafe copy...
            free(ptr); // we always move the data. free.
        }
    }

    return new_data;
}

void* reallocf(void* ptr, size_t size)
{
    void* p = realloc(ptr, size);

    if((p == NULL) && (ptr != NULL))
    {
        free(ptr);
    }

    return p;
}
