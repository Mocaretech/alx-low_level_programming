#include <stdio.h>

/**
 *Main - entry point
 *
 *The program print lower then upper case letters

 * Return: Always 0 (Success)
 */
int main(void)

{
	char cn = 'a';

	/* print lowercase alphabet */
	while (cn <= 'z')
	{
		putchar(cn);
		cn++;
	}
	/*print uppercase alphabet */
	cn = 'A';

		while (cn <= 'Z')
		{
			putchar (cn);
			cn++;
		}
		putchar('\n');

		return (0);
}
