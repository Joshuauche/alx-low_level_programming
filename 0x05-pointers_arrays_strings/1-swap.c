#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - swap two variables value
 * @a: first parameter
 * @b: second parameter
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
