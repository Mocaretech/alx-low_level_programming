/*main.h*/
#ifndef MAIN_H
#define MAIN_H

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: The string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s);

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1, On error -1
 */
int _putchar(char c);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int _sqrt_helper(int n, int guess);
#endif /* MAIN_H */

