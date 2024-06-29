/* 9-times_table.c */ 
#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Description: This function prints the 9 times table using nested
 * loops. It formats the output to align numbers properly with
 * appropriate spacing.
 */

void times_table(void)
{
	int row, col, product;
	
	for (row = 0; row <= 9; row++)  /* Loop through rows from 0 to 9 */
	{
		for (col = 0; col <= 9; col++)  /* Loop through columns from 0 to 9 */
		{
			product = row * col;  /* Calculate the product of row and column */
			
			if (col != 0)  /* For columns other than the first in each row */
			{
				_putchar(',');  /* Print a comma */
				_putchar(' ');  /* Print a space */
				if (product < 10)  /* If product is a single digit, print an extra space */
				{
					_putchar(' ');
				}
			}
			
			if (product < 10)  /* Print single-digit products */
			{
				_putchar('0' + product);
			}
			
			else  /* Print two-digit products */
			{
				_putchar('0' + (product / 10));  /* Print tens place */
				_putchar('0' + (product % 10));  /* Print ones place */
			}
		}
		_putchar('\n');  /* Move to the next line after finishing a row */
	}
}
