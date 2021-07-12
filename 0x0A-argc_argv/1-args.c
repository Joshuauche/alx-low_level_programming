#include "holberton.h"
#include <stdio.h>

/**
 * main - prints the arguments count
 * @argc: argc parameter
 * @argv: argv parameter
 *
 * Return: return the number of the arguments from 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}

