#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int res = 0;     /* Initialize result to 0 */
	int sign = 1;       /* Initialize sign to positive */
	int started = 0;    /* To check if conversion started */
	int max_div_10 = 214748364;  /* INT_MAX / 10 */
	int max_mod_10 = 7;          /* INT_MAX % 10 */


	while (*s != '\0')
	{
		/* Check for '-' and update sign */
		if (*s == '-')
			sign *= -1;
		/* Check for digit and convert it */
		else if (*s >= '0' && *s <= '9')
		{
			started = 1; /* Mark that we have started conversion */
			if (res > max_div_10 || (res == max_div_10 && (*s -'0') > max_mod_10))
			{
				return (sign == 1 ? 2147483647 : -2147483648);
			}
			res = res * 10 + (*s - '0');
		}

		else if (started)
			break;

		s++; /* Move to the next character */
	}

	/* Apply the sign to the result */
	return (sign * res);
}
