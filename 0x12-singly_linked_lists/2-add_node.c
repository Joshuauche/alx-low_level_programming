#include "lists.h"

/**
 * add_node - add anode form the begining
 * @head: head parameter
 * @str: str parameter
 *
 * Return: head pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	/* 1. allocate node */
	list_t* new_node;
	unsigned int len = 0; 

	while (*(str + len))
	{
		len++;						    }
	new_node = (list_t*) malloc(sizeof(list_t));

	if (!new_node)
	{
		return (NULL);
	}

	/* 2. put in the data */
	new_node->str = strdup(str);
	new_node->len = len;

	/* 3. Make next of new node as head */
	new_node->next = (*head);

	/* 4. move the head to point to the new node */
	(*head) = new_node;

	return (*head);
}


