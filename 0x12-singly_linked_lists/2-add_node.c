#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
*add_node - function that adds a new node at the beginning of a list
*@head: head of the linked list.
*@str: string
*
*Return: the address of the new element, or NULL if it failed.
*/

list_t *add_node(list_t **head, const char *str)
{
	int i, cout;

	list_t *first_node;

	if (head == NULL)
	{
		return (0);
	}
	first_node = (list_t *) malloc(sizeof(list_t));

	for (i = 0; str[i] != '\0'; i++)
		return (i);

	first_node->len  = i;
	first_node->str = strdup(str);
	first_node->next = *head;

	*head = first_node;
	return (first_node);
}
