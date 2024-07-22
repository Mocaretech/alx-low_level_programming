#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the name of the file it was compiled from.
 * The name is retrieved using the predefined macro __FILE__.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
