#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*struct node -singly linked list
*@n: number
*@next: pointer to the next node
*description: singly linked list node structure
*/
typedef struct node
{
	int n;
	struct node *next;
} listint_t;


size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
#endif
