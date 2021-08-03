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
	const listint *tmp;

	count = 0;
	tmp = h;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		count++;
	}
	return (count);
}

