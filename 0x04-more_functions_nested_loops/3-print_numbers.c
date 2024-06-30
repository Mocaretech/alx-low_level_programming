/*3-print_numbers.c */
#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9, followed by a new line.
 *
 * Description: This function prints the numbers from 0 to 9 using _putchar,
 * and then prints a new line. It uses _putchar only twice.
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
