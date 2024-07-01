/*positive_or_negative.c*/
#include "main.h"
/**
 * Posivite_or_negative - Prints if the number is positve,negative or zero
 * @i: the integer to check
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n" , i);
	else
		printf("%d is zero\n", i);
}
