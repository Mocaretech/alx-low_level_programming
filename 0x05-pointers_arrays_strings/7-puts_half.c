#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 *@str: A pointer to the string to be printed.
 *
 *This function prints the second half of the string. If the number of
 *characters is odd, it starts from index (length_of_the_string - 1) / 2 + 1.
 */
 
void puts_half(char *str)
{
	int length = 0;
	int start;
	int i;
	while (str[length] != '\0')

	{
		length++;
	}
	
	if (length % 2 == 0)

	{
		start = length / 2;
	}
	else
	{
		start = (length - 1) / 2 + 1;
	}

	for (i = start; str[i] != '\0'; i++)

	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
