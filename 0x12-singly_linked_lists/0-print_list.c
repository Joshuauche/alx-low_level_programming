#include "lists.h"

/**
 * print_list - prints all the elements
 * @h: header node parameter
 *
 * Return: counter
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		counter++;
	}

	return (counter);
}

