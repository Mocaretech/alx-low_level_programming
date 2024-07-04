/*3-strcmp.c*/
#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: First string to compare
 * @s2: Second string to compare
 *
 * Return: Negative if s1 is less than s2, 0 if they are equal,
 *         and positive if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return *(unsigned char *)s1 - *(unsigned char *)s2;
}
