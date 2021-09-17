#include "lists.h"

/**
 * dlistint_len - returns the length of the list
 * @h: pointer to the list
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_of_node = 0;

	while (h != NULL)
	{
		h = h->next;
		num_of_node++;
	}
	return (num_of_node);
}
