#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - Prints buffer in hexa.
 * @buffer: The address of memory to print.
 * @size: The size of the memory to print.
 *
 * Return: Nothing.
 */
int *array_range(int min, int max);
void simple_print_buffer(int *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}

		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - Check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int *a;

	a = array_range(0, 10);
	if (a == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	simple_print_buffer(a, 11);
	free(a);
	return (0);
}
