#include "lists.h"

/**
*pop_listint - function that deletes the head node of a
*listint_t linked list, and returns the head node’s data (n).
*@head: pointer to the head
*
*Return: void.
*/

int pop_listint(listint_t **head)
{
	listint_t *first;

	int n;

	if (*head == NULL)
		return (0);


	first = *head;
	*head = first->next;
	n = first->n;
	free(first);
	return (n);
}
