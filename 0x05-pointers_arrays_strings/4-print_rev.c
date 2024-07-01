#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 *@s: A pointer to the string to be printed in reverse.
 *
 *This function first determines the length of the string and then
 *prints the characters in reverse order.
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	/* Determine the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Print characters in reverse */
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
