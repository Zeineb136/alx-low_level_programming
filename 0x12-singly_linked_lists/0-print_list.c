#include "lists.h"
#include <stdio.h>

/**
*print_list - function that prints all the elements of a list
*@list_t: list
*@h: pointer to the head
*
*@Return: the number of nodes.
*/

size_t print_list(const list_t *h)
{
	int len = 1; 

	if ( h == NULL || str == NULL)
	{
		printf("[0] (nil)");
		return (0);
	}

	list_t temp* = h;
	while (temp->next != NULL)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
