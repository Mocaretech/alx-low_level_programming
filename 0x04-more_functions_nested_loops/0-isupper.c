/*0-isupper.c*/
/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character to be checked.
 *
 * Description: This function checks if the provided character `c`
 * is an uppercase letter. Uppercase letters are those in the range
 * 'A' to 'Z'. If the character is uppercase, the function returns 1.
 * Otherwise, it returns 0.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
