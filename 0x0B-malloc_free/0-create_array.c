#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates array of char and initializes it with specific char
 * @size: size parameter
 * @c: character parameter
 *
 * Return: the pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}

