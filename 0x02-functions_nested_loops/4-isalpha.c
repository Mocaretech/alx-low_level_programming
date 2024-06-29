/* 4-isalpha.c */
#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character to be checked.
 *
 * Description: This function checks if the input character is either
 * a lowercase or uppercase alphabetic character.
 *
 * Return: 1 if the character is a letter, lowercase or uppercase.
 * 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
