#!/bin/bash
gcc -c *.c -fpic
gcc *.o -shared -Wl -o liball.so
