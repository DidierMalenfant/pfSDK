#!/bin/zsh
#
# SPDX-FileCopyrightText: 2023-present Didier Malenfant
#
# SPDX-License-Identifier: GPL-3.0-or-later

# -- This is the root folder of the SDK, relative to this script.
# -- Can be useful for includes and such.
PF_SDK_ROOT=$(realpath ${0:a:h}/../..)
export PF_SDK_ROOT

# -- We have two folders where executables may be found.
path+=($PF_SDK_ROOT/bin)
path+=($PF_SDK_ROOT/bin/gcc/bin)
export PATH
