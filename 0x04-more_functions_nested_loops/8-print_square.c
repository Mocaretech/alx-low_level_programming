/* 8-print_square.c*/
#include "main.h"

/**
 * print_square - Prints a square using the character #.
 * @size: The size of the square.
 *
 * Description: This function prints a square with the character #
 * of dimensions size x size. If size is 0 or less, it only prints a new line.
 */
void print_square(int size)
{
	int i, j;
	if (size <= 0)
	{
		_putchar('\n'); /* Print a newline if size is 0 or less */
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#'); /* Print the # character */
			}
			_putchar('\n'); /* Move to the next line */
		}
	}
}
