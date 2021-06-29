#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - converts string to integer
 * @s: only parameter
 * Return: the mulitplication of num and sign
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= 1;
		else if (*s >= '0' && *s <= '9')
		{
			num = (num * 10) + (*s - '0');
		}
		else if (num > 0)
		{
			break;
		}
	} while (*s++);

	return (num * sign);
}
