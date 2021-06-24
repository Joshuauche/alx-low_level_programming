#include "holberton.h"

/**
 * more_numbers - prints 0 to 14 ten times
 * Return: (0) successful
 */
void more_numbers(void)
{
	int count;
	char i;

	for (count = 0; count <= 10; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i / 10 > 0)
			{
				_putchar((i / 10) + '0');
			}
			else
			{
				_putchar((i % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

