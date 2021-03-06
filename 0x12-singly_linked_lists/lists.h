#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;



/*function that prints sl the elements of a lists_t list*/
size_t print_list(const list_t *h);

/* 1. prints the length of element*/
size_t list_len(const list_t *h);

/* 2. adds anew node a the begining of a lit*/
list_t *add_node(list_t **head, const char *str);

/*3. adds a new node the end of the list*/
list_t *add_node_end(list_t **head, const char *str);

/*4. free a list_t list*/
void free_list(list_t *head);

#endif
