#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints the alphabet in lowercase, except 'q' and 'e',
 * followed by a new line. It uses only the putchar function exactly twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
	{
		putchar(letter);
	}
	letter++;
	}

	putchar('\n');

	return (0);
}
