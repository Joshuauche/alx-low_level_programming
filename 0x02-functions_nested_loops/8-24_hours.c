#include "holberton.h"

/**
 * jack_bauer - prints jack bauer timiing
 *
 * Description: prints minutes from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	hour = 0;
	minute = 0;

	while (hour < 24)
	{
		while  (minute < 60)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0' + (minute / 10));
			_putchar('0' + (minute % 10));
			_putchar('\n');

			minute++;
		}
		minute = 0;
		hour++;
	}
}
