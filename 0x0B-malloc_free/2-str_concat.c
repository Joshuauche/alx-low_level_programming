#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * str_concat - concatenates two strings
 * @s1: first string parameter
 * @s2: second string parameter
 *
 * Return: the pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int i, j, length1, length2;

	i = 0, j = 0;

	while (s1 && s1[length1])
	{
		length1++;
	}
	while (s2 && s2[length2])
	{
		length2++;
	}

	result = malloc(sizeof(char) * (length1 + length2 + 1));

	if (result == NULL)
	{
		return (NULL);
	}
	if (s1)
	{
		while (i < length1)
		{
			result[i] = s1[i];
		}

	}
	if (s2)
	{
		while (i < (length1 + length2))
		{
			result[i] = s2[j];
			i++;
			j++;
		}
	}
	result[i] = '\0';
	return (result);
}

