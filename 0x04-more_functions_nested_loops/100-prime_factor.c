/*100-prime_factor.c*/
#include <stdio.h>
#include <math.h>

/**
 * main - Finds and prints the largest prime factor of 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	long num = 612852475143;
	long factor = 2;
	long largest = 0;
	
	/* Remove factors of 2 */
	while (num % factor == 0)
	{
		largest = factor;
		num /= factor;
	}
	
	/* Check odd factors from 3 upwards */
	for (factor = 3; factor <= sqrt(num); factor += 2)
	{
		while (num % factor == 0)
		{
			largest = factor;
			num /= factor;
		}
	}
	
	/* If num is still greater than 2, then it is prime */
	if (num > 2)
		largest = num;
	
	printf("%ld\n", largest);
	
	return 0;
}
