/*101-print number.c*/
#include "main.h"

/**
 * print_number - Prints an integer using only _putchar.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	/* Handle negative numbers */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* Recursively handle all but the last digit */

	if (n / 10)
		print_number(n / 10);

	/* Print the last digit */
	_putchar(n % 10 + '0');
}
