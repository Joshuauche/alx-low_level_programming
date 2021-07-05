#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - searches the string for any set of bytes
 * @s: first parameter
 * @accept: second parameter
 * Return: the string when executed
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);

}

