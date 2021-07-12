#include "holberton.h"
#include <stdio.h>

/**
 * main - prints arguments on each line
 * @argc: argc parameter
 * @argv: argv parameter
 *
 * Return: the arguments on each line
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

