/*8-print_diagsums.c*/
#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the square matrix of integers
 * @size: Size of the matrix (number of rows and columns)
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;
	
	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];         /* Sum of the main diagonal */
		sum2 += a[i * size + (size - 1 - i)]; /* Sum of the anti-diagonal */
	}

	printf("%d, %d\n", sum1, sum2);
}
