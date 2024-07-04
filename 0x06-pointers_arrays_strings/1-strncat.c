/*1-strncat.c*/
#include "main.h"

/**
 * _strncat - Concatenates up to n bytes from the string pointed to by src
 *            to the end of the string pointed to by dest.
 * @dest: Destination string to which the src string will be appended
 * @src: Source string to append to dest
 * @n: Maximum number of bytes to use from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest;
	/* Move dest_end to the end of dest*/
	while (*dest_end != '\0')
	{
		dest_end++;
	}
	/*Append up to n characters from src to dest*/
	while (n > 0 && *src != '\0')

	{
		*dest_end = *src;
		dest_end++;
		src++;
		n--;
	}

	/* Null-terminate dest*/
	*dest_end = '\0';

	return dest;
}
