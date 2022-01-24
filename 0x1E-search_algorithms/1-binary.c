#include "search_algos.h"

/**
 * binary_search - binary search algorithm
 *
 * @array: array pointer
 * @size: size of the array
 * @value: target value
 *
 * Return: the index wher the value was found else -1
 */
int binary_search(int *array, size_t size, int value)
{
	int left, mid, right;

	if (array == NULL || value == 0)
		return (-1);

	left = 0;
	right = size - 1;

	for (; left <= right; left++)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;
		if (array[mid] > value)
			right = mid - 1;
		else if (array[mid] < value)
			left = mid + 1;
		else
			return (mid);
	}
	return (-1);
}

/**
 * print_array - Construct a new print array object
 *
 * @array: array pointer
 * @left: begining of the array
 * @right: end of the array
 */
void print_array(int *array, int left, int right)
{
	int i;

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}
