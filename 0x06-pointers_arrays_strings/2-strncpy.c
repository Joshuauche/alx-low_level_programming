#include "holberton.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncpy - copy string with an integer
 * @dest: destination string
 * @src: source string
 * @n: size parameter
 * Return: pointer when executed
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

