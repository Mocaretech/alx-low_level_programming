#include <stdio.h>

/* 
 * main - Entry point of the program.
 *
 * Description: Finds and prints the sum of the even-valued terms in the 
 * Fibonacci sequence whose values do not exceed 4,000,000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, next = 0;
	unsigned long sum = 0;

	/* Loop until fib1 exceeds 4,000,000 */
	while (fib1 <= 4000000)
	{

		/* Check if the current Fibonacci number is even */
		if (fib1 % 2 == 0)
		{
			sum += fib1; /* Add even Fibonacci number to the sum */
		}

		/* Calculate the next Fibonacci number */
		next = fib1 + fib2;

		/* Update fib1 and fib2 for the next iteration */
		fib1 = fib2;
		fib2 = next;

	}
	/* Print the sum of the even-valued terms */
	printf("%lu\n", sum);

	return 0; /* Indicate that the program finished successfully */
}
