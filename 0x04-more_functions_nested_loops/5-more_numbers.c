/* 5-more_numbers.c*/
#include "main.h"

/**
 * print_number - Prints a number using _putchar.
 * @n: The number to print.
 *
 * Description: This function prints a number by breaking it into
 * its digits and printing them individually.
 */
void print_number(int n)
{
	if (n >= 10)
	{
		_putchar((n / 10) + '0'); /* Print the tens place */
	}

	_putchar((n % 10) + '0'); /* Print the units place */
}

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14.
 *
 * Description: This function prints the numbers from 0 to 14 ten times,
 * using _putchar only three times in the main function.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)

	{
		for (j = 0; j <= 14; j++)
		{
			print_number(j);
		}

		_putchar('\n'); /* Print newline after each sequence */
	}
}
