/* 8-24_hours.c */
#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Description: This function prints every minute of a 24-hour day
 * in the format HH:MM. It uses nested loops to iterate over the
 * hours and minutes, and the _putchar function to print each digit.
 */
void jack_bauer(void)
{
	int hour, minute;
	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0' + (minute / 10));
			_putchar('0' + (minute %10));
			_putchar('\n');
		}
	}
}
