/* 6-print_line.c*/
#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of times the character _ should be printed.
 *
 * Description: This function draws a line of underscores based on
 * the value of n and ends with a newline.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)

	{
		_putchar('\n'); /* Print a newline if n is 0 or less */
	}

	else

	{
		for (i = 0; i < n; i++)
		{
			_putchar('_'); /* Print the underscore character n times */
		}

		_putchar('\n'); /* End with a newline */
	}
}
