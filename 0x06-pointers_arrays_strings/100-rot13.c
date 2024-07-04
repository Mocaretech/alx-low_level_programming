/*100-rot13.c*/
#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	char *ptr = str;
	char lookup[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;
	while (*ptr)

	{
		for (i = 0; i < 52; i++)
		{
			if (*ptr == lookup[i])
			{
				*ptr = rot13[i];
				break;
			}
		}

		ptr++;
	}
	return str;
}
