#include "main.h"

/**
 * rev_string - Reverses a string in place.
 *@s: A pointer to the string to be reversed.
 *
 *This function reverses the string by swapping characters from the
 *beginning and end towards the center. It continues until it reaches
 *the middle of the string.
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	char temp;

	/* Determine the length of the string */

	while (s[length] != '\0')
	
	{
		length++;
	}

	/* Swap characters from the ends towards the center */
	
	for (i = 0; i < length / 2; i++)

	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
