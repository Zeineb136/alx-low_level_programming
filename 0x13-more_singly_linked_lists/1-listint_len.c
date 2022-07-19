#include "lists.h"

/**
*listint_len - function that returns the number of
*elements in a linked listint_t
*@h: pointer to the head
*
*Return:  number of elements in a linked list
*/

size_t listint_len(const listint_t *h)
{
	int num = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
