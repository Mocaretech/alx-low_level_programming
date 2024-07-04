/*6-cap_string.c*/
#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to modify.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize = 1; /* Boolean flag indicating the next character */

	/* List of separators */
	char separators[] = " \t\n,;.!?\"(){}";
	int i; /* Declare variable outside the for loop */
	int is_separator;

	while (*ptr)

	{
		is_separator = 0;

		/* Check if current character is a separator */
		for (i = 0; separators[i] != '\0'; i++)
		{
			if (*ptr == separators[i])
			{
				is_separator = 1;
				break;
			}
		}

		if (is_separator)
		{
			capitalize = 1; /* Set flag to capitalize the next character */
		}

		else if (capitalize && (*ptr >= 'a' && *ptr <= 'z'))
		{
			*ptr = *ptr - ('a' - 'A');
			capitalize = 0; /* Reset flag after capitalizing */
		}
		else
		{
			capitalize = 0; /* Reset flag if not capitalizing */
		}

		ptr++;
	}

	return str;
}
