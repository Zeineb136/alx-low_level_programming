#include "lists.h"

/**
*sum_listint - function that returns the sum of
*all the data (n) of a listint_t linked list.
*@head: pointer to the head
*
*Return: the sum of all data or 0.
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
