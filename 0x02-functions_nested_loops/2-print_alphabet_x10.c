#include "hlberton.h"
/**
 * print_alphabet_x10 - prints the alphabet ten times
 * Return: 0 when executed successfully
 */


void print_alphabet_x10(void)
{
	int i = 0;
	int j;

	while (i <= 10)
	{
		j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}

}

