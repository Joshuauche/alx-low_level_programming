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
	char *dst = malloc(sizeof(char) * strlen(str) + 1);

	if (dst == NULL)
		return (NULL);

	if (str == NULL)
	{
		return (NULL);
	}

	strcpy(dst, str);

	return (dst);
}

