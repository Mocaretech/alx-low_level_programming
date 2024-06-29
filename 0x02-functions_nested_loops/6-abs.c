/* 6-abs.c */

/**
 *  * _abs - Computes the absolute value of an integer.
 *
 * @n: The integer whose absolute value is to be computed.
 *
 * Description: This function returns the absolute value of
 * the integer `n`. If `n` is negative, it returns `-n`,
 * otherwise it returns `n`.
 *
 * Return: The absolute value of the integer `n`.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
