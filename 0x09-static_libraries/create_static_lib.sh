#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar rc liballa.a *.o
