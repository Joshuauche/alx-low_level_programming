#include "holberton.h"
/**
 * print_rev - prints string in reverse direction
 * @s: only parameter
 */
void print_rev(char *s)
{
	int i, j, length;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	length = i;

	for (j = length - 1; j >= 0; j--)
	{
		_putchar(s[j]);
		_putchar('\n');
	}
}

