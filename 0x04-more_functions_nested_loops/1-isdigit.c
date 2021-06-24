#include "holberton.h"
#include <stdio.h>

/**
 * _isdigit - checks for digit
 * @c: only parameter
 * Return: i if it is a digit else 0 as non digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}

