#!/bin/bash
# A script to create a static library called liball.a from all .c files in the current directory

# Compile each .c file into an object file .o
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

# Create the static library liball.a from the .o files
ar rcs liball.a *.o

# Clean up the .o files
rm *.o
