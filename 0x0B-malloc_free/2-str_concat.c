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
	int i, length1 = 0, length2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
	{
		length2++;
	}

	result = malloc(sizeof(char) * (length2));

	if (result == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		result[length1++] = s1[i];

	for (i = 0; s2[i]; i++)
		result[length1++] = s2[i];


	return (result);
}

