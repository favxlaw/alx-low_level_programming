#!/bin/bash
gcc -c -Wall -Werror -Wextra *.c
ar -rcs liball.a *.o
gcc main.c -L. -lall -o main
