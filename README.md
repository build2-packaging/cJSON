# cJSON - ANSI C JSON parser library

This is a `build2` package repository for [`cJSON`](https://github.com/DaveGamble/cJSON),
an ultralightweight JSON parser in ANSI C.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`cJSON` in your `build2`-based project, then instead see the accompanying
[`PACKAGE-README.md`](libcjson/PACKAGE-README.md) file.

The development setup for `cJSON` uses the standard `bdep`-based workflow.
For example:

```
git clone https://github.com/build2-packaging/cJSON.git
cd cJSON

bdep init -C @gcc cc config.c=gcc
bdep update
bdep test
```
