#include "lists.h"

/**
 *free_dlistint- function that frees a DLL
 *@head: pointer to the head
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	dlistint_t *new;

	while (curr != NULL)
	{
		new = curr->next;
		free(curr);
		curr = new;
	}
}
