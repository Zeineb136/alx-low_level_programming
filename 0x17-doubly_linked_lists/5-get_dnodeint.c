#include "lists.h"

/**
 *dlistint_t *get_dnodeint_at_index- function  that returns the nth node of DLL
 *@head: pointer to the head
 *@index: the index of the node, starting from 0
 * Return:nth node of DLL or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num = 0;

	while (num < index)
	{
		if (head != NULL)
		{
			head = head->next;
			num++;
		}
		else
		{
			return (NULL);
		}
	}
	return (head);
}
