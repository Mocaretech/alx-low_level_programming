#include "main.h"

/**
 *  * _strcpy - Copies the string pointed to by src, including the terminating
 *   * null byte (\0), to the buffer pointed to by dest.
 *    * @dest: A pointer to the destination buffer.
 *     * @src: A pointer to the source string.
 *      *
 *       * Return: The pointer to dest.
 */
char *_strcpy(char *dest, const char *src)
{
	char *ptr = dest; /* Save the start of the destination pointer */

	/* Iterate over each character in the source string */

	while (*src != '\0')

	{
		*dest = *src; /* Copy the character from src to dest */
		dest++;
		src++;
	}

	*dest = '\0'; /* Copy the null terminator to dest */

	return (ptr); /* Return the pointer to the start of dest */
}
