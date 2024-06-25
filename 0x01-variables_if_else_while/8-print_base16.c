#include <stdio.h>

/*
 * main - Entry point of the program
 *
 * This program prints all the numbers of base 16 in lowercase,
 * followed by a new line, using only the putchar function exactly three times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num = 48;  /* ASCII value for '0' */

while (num <= 57)  /* ASCII value for '9' */
{
putchar(num);
num++;
}

num = 97;  /* ASCII value for 'a' */

while (num <= 102)  /* ASCII value for 'f' */
{
putchar(num);
num++;
}

putchar('\n');  /* Print the newline character */

return (0);
}
