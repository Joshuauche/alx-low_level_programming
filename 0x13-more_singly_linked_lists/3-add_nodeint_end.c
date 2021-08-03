#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @head: head parameter
 * @n: n parameter
 *
 * Return: head pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;
	/* 1. allocate list_t */

	new_node = (listint_t *) malloc(sizeof(listint_t));
	last_node = *head;  /* used in step 5*/

	/* 2. put in the data  */
	new_node->n = n;

	/* 3. This new listint_t is going to be the last_node*/
	/* listint_t, so make next of it as NULL*/
	new_node->next = NULL;

	/* 4. If the Linked List is empty, then make the new list_t as head */
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	/* 5. Else traverse till the last_node list_t */
	while (last_node->next != NULL)
		last_node = last_node->next;
	/* 6. Change the next of last_node list_t */
	last_node->next = new_node;

	return (*head);
}

