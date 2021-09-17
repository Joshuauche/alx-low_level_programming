#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head pointer
 * @index: index parameter
 *
 * Return:  current node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count;

	count = 0;
	current = head;
	if (!current)
	{
		return (NULL);
	}

	while (current && count < index)
	{
		current = current->next;
		count++;
	}
	return (current);
}
