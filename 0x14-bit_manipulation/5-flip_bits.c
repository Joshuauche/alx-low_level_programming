#include <stdio.h>
#include "main.h"

/**
 * flip_bits - prints the number of bits you would need to flip a number
 * @n: n parameter
 * @m: m parameter
 *
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int z;

	for (z = n ^ m; z != 0; z = z >> 1)
	{
		count += z & 1;
	}
	return (count);
}

