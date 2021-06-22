#include "holberton.h"


/**
 * print_last_digit - this prints the last digit of a number
 * @r: only operand
 * Return: last digit of number
 */
int print_last_digit(int r)
{
	if (r < 0)
	{
		r *= -1;
	}
	_putchar('0' + (r % 10);
	return (r % 10);
}

