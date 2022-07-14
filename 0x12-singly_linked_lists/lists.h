#include <stddef.h> 
#ifndef _LISTS_H_
#define _LISTS_H_

/**
*struct node _singly linked list
*@str: string
*@next: pointer to the next node
*
*/
typedef struct node {
	char *str;
	int len;
	struct node *next;
} list_t;


size_t print_list(const list_t *h);
#endif
