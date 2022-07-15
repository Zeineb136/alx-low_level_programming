#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <string.h>
/**
*struct node -singly linked list
*@str: string
*@len: length of the str
*@next: pointer to the next node
*description: singly linked list node structure
*/
typedef struct node
{
	char *str;
	int len;
	struct node *next;
} list_t;


size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
#endif
