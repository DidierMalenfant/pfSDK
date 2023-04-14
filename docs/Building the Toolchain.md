# Building the toolchain

If you dowloaded a relesae build of the SDK then all the binaries for the **MC68000** toolchain and the **pf-x** should be already provided in the `bin` folder. If you need to rebuild those to, for example, update them to new version or fix issues with different OS versions you can use the `pfBuildToolChain` script.

### Building on macOS

First if you don't already have **brew** installed, head over to [its website](https://brew.sh) and install it. You'll also need a supported version of [**Python 3**](https://didier.malenfant.net/blog/nerdy/2022/08/17/installing-python.html).

A build script `pfBuildToolChain` is provided in the bin folder. It takes a destination folder as its single argument and will created a folder named `pfSDKToolchain` inside that folder with the build results. Be careful that the destination folder does not contain any spaces sin its path.

The resulting executables can then be found in `pfSDKToolchain/m68k-eabi-elf`.
