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
		putchar(y);

		x++;
		y++;
	}
	putchar('\n');

	return (0);
}

