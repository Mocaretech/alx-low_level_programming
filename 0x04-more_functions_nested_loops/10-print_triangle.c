/*10-print_triangle.c*/
#include "main.h"

/**
 * print_triangle - Prints a triangle using the character #.
 * @size: The size of the triangle.
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)

	{
		for (j = size - i; j > 0; j--)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
