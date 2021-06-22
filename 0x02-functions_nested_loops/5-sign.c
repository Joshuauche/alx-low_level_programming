#include "holberton.h"

/**
 * print_sign - prints +1, 0, -1
 * @n: only operand
 * Return: 1 as positive, 0 as zero and -1 as negative
 */
int print_sign(int n)
{
	if (n >= 49 && n <= 57)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 48)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

