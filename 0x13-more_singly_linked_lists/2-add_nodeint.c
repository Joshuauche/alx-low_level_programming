#include "lists.h"

/**
 * add_nodeint - add a node at the begining
 * @head: head parameter
 * @n: n parameter
 *
 * Return: head pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));

	/*return null if it deosnt return address*/
	if (!new_node)
	{
		return (NULL);
	}
	/*put data*/
	new_node->n = n;

	/*assigning the head to the new_node address*/
	new_node->next = *head;

	/*make the head to point to the new_node*/
	*head = new_node;

	return (*head);
}

