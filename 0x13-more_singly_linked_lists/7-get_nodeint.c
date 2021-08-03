#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node in a node list
 * @head: head parameter
 * @index: indes paramter
 *
 * Return: currnet or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count;

	count = 0;
	current = head;

	while (current != NULL && index != count)
	{
		current = current->next;
		count++;
	}

	return (current ? current : NULL);
}

