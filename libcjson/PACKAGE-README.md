# libcjson - ANSI C JSON parser library

This is a `build2` package for the [`cJSON`](https://github.com/DaveGamble/cJSON)
C library. It provides an ultralightweight JSON parser in ANSI C (C89). The
documented include is `#include <cjson/cJSON.h>`.


## Usage

To start using `libcjson` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libcjson ^1.7.19
```

Then import the library in your `buildfile`:

```
import libs = libcjson%lib{cjson}
```


## Importable targets

This package provides the following importable targets:

```
lib{cjson}
lib{cjson-utils}
```

`lib{cjson}` is the core parser. `lib{cjson-utils}` provides RFC 6901 JSON
Pointer, RFC 6902 JSON Patch, and RFC 7386 JSON Merge Patch helpers. It
depends on `lib{cjson}` as an interface dependency.


## Configuration variables

This package provides no configuration variables.
