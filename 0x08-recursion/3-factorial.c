/*3-factorial.c*/
#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The number to calculate the factorial of
 *
 * Return: Factorial of n, or -1 if n is negative (error)
 */
int factorial(int n)
{
	if (n < 0)  /* Error case: factorial of negative number */
	{
		return (-1);
	}
	else if (n == 0 || n == 1)  /* Base case: factorial of 0 or 1 is 1 */
	{
		return (1);
	}
	else  /* Recursive case: calculate factorial using recursion */
	{
		return (n * factorial(n - 1));
	}
}
