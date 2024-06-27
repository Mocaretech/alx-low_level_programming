/* 3-main.c*/
#include "main.h"

/**
 * Main: Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char test_char = 'a';
	int result;

	result = _islower(test_char);
	_putchar('0' + result);
	_putchar('\n');

	test_char = 'Z';
	result = _islower(test_char);
	_putchar('0' + result);
	_putchar('\n');

	return (0);

}
