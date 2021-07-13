#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - return s pointer to a newly allocated memory
 * @str: str parameter
 *
 * Return: the dest character
 */
char *_strdup(char *str)
{
	char *dst;
	int index, length;

	length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (index = 0; str[index]; index++)
	{
		length++;
	}
	dst = malloc(sizeof(char) * (length + 1));

	if (dst == NULL)
	{
		return (NULL);
	}

	for (index = 0; str[index]; index++)
	{
		dst[index] = str[index];
	}
	dst[length] = '\0';

	return (dst);
}

