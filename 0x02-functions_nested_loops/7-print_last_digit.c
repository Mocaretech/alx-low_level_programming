/* 7-print_last_digit.c */
#include "main.h"

/**
 *  * print_last_digit - Prints the last digit of a number.
 *
 * @n: The number to check.
 *
 * Description: This function prints and returns the last digit
 * of the integer `n`. The last digit is obtained using the modulus
 * operator `%`. If the number is negative, the function converts
 * the last digit to positive before printing and returning it.
 *
 * Return: The last digit of the number `n`.
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}

	_putchar(last_digit + '0');
	return (last_digit);
}
