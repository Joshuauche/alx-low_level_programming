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
	char j = *s;

	do {
		if (j == '-')
			sign *= 1;
		else if (j >= '0' && j <= '9')
		{
			num = (num * 10) + (j - '0');
		}
		else if (num > 0)
		{
			break;
		}
	} while (j++);

	return (num * sign);
}
