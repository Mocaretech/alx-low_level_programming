#!/bin/bash
# This script compiles all .c files into .o files and creates a static library libmy.a

gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
ar rcs libmy.a *.o
