#include "lists.h"
#include <stdio.h>
#include <stddef.h> 

/**
*print_list - function that prints all the elements of a list
*@list_t: list
*@h: pointer to the head
*
*@Return: the number of nodes.
*/

size_t print_list(const list_t *h)
{
	int len = 0; 

	if ( h == NULL )
	{
		return (0);
	}
	else 
	{
		while (h != NULL)
		{
			if (h->str ==NULL)
				printf("[0] (nil)\n");
			else
			{	
				printf("[%d] %s\n", h->len, h->str);
			}	
			h = h->next;
			len++;
		}
	}
	return (len);
}
