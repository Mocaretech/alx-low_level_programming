#include <stdio.h>

/*
 * main - Entry point of the program
 *
 * This program prints all possible combinations of two two-digit numbers,
 * each ranging from 00 to 99, in ascending order, separated by a space.
 * The combinations are separated by ", " and printed with two digits.
 * Uses only the putchar function exactly eight times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j;

    for (i = 0; i <= 98; i++)  /* First number from 0 to 98 */
    {
        for (j = i + 1; j <= 99; j++)  /* Second number from i+1 to 99 */
        {
            putchar('0' + i / 10);  /* Print tens digit of the first number */
            putchar('0' + i % 10);  /* Print units digit of the first number */
            putchar(' ');  /* Print space */
            putchar('0' + j / 10);  /* Print tens digit of the second number */
            putchar('0' + j % 10);  /* Print units digit of the second number */
            if (i != 98 || j != 99)  /* Check if it's not the last combination */
            {
                putchar(',');  /* Print comma */
                putchar(' ');  /* Print space */
            }
        }
    }

    putchar('\n');  /* Print newline character */

    return (0);
}
