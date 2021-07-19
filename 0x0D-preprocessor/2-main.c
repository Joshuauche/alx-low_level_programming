#include <stdio.h>

/**
 * main - prints the file it was compile from
 * Return: always 0
 */
int main(void)
{
	char *ptr = __FILE__;

	while (*ptr != '\0')
	{
		_putchar(*ptr);
		ptr++;
	}
	_putchar('\n');

	return (0);
}
