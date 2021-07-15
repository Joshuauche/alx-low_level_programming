#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates space
 * @b: int parameter
 * Return: the pointer
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (int *) malloc(sizeof(int) * b);

	if (ptr == NULL)
	{
		exit(98);
	}
}

