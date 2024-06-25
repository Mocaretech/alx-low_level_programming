#include <stdio.h>

/*
 * main - Entry point of the program
 *
 * This program prints all possible different combinations of three digits,
 * in ascending order, separated by ", " with each combination having three different digits.
 * Uses only the putchar function exactly six times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j, k;

    for (i = 0; i <= 7; i++)  /* First digit from 0 to 7 */
    {
        for (j = i + 1; j <= 8; j++)  /* Second digit from i+1 to 8 */
        {
            for (k = j + 1; k <= 9; k++)  /* Third digit from j+1 to 9 */
            {
                putchar('0' + i);  /* Print first digit */
                putchar('0' + j);  /* Print second digit */
                putchar('0' + k);  /* Print third digit */
                if (i != 7 || j != 8 || k != 9)  /* Check if it's not the last combination */
                {
                    putchar(',');  /* Print comma */
                    putchar(' ');  /* Print space */
                }
            }
        }
    }

    putchar('\n');  /* Print newline character */

    return (0);
}
