#include "holberton.h"
#include <stdio.h>

/**
 *print_to_98 - print to 98
 *@n: only parameter
 *Return: 0 always success
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		i = n;
		while (i <= 98)
		{
			printf("%d, ", i);
			i++;
		}
	}
	else if (n > 98)
	{
		i = n;

		while (i >= 98)
		{
			printf("%d, ", i);
			i--;
		}
	}
	else
	{
		printf("%d ", n);
	}
}

