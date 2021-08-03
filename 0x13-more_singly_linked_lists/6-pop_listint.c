#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: head parameter
 *
 * Return: integer
 */
int pop_listint(listint_t **head)
{
	int retval;
	listint_t *next_node;

	next_node = NULL;

	if (*head == NULL)
	{
		return (0);
	}


	next_node = (*head)->next;
	retval = (*head)->n;
	free(*head);
	*head = next_node;
	return (retval);
}

