#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - convert binary to int
 * @b: b parameter
 *
 * Return: res
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int res = 0;

	if (!b)
		return (0);

	for (n = 0; *(b + n); n++)
	{
		if (*(b + n) < '0' || *(b + n) > '1')
			return (0);
		res = 2 * res + (*(b + n) - '0');
	}
	return (res);
}

