#include "lists.h"

/**
 * list_len - returns the number of element in a linked list
 * @h: header node parameter
 *
 * Return: counter
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp = h;
	size_t counter = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		counter += 1;
	}
	return (counter);
}

