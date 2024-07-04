/*0-strcat.c*/
#include "main.h"

/**
 * _strcat - Concatenates the string pointed to by src to the end of the string pointed to by dest
 * @dest: Destination string to which the src string will be appended
 * @src: Source string to append to dest
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, const char *src)
{
	/* Pointer to the end of dest*/
	char *dest_end = dest;
	/* Move dest_end to point to the null terminator of dest*/
	while (*dest_end != '\0')
	{
		dest_end++;
	}
	
	/* Append src to dest*/
	while (*src != '\0')
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}

	/* Add null terminator at the end of concatenated string*/
	*dest_end = '\0';
	return dest;
}
