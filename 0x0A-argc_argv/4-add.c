#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of command line arguments
 * @argv: array containing the command line arguments
 *
 * Return: 0 if successful, 1 if any of the arguments are not digits
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	/* If no additional arguments, print 0 */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* Iterate through each argument */
	for (i = 1; i < argc; i++)
	{

		/* Check if each character in the argument is a digit */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		/* Convert argument to integer and add to sum */
		sum += atoi(argv[i]);
	}

	/* Print the result */
	printf("%d\n", sum);
	return (0);
}
