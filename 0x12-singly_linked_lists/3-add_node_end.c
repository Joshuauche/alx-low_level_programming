#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the list
 * @head: header parameter
 * @str: str parameter
 *
 * Return: head pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/* 1. allocate list_t */
	unsigned int len = 0;
	list_t *new_node;
	list_t *last;

	while (*(str + len))
		len++;
	new_node = (list_t *) malloc(sizeof(list_t));

	if(!new_node)
		return (NUL)L;

	last = *head;  /* used in step 5*/

	/* 2. put in the data  */
	new_node->str  = strdup(str);
	new_node->len = len;

	/**
	 * 3. This new list_t is going to be the last list_t,
	 * so make next of it as NULL
	 */
	new_node->next = NULL;
	/* 4. If the Linked List is empty, then make the new list_t as head */
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	/* 5. Else traverse till the last list_t */
	while (last->next != NULL)
		last = last->next;

	/* 6. Change the next of last list_t */
	last->next = new_node;

	return (*head);
}

