#!/bin/bash
gcc -c -Wall -Werror -pendantic -Wextra *.c
ar -rc liball.a *.o
ranlib liball.a
