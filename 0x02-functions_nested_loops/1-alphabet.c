/* 1-alphabet.c */
#include "main.h"

/**
 *Print lower_case -  This will print alphabet in lower case
 * Description: This function print all lower case from 'a' th 'z'
 * using _putchar function and then print new line
 *
 * The program will print lower case alphabet using putchar library
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
