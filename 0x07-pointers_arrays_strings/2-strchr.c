/*2-strchr.c*/
#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: The string to be searched
 * @c: The character to locate
 *
 * Return: A pointer to the first occurrence of the character c in the string s,
 *  
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
