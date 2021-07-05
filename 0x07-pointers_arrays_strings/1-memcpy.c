#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @dest: dest parameter
 * @src: src parameter
 * @n: size parameter
 * Return: the dest parameter
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

