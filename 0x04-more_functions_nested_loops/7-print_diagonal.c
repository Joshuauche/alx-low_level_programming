#include "holberton.h"

/**
 * print_diagonal - prints _ in diagonal manner
 * @n: only parameter
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');

	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == 1)
				{
					putchar('\\');
				}
				else if (j < i)
				{
					putchar(' ');
				}
				putchar('\n');
			}

		}

	}
}
