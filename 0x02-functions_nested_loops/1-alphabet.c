/* 1-alphabet.c */
#include "main.h"

/**
 * print_alphabet - Prints the alphabet in sentence
 *
 * Description: Thisfunction prints all lowercase letters from 'a'to 'z'
 * using the _putchar function, followed by a newline character
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
