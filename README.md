# Auto Decompiler
## Making N64 decompilation easier, powered by [mips_to_c](https://github.com/matt-kempster/mips_to_c)
---
## Tools Included
 - `auto_splitter.py` - splits an asm file with function labels, uses mips_to_c to decompile each of them, and sorts non-matching functions into a directory
 - `auto_updater_2.py` - regenerates a C file generated with auto_splitter
