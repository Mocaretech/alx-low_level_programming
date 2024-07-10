/*4-pow_recursion.c*/
#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: The base number
 * @y: The exponent
 *
 * Return: x raised to the power of y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)  /* Error case: negative exponent */
	{
		return (-1);
	}
	else if (y == 0)  /* Base case: exponent is 0 */
	{
		return (1);
	}
	else  /* Recursive case: calculate power using recursion */
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

