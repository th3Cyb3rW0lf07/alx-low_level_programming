#!/bin/bash
gcc -Wall -Werror -pendantic -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
