#include "holberton.h"

/**
 * print_line - prints _ according to n number
 * @n: only parameter
 * Return: (0) successful
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}

	}
	else
		_putchar('\n');
}
