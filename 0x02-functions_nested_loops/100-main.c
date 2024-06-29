/* 100-main.c*/
#include "main.h"

/**
 * main - Check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_times_table(3);
	_putchar('\n');
	print_times_table(5);
	_putchar('\n');
	print_times_table(98); /* This should not print anything */
	_putchar('\n');
	print_times_table(12);  
	return (0);
}
