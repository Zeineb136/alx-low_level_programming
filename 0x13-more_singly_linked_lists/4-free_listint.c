#include "lists.h"

/**
*free_listint - function that frees a list.
*@head: pointer to the head
*
*Return: void.
*/

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
