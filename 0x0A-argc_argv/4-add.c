#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints the sum of arguments
 * @argc: argc parameter
 * @argv: argv parameter
 *
 * Return: prints the sum of all arguments
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < 48 || *argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum = sum + atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	else 
	{
		printf("0\n");
	}
	return (0);
}

