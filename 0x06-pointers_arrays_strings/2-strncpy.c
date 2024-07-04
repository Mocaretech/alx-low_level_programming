/*2-strncpy.c*/
#include "main.h"

/**
 * _strncpy - Copies up to n characters from the string pointed to by src
 *            to the string pointed to by dest. If src is shorter than n,
 *            null bytes are used to pad the result.
 * @dest: Destination string where src is copied
 * @src: Source string to copy
 * @n: Maximum number of bytes to copy from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy characters from src to dest*/
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* Pad the remainder of dest with null bytes if src is shorter than n*/

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return dest;
}
