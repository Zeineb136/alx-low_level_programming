#include "lists.h"

/**
 *sum_dlistint- function that returns the sum of all the data (n) of a DLL
 *@head: pointer to the head
 *
 * Return: sum of all data or return 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
