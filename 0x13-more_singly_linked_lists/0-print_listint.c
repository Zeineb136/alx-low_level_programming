#include "lists.h"

/**
*print_listint - function that prints all the elements of a list
*@h: pointer to the head
*
*Return: the number of nodes.
*/

size_t print_listint(const listint_t *h)
{
	int num = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);

}
