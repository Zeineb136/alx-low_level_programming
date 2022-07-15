#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
*free_list - function that frees a list_t list.
*@head: pointer to the head
*
*Return: void.
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
