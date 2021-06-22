#include "holberton.h"

/**
 *print_alphabet - prints the alphabets in lowercase
 *Return: Always 0.
 */
void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
}

