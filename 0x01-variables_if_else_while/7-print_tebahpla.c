#include <stdio.h>
/**
 * main - prints lowercase alphabets in reverse
 * Return: 0 when executed succesfully
 */


int main(void)
{
	char alpha = 'z';

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
