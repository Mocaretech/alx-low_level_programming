/* 0-putchar.c*/
#include "main.h" /*Include the header file*/

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char *str = "_putchar";

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar ('\n');
	return (0);
}
