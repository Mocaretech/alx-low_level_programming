#include <stdio.h>

/*
 * main - Entry point of the program
 *
 * This program prints the lowercase alphabet in reverse order, followed by a
 * new line, using only the putchar function exactly twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int letter = 122;  /* ASCII value for 'z' */

    while (letter >= 97)  /* ASCII value for 'a' */
    {
        putchar(letter);  /* Print the current letter */
        letter--;  /* Move to the previous letter */
    }

    putchar('\n');  /* Print the newline character */

    return (0);
}
