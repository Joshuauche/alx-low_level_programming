#include "holberton.h"
/**
 * print_numbers - prints 0 to 9
 * Return: 0 (success)
 */

void print_numbers(void)
{
	int a;

	a = '0';
	while (a <= '9')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}

