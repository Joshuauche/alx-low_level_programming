#include "lists.h"

/**
 * listint_len - return the number of element
 * @h: head parameter
 *
 * Return: count
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}

