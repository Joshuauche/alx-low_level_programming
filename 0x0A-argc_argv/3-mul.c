#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of arguments
 * @argc: argc parameter
 * @argv: argv parameter
 *
 * Return: the product of all argments
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}


	return (0);
}

