#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints all single-digit numbers of base 10 starting from 0,
 * followed by a new line, using only the putchar function exactly twice.
 *
 * Return: Always 0 (Success)
 *
 * This command would print single digit from zero to nine
*/
int main(void)

{
	int num = 0;

	while (num <= 9)

	{
	    putchar('0' + num);
	    num++;
	}
	putchar('\n');
	return (0);
}
