#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints the second half of string value
 * @str: only parameter
 */
void puts_half(char *str)
{
	int length, righthalf;
	int mid, i, k;

	length = strlen(str);

	((length % 2 == 0) ? (mid = length / 2) : (mid = (length + 1) / 2));
	for (i = mid, k = 0; i < length; i++, k++)
	{
		righthalf = str[i];
		_putchar(righthalf);
	}
	_putchar('\n');

}

