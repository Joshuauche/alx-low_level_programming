#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head parameter
 * @index: index parameter
 *
 * Return: integer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	unsigned int retval = -1;
	listint_t *current, *temp_node;

	current = *head;
	temp_node = NULL;

	if (index == 0)
	{
		return (pop_listint(head));
	}

	for (i = 0; i < index - 1; i++)
	{
		if (!current || current->next == NULL)
		{
			return (-1);
		}
		current = current->next;
	}


	temp_node = current->next;
	retval = temp_node->n;
	current->next = temp_node->next;
	free(temp_node);


	return (retval);
}

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
