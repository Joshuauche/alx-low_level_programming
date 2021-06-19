#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - prints out all the numbers under 10 with a ,
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = '0'; i < '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i != '8' || j != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}

	}

	putchar('\n');
	return (0);
}

