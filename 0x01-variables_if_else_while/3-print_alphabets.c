#include <stdio.h>

/**
 * main - returns all alphabets in lowercase
 * Return: 0 if executed successfully
 */
int main(void)
{
	char x = 'a';
	char y = 'A';

	while (x <= 'z' && y <= 'Z')
	{
		putchar(x);
		x++;

		putchar(y);

		y++;
	}
	putchar('\n');

	return (0);
}

