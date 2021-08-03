#include "lists.h"

/**
 * sum_listint - return the sum of all node data
 * @head: head parameter
 *
 * Return: count
 */
int sum_listint(listint_t *head)
{
	listint_t *sum;

	sum = head;
	int count = 0;

	while (sum != NULL)
	{
		count += sum->n;
		sum = sum->next;

	}
	return (count);
}

