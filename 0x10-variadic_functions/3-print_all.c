#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the given format.
 * @format: The format string that specifies the types of arguments.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	char *str;
	const char t_args[] = "cifs";
	char *separator = "";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (t_args[j])
		{
			if (format[i] == t_args[j] && separator)
			{
				printf("%s", separator);
				break;
			}
			j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
