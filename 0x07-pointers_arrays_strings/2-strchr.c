#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - locates character in a string
 * @s: string parameter
 * @c: character parameter
 * Return: character location
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)
	{
		return (NULL);
	}
	if ((c > 255) || (c < 0))
	{
		return (NULL);
	}

	int len;
	int i;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if ((char) c == s[i])
		{
			return ((char *)s[i]);
		}
	}
}

