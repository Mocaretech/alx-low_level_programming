#include "main.h"

/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: First number as a string.
 * @n2: Second number as a string.
 * @r: Buffer to store the result.
 * @size_r: Size of the buffer.
 *
 * Return: Pointer to the result, or 0 if the result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0, carry = 0, sum = 0;

    /* Find the length of n1 and n2 */
	while (n1[i])
		i++;
	while (n2[j])
		j++;

    /* If result buffer is smaller than the larger input plus the carry and null terminator */
	if (size_r <= (i > j ? i : j) + 1)
		return (0);

    /* Null-terminate the buffer */
	r[size_r - 1] = '\0';
	k = size_r - 2;

    /* Perform addition digit by digit from the end */
	i--;
	j--;
	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';

		carry = sum / 10;
		r[k--] = (sum % 10) + '0';
	}

    /* If there are leading zeroes in the result, move the result to the start of the buffer */
	if (k >= 0)
	{
		int start = k + 1;
		int shift = size_r - 1 - start;
		for (int l = 0; l < shift; l++)
			r[l] = r[start + l];
		r[shift] = '\0';
	}
	return (r);
}
