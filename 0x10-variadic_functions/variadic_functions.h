#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * sum_them_all - Sums all its parameters.
 * @n: The number of parameters passed to the function.
 *
 * Return: The sum of all parameters. If n == 0, return 0.
 */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);

#endif /* VARIADIC_FUNCTIONS_H */
