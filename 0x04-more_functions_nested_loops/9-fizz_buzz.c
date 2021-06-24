#include <stdio.h>
#include "holberton.h"
/**
 * main - prints the multiples of 3 and five
 * Return: 0 successful
 */
int main(void)
{
	int i;

	for (i = 1 ; i <= 99 ; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("buzz\n");
	return (0);
}

