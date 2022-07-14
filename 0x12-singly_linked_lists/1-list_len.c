#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
*list_len - function that returns the number of elements in a linked list_t
*@h: pointer to the head
*
*Return: the number of nodes.
*/

size_t list_len(const list_t *h);
{
	int len = 1;

	if (h == NULL)
	{
		return (0);
	}
	list_t *temp = h;

	while (temp->next != 0)
		len++;
		temp = temp->next
		}
	}
	return (len);
}
