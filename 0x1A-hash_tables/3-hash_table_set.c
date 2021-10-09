#include "hash_tables.h"


/**
 * hash_table_set - adds an element to the hash table
 * @ht: hastable parameter
 * @key: key parameter
 * @value: value parameter
 * Return: 1 if it succeeds 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long idx;
	hash_node_t *tmp = NULL, *new_node = NULL;

	if ((ht != NULL) && (ht->array != NULL)
		&& (key != NULL) && (strlen(key) > 0))
	{
		idx = key_index((unsigned char *)key, ht->size);
		tmp = ht->array[idx];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
		tmp = ht->array[idx];
		new_node = malloc(sizeof(hash_node_t));
		if (new_node != NULL)
		{
			new_node->key = strdup(key);
			new_node->value = strdup(value);
			new_node->next = tmp;
			ht->array[idx] = new_node;
			return (1);
		}
	}
	return (0);
}
