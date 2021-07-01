#include "holberton.h"
#include <string.h>
#include <stdio.h>
/**
 * reverse_array - this reverses the element in an array
 * @a: array
 * @n: size of the array
 */
void reverse_array(int *a, int n)
{
	int index;
	int temp;

	for (index = n - 1; index >= n / 2; index--)
	{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
	}
}

