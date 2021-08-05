#include <stdio.h>
#include "main.h"

/**
 * get_bit - prints the value of a bit at a given index
 * @n: number parameter
 * @index: index parameter
 *
 * Return: the bit index number
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit_status;

	if (index > 31)
	{
		return (-1);
	}
	bit_status = (n >> index) & 1;

	return (bit_status);
}

