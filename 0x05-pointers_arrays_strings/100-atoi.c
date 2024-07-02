#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int result = 0;     /* Initialize result to 0 */
	int sign = 1;       /* Initialize sign to positive */
	int started = 0;    /* To check if conversion started */

	/* Iterate through the string */
	while (*s != '\0')
	{
		/* Check for '-' and update sign */
		if (*s == '-')
			sign *= -1;
		/* Check for digit and convert it */
		else if (*s >= '0' && *s <= '9')
		{
			started = 1; /* Mark that we have started conversion */
			result = result * 10 + (*s - '0');
		}

		/* If conversion started and current character is not a digit, stop */
		else if (started)
			break;

		s++; /* Move to the next character */
	}

	/* Apply the sign to the result */
	return sign * result;
}
