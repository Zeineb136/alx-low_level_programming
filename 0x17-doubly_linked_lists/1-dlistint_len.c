#include "lists.h"

/**
 *dlistint_len- function that returns the number of elements in DLL
 *@h: pointer to the head
 *
 * Return:the number of elements in DLL
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num;

	for (num = 0; h != NULL; num++)
	{
		h = h->next;
	}
	return (num);
}
