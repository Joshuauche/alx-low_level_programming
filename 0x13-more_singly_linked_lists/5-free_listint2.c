#include "lists.h"

/**
 * free_listint2 - frees listint_t list
 * @head: head parameter
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	tmp = *head;
	while (tmp)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
	}
}

