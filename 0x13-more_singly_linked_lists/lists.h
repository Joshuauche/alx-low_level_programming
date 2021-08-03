#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/*0. prints all elements*/
size_t print_listint(const listint_t *h);

/*1. returns the number of elemet*/
size_t listint_len(const listint_t *h);

/*2. adds a node at the begining*/
listint_t *add_nodeint(listint_t **head, const int n);















#endif
