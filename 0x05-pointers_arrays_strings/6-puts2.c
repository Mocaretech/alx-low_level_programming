#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first
 *       character, followed by a new line.
 *@str: A pointer to the string to be printed.
 *
 * This function prints characters from the string at even indices (0, 2, 4, ...).
 *It continues until it encounters the null terminator.
 */
void puts2(char *str)
{
	int i;

	/* Iterate through the string */

	for (i = 0; str[i] != '\0'; i++)
	{
		/* Print characters at even indices */
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}

	/* Print a new line */

	_putchar('\n');
}
