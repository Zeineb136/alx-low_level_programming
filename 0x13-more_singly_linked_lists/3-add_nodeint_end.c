#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
*add_nodeint_end - function that adds a new node at the end of a list_t list.
*@head: head of the linked list.
*@n: integer
*
*Return: the address of the new element, or NULL if it failed.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *prev, *temp;

	prev = malloc(sizeof(listint_t));
	if (prev == NULL)
		return (NULL);

	prev->n = n;
	prev->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = prev;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = prev;
	}
	return (*head);
}
