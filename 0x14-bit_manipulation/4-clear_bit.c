#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the index of bit to 0
 * @n: n parameter
 * @index: index parameter
 *
 * Return: 1 if successfull
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}


	*n ^= (0 ^ *n) & (1UL << index);

	return (1);
}

