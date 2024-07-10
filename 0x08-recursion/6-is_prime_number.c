#include "main.h"

/**
 * _is_prime_helper - Helper function to check if a number is prime recursively
 * @n: The number to check
 * @divisor: The current divisor to check against n
 *
 * Return: 1 if prime, 0 otherwise
 */
int _is_prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)  /* Base case: no divisors found */
	{
		return (1);
	}
	else if (n % divisor == 0)  /* Base case: found divisor other than 1 and n */
	{
		return (0);
	}
	else  /* Recursive case: increment divisor and continue */
	{
		return (_is_prime_helper(n, divisor + 1));
	}
}

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: The number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)  /* Edge case: numbers less than or equal to 1 */
	{
		return (0);
	}
	else if (n == 2)  /* Base case: 2 is prime */
	{
		return (1);
	}
	else if (n % 2 == 0)  /* Even numbers greater than 2 are not prime */
	{
		return (0);
	}
	else  /* Check for odd numbers greater than 2 */
	{
		return (_is_prime_helper(n, 3));
	}
}
