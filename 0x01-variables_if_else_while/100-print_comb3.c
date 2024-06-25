#include <stdio.h>

/*
 * main - Entry point of the program
 *
 * This program prints all possible different combinations of two digits,
 * in ascending order, separated by ", " with each combination having two different digits.
 * Uses only the putchar function exactly five times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;

for (i = 0; i <= 8; i++)  /* Loop through first digit from 0 to 8 */
{
for (j = i + 1; j <= 9; j++)  /* Loop through second digit from i+1 to 9 */
{
putchar('0' + i);  /* Print first digit */
putchar('0' + j);  /* Print second digit */
if (i != 8 || j != 9)  /* Check if it's not the last combination */
{
putchar(',');  /* Print comma */
putchar(' ');  /* Print space */
}
}
}

putchar('\n');  /* Print newline character */

return (0);
}
