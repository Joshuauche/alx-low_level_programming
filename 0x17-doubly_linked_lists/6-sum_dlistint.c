#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t
 * @head: head pointer
 *
 * Return: count integer
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int count;

	count = 0;
	temp = head;
	while (temp != NULL)
	{
		count = count + temp->n;
		temp = temp->next;
	}
	return (count);
}
