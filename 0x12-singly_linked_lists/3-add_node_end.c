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

	list_t *prev, *temp;

	prev = malloc(sizeof(list_t));
	prev->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		;

	prev->len  = i;
	prev->next = NULL;
	if (*head == NULL)
	{
		*head = prev;
		return (prev);
	}
	
	temp = *head;
	while (temp->next != NULL)
	{	
		temp = temp->next;
	}
	return (temp);
}
