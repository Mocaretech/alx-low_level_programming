#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum num of coins to make change for  amount of money
 * @argc: number of command line arguments
 * @argv: array containing the command line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;
	int denominations[] = {25, 10, 5, 2, 1};
	int i;

	/* Check if the number of arguments is exactly 1 */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert the argument to an integer */
	cents = atoi(argv[1]);

	/* If the number is negative, print 0 and exit */
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	/* Calculate the minimum number of coins */
	for (i = 0; i < 5 && cents > 0; i++)
	{
		while (cents >= denominations[i])
		{
			cents -= denominations[i];
			coins++;
		}
	}

	/* Print the result */
	printf("%d\n", coins);
	return (0);
}
