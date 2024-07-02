#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array of integers, followed by a new line.
 * @a: A pointer to the array of integers.
 * @n: The number of elements of the array to be printed.
 *
 * This function prints the first n elements of the array. The elements are
 * printed in the same order as they are stored in the array, and are separated
 * by a comma and space. A new line is printed after the last element.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		
		if (i < n - 1)

		{
			printf(", ");
		}
	}

	printf("\n");
}
