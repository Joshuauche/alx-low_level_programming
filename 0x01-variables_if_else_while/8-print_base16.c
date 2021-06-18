#include <stdio.h>

/**
 * main - prints all hexedecimal values
 * Return: 0 when successfully executed
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	for (num = 'a'; num <= 'f'; num++)
		putchar(num);

	putchar('\n');

	return (0);
}
