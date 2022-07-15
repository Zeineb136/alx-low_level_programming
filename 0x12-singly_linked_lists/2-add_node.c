#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
*add_node - function that adds a new node at the beginning of a list
*@head: head of the linked list.
*@str: string
*
*Return: the address of the new element, or NULL if it failed.
*/

list_t *add_node(list_t **head, const char *str)
{
	int i;

	list_t *first_node;

	if (head == NULL)
	{
		return (NULL);
	}
	first_node = malloc(sizeof(list_t));
	if (first_node == NULL)
		return (NULL);
	first_node->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		;

	first_node->len  = i;
	first_node->next = *head;

	*head = first_node;
	return (first_node);
}
