#include "holberton.h"
#include <stdio.h>
/**
 * main - prints the program name
 * @argc: argc parameter
 * @argv: argv parameter
 *
 * Return: the name of the program
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

