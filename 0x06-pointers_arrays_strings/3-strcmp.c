#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - this compares two string
 * @s1: first parameter
 * @s2: second parameter
 * Return: it returns an integer
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
		{
			break;
		}

		s1++;
		s2++;
	}

	return (*(char *)s1 - *(char *)s2);
}

