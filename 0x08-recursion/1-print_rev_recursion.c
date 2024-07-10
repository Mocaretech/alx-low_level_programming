/*1-print_rev_recursion.c*/
#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: The string to be printed in reverse
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')  /* Base case: end of string */
	{
		return;
	}

	_print_rev_recursion(s + 1);  /* Recursive call with next character */
	_putchar(*s);  /* Print the current character as the recursion unwinds */
}
