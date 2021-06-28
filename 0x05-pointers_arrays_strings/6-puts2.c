#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints some certain char values
 * @str: only parameter
 */
void puts2(char *str)
{
	int length = strlen(str);
	int i;

	for (i = 0; i <= length; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

