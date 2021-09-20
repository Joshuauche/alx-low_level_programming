#!/bin/bash
gcc -c *.c -fpic
gcc *.o -shared -Wl, -soname, -o liball.so
