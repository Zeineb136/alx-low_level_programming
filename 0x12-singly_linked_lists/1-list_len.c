#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
*list_len - function that returns the number of elements in a linked list_t
*@h: pointer to the head
*
*Return:  number of elements in a linked list
*/

size_t list_len(const list_t *h)
{
	int len = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
