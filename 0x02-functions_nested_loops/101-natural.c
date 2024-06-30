#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: prints the sum of all multiples of 3 or 5 below 1024.
 *
 * Return: Always 0.
 */
int main(void)
{
	int sum = 0; /* This will hold the sum of multiples*/
	int i;

	for (i = 0; i < 1024; i++) /* Loop through numbers from 0 to 1023 */
	{
		if (i % 3 == 0 || i % 5 == 0) /* if the number is multiple of 3 or 5*/
		{
			sum += i; /* Add the number to the sum*/
		}
	}
	printf("%d\n", sum); /* Print the final sum*/
	return (0); /* Indicate that the program finished successfully*/
}
