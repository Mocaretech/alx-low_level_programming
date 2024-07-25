/* File: 1-array_iterator.c*/
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: array to iterate over
 * @size: size of the array
 * @action: pointer to the function to use
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

