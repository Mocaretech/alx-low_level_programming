/*1-swap.c*/
#include "main.h"

/**
 *  * swap_int - Swaps the values of two integers.
 *   * @a: A pointer to the first integer.
 *    * @b: A pointer to the second integer.
 *     *
 *      * This function takes two pointers to integers and swaps the values
 *       * stored at the memory locations pointed to by the pointers.
 *        */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;

	*b = temp;
}

