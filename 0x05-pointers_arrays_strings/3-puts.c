/*3-puts.c*/
#include "main.h"

/**
 *_puts - Prints a string to stdout followed by a new line.
 *@str: A pointer to the string to be printed.
 *
 *This function iterates through each character in the string and
 *prints it using _putchar. After printing all characters, it prints
 *a new line.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

		_putchar('\n');
}
