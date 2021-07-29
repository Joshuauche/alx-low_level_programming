#include "lists.h"

/**
 * print_list - prints all the elements
 * @h: header node parameter
 *
 * Return: counter
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp = h;
	size_t counter = 0;

	while (tmp != NULL)
	{
		if (tmp->next == NULL)
		{
			printf("[%d] ", tmp->len);
			printf("%s \n", tmp->str);
		}
		else
		{
			if (tmp->str == NULL)
			{
				printf("[0] (nil)\n");
			}
			else
			{
				printf("[%d] ", tmp->len);
				printf("%s \n", tmp->str);
			}
		}
		counter += 1;
		tmp = tmp->next;
	}
	return (counter);
}


