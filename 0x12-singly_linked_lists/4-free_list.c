#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: heade prameter
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head->next);
		head = tmp;
		free(head);
	}
}

