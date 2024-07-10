/*5-sqrt_recursion.c*/
#include "main.h"

/**
 * _sqrt_helper - Helper function to find the square root recursively
 * @n: The number to find the square root of
 * @guess: The current guess for the square root
 *
 * Return: The square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)  /* Base case: found the square root */
	{
		return (guess);
	}
	else if (guess * guess > n)  /* Base case: no natural square root */
	{
		return (-1);
	}
	else  /* Recursive case: increment guess and continue */
	{
		return (_sqrt_helper(n, guess + 1));
	}
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)  /* Error case: negative numbers */
	{
		return (-1);
	}
	return (_sqrt_helper(n, 1));  /* Call helper function with initial of 1 */
}
