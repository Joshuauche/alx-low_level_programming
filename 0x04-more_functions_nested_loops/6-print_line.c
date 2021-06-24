#include "holberton.h"


void print_line(int n)
{
	char i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_' + '0');
			_putchar('\n');
		}

	}
	else
		_putchar('\n');
}
