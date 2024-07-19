#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated memory, or NULL if nmemb or size is 0
 *         or if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, total_size;

	/* Return NULL if nmemb or size is 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Calculate total size of memory needed */
	total_size = nmemb * size;

	/* Allocate memory using malloc */
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	/* Initialize allocated memory to zero */
	for (i = 0; i < total_size; i++)
		ptr[i] = 0;

	return (ptr);
}
