/* 2-print_alphabet_x10.c */
#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times, in lowercase,
 *                      followed by a new line each time
 *
 * Description: This function prints the lowercase alphabet from 'a' to 'z'
 *              10 times. Each alphabet is followed by a newline.
 */
void print_alphabet_x10(void)
{
    int i;
    char letter;

    for (i = 0; i < 10; i++) /* Loop to repeat 10 times */
    {
        for (letter = 'a'; letter <= 'z'; letter++) /* Loop through a to z */
        {
            _putchar(letter); /* Print the current letter */
        }
        _putchar('\n'); /* Print a new line after each alphabet */
    }
}
