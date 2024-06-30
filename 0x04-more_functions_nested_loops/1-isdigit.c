/* 1-isdigit.c*/
/**
 * _isdigit - Checks if a character is a digit (0 through 9).
 * @c: The character to be checked.
 *
 * Description: This function checks if the provided character `c`
 * is a digit, i.e., one of '0', '1', '2', '3', '4', '5', '6', '7',
 * '8', or '9'. If the character is a digit, the function returns 1.
 * Otherwise, it returns 0.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
