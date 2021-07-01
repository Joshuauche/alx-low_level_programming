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

	if (dest == NULL)
	{
		return (NULL);
	}

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest);
}

