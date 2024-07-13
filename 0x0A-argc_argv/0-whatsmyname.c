#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of command line arguments (unused)
 * @argv: array containing the program name and command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
