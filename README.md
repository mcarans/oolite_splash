# Oolite Splash

## Linux
To target older glibc versions, build with zig. zigcc and zigcpp files look like this:
```#!/bin/bash
zig cc -target x86_64-linux-gnu.2.35 "$@"```

```#!/bin/bash
zig c++ -target x86_64-linux-gnu.2.35 "$@"```
