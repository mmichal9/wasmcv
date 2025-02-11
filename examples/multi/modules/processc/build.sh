#!/bin/bash

# must have TinyGo installed to obtain the TINYGOROOT, or else separately install wasi-lib
WASI_LIBC_SYSROOT=$(tinygo env TINYGOROOT)

/opt/wasi-sdk/bin/clang --target=wasm32-unknown-unknown -O3 \
        --sysroot="${WASI_LIBC_SYSROOT}/lib/wasi-libc/sysroot" \
        -z stack-size=4096 -Wl,--initial-memory=65536 \
        -o ../processc.wasm process.c itoa.c ../../../../components/c/cv.c ../../../../components/c/cv_component_type.o \
        -Wl,--export=process \
        -Wl,--export=__data_end -Wl,--export=__heap_base \
        -Wl,--strip-all,--no-entry \
        -Wl,--unresolved-symbols=ignore-all \
        -nostdlib \
