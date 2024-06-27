/* 1-alphabet.c */
#include "main.h"

/**
 * This will print alphabet in lower case followed by a new line
 *
 * Description: This function print all lower case from 'a' th 'z'
 * using _putchar function and then print new line
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
}
