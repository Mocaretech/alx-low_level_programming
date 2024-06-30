/*7-print_diagonal.c*/
#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times the character \ should be printed.
 *
 * Description: This function prints a diagonal line of backslashes,
 * with each subsequent line indented further to the right.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)

	{
		_putchar('\n'); /* Print a newline if n is 0 or less */
	}

	else

	{
		for (i = 0; i < n; i++)

		{
			for (j = 0; j < i; j++)
			{
				_putchar(' '); /* Print spaces for indentation */
			}
			_putchar('\\'); /* Print the backslash character */
			_putchar('\n'); /* End the line with a newline */
		}
	}
}
