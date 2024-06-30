#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: Prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fib1 = 1, fib2 = 2, next;
	
	printf("%lu, %lu", fib1, fib2); /* Print the first two Fibonacci numbers*/
	
	for (count = 2; count < 50; count++) /* We already printed 2, so start from 2*/
	{
		next = fib1 + fib2; /* Calculate the next Fibonacci number*/
		printf(", %lu", next); /* Print the next Fibonacci number*/
		
		fib1 = fib2; /* Update fib1 to the last fib2*/
		fib2 = next; /* Update fib2 to the new next*/
	}
	printf("\n"); /* Print a newline at the end*/
	return (0); /* Indicate that the program finished successfully*/
}
