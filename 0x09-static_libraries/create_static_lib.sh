#!/bin/bash
gcc -Wall -Wextra -Werrior -Pedantic -c *.c
ar rc liball.a *.o
