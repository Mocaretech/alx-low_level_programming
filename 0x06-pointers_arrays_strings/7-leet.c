/*7-leet.c*/
#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char lookup[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char leet[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	int i;

	while (*ptr)
	{
		for (i = 0; i < 10; i++)
		{
			if (*ptr == lookup[i])
			{
				*ptr = leet[i];
				break;
			}
		}

		ptr++;
	}

	return str;
}
