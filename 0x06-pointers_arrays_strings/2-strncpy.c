#include "holberton.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcpy - copy string with an integer
 * @dest: destination string
 * @src: source string
 * Return: pointer when executed 
 */
har *_strncpy(char *dest, char *src, int n)
{
	char *pointer = dest;

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

	return (pointer);
}

