#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - ccreates an array of integers
 * @min: min size parameter
 * @max: max size parameter
 *
 * Return: the array pointer
 */
int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = (int *)malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = m++;
	}

	return (array);
}

