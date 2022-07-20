#include "lists.h"

/**
*free_listint2 - function that frees a list.
*@head: pointer to the head
*
*Return: void.
*/

void free_listint2(listint_t **head)
{
	if (*head != NULL)
	{
		free(*head);
		*head = (*head)->next;
	}
	*head = NULL;
}
