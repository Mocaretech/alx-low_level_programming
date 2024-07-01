/*2-strlen.c*/
#include "main.h"

/**
 *_strlen - Returns the length of a string.
 *@s: A pointer to a string (character array).
 *
 *Return: The length of the string.
 *
 *This function iterates through the characters in the string until
 *it encounters the null terminator '\0' and counts the number of
 *characters in the string.
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return length(0);
}
