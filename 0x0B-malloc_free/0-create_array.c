#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a specific char.
 * @size: The size of the array.
 * @c: The char to initialize the array with.
 *
 * Return: A pointer to the array, or NULL if it fails or size is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

    /* If size is 0, return NULL */
	if (size == 0)
		return NULL;

    /* Allocate memory for the array */
	array = (char *)malloc(size * sizeof(char));

    /* If malloc fails, return NULL */
	if (array == NULL)
        return NULL;

    /* Initialize each element of the array with the character c */
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

    /* Return the pointer to the array */
	return array;
}
