/*5-sign.c */
#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 *
 * @n: The number whose sign is to be determined.
 *
 * Description: This function prints the sign of a number n.
 * It prints '+' and returns 1 if n is greater than zero,
 * '0' and returns 0 if n is zero, and '-' and returns -1 if n
 * is less than zero.
 *
 * Return: 1 if n is greater than zero,
 *         0 if n is zero,
 *        -1 if n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
