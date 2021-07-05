#include "holberton.h"
#include <stdio.h>

/**
 * _memset - fills the memory with a constant byte
 * @s: pointer parameter
 * @b: character parameter
 * @n: size parameter
 * Return: the char parameter when executed
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (s && n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}

