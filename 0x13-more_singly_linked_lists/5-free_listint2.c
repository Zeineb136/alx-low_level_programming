#include "lists.h"

/**
*free_listint2 - function that frees a list.
*@head: pointer to the head
*
*Return: void.
*/

void free_listint2(listint_t **head)
{
	listint_t *next;

	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	*head = NULL;
}
