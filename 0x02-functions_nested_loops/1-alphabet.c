/* 1-alphabet.c */
#include "main.h"

/**
 *
 * This will print alphabet in lower case followed by a new line
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
	return;
}
