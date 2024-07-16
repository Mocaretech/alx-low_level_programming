#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if insufficient
 *         memory was available or str is NULL.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int size, i;

    /* Check if str is NULL */
	if (str == NULL)
		return (NULL);

    /* Calculate the size of the string */
	size = 0;
	while (str[size] != '\0')
		size++;

    /* Allocate memory for the duplicated string */
	dup = (char *)malloc((size + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

    /* Copy the string into the newly allocated memory */
	for (i = 0; i < size; i++)
		dup[i] = str[i];

    /* Null-terminate the duplicated string */
	dup[size] = '\0';

	return (dup);
}
