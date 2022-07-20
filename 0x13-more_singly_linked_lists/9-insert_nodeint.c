#include "lists.h"

/**
*insert_nodeint_at_index -function that inserts a new node at a given position
*@head: pointer to the head
*@idx: the index of the list where the new node should be added.
*@n: integer
*
*Return: the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{	
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		for (i = 0; i < idx - 1; i++)
		{
			temp = temp->next;
			if (temp == NULL)
			{	
				return (NULL);
			}
		}
		new->next = temp->next;
		temp->next = new;
	}
	return (new);
}
