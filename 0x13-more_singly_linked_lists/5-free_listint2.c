#include "lists.h"

/**
 * free_listint2 - frees listint_t list
 * @head: head parameter
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (tmp == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}

