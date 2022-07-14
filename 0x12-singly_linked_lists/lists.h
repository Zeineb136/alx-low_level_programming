#ifndef _LISTS_H_
#define _LISTS_H_
#define list_t char

typedef struct node {
	char *str;
	struct node *next;
} list_t;


size_t print_list(const list_t *h);
#endif
