#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - locates character in a string
 * @s: string parameter
 * @c: character parameter
 * Return: character location
 */
char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;

		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}

