
#include <stdio.h>

/**
 * main - prints all single numbers of base 10
 * Return: 0 executed successfully
 */

int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}

