# Oolite Splash

Build with meson.

## Setup

Create a build directory and configure the project.
```meson setup builddir```

## Compile

Use the backend (usually Ninja) to build the binaries.
```meson compile -C builddir```

## Install

Not needed, but you can move the binaries to the system folders like this:
```meson install -C builddir```

## Linux
To target older glibc versions, build with zig. zigcc and zigcpp files look like this:
```#!/bin/bash
zig cc -target x86_64-linux-gnu.2.35 "$@"```

```#!/bin/bash
zig c++ -target x86_64-linux-gnu.2.35 "$@"```

In IDEs like Clion, these scripts can be set up as a toolchain.
