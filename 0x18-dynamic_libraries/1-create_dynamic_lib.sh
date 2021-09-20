#!/bin/bash
gcc -c *.c -fpic
nm -D --defined-only liball.so
gcc *.o -shared -o liball.so
