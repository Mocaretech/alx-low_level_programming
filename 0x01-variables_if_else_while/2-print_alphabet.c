#include <stdio.h>

/**
 * print alphabet in lower case
 *
 */
int main(void)
{
	/*variable declaration*/
	char ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
