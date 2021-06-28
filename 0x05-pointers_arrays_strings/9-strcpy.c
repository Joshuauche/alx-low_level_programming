#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcpy - copies the string to another string variable
 * @dest: first parameter
 * @src: second parameter
 * Return: a string copy when execute
 */
char *_strcpy(char *dest, char *src)
{
	int length, i;

	length = strlen(src);

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

