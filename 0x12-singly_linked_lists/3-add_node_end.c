#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
*add_node_end - function that adds a new node at the end of a list_t list.
*@head: head of the linked list.
*@str: string
*
*Return: the address of the new element, or NULL if it failed.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	int i;

	list_t *perv, *current;

	if (head == NULL)
	{
		return (0);
	}
	perv = malloc(sizeof(list_t));
	perv->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		;

	prev->len  = i;
	prev->next = NULL;

	*head = temp;
	while (temp->next != NULL)
	{
		temp->next;
	}
	return (*head);
}
