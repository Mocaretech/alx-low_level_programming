/* File: 0-print_name.c*/
#include "function_pointers.h"

/**
 * print_name - prints a name using the provided function
 * @name: name to be printed
 * @f: function to use for printing the name
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
