/* 3-islower.c*/
#include "main.h"

/**
 * _islower - Checks if a character is lowercase
 * c: The character to check.
 *
 * Description:This function checks if the character passed to it
 * is a lower case letter(from 'a' to 'z'
 * Return: 1 if the character is a lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1); /* c is a lower case letter*/
	}
	else
	{
		return (0);
	}
}
