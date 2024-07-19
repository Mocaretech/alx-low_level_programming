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
void *_calloc(unsigned int nmemb, unsigned int size);
void simple_print_buffer(char *buffer, unsigned int size)
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
	char *a;

	a = _calloc(98, sizeof(char));
	if (a == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	strcpy(a, "Best");
	strcpy(a + 4, " School! :)\n");
	a[97] = '!';
	simple_print_buffer(a, 98);
	free(a);
	return (0);
}
