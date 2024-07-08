/*100-set_string.c*/
#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: Double pointer to be set to point to @to
 * @to: Pointer to char
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
