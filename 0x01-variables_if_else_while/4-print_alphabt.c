#include <stdio.h>
/**
 * main - prints alphabets except e and q
 * Return: 0 executed successfully
 */


int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'e')
			continue;
		else if (alpha == 'q')
			continue;
		else
			putchar(alpha);
	}
	putchar('\n');

	return (0);
}

