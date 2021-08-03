#include "lists.h"


/**
 * free_listint - frees listint_t list
 * @head: head parameter
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

