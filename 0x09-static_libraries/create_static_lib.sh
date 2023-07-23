#!/bin/bash
gcc -c *.c
ar rsc liball.a *.o
ar -t liball.a
ranlib liball.a
