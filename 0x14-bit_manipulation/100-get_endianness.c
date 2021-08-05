
#include <stdio.h>
#include "holberton.h"

/**
 *  get_endianness- function that checks the endianness.
 *
 *  Return: 1 if it little endian and 0 otherwise
 */
int get_endianness(void)
{
	unsigned int x = 1;

	char *c = (char *) &x;

	return ((int)*c);
}

