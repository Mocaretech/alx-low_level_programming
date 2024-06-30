#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2;
	unsigned long fib1_high, fib1_low, fib2_high, fib2_low;
	unsigned long high, low;
	int count;
	
	printf("%lu, %lu", fib1, fib2);
	
	for (count = 2; count < 98; count++)
	
	{
		if (fib1 + fib2 < fib1)
		{
			fib1_high = fib1 / 1000000000;
			fib1_low = fib1 % 1000000000;
			fib2_high = fib2 / 1000000000;
			fib2_low = fib2 % 1000000000;
			high = fib1_high + fib2_high + ((fib1_low + fib2_low) / 1000000000);
			low = (fib1_low + fib2_low) % 1000000000;
			printf(", %lu%09lu", high, low);
			fib1 = fib2;
			fib2 = high * 1000000000 + low;
		}
		else
		{
			fib2 += fib1;
			fib1 = fib2 - fib1;
			printf(", %lu", fib2);
		}
	}
	printf("\n");
	return (0);
}
