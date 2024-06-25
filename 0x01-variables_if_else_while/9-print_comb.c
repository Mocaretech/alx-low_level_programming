#include <stdio.h>

/*
 * main - Entry point of the program
 *
 * This program prints all possible combinations of single-digit numbers,
 * separated by ", " in ascending order, followed by a new line,
 * using only the putchar function exactly four times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num = 0;  /* Starting number */

while (num <= 9)
{
putchar('0' + num);  /* Print the digit */
if (num != 9)  /* Print comma and space except after the last digit */
{
putchar(',');  /* Print comma */
putchar(' ');  /* Print space */
}
num++;
}
    
putchar('\n');  /* Print the newline character */

return (0);
}
