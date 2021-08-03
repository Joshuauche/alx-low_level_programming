#include "lists.h"

/**
 * print_listint - prints all the elements
 * @h: head parameter
 *
 * Return: the counter
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count;

	count = 0;

	while (h != NULL)
	{
		printf("%d \n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

