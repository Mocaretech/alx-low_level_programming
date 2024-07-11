/*100-is_palindrome.c*/
#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * _check_palindrome - Helper function to check if a string is a palindrome.
 * @s: The string to check.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int _check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (_check_palindrome(s, start + 1, end - 1));
	}
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	if (length == 0)
	{
		return (1);
	}
	return (_check_palindrome(s, 0, length - 1));
}
