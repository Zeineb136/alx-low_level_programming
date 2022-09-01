#include "lists.h"

/**
 *print_dlistint- function that prints all the elements of DLL
 *@h: pointer to the head
 *
 * Return:the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num;

	for (num = 0; h != NULL; num++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num);
}
