#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of dlistint_t linked list
 * @head: pointer to dlistint_t list
 *
 * Return: sum of all data of dlistint_t list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;
	int sum = 0;

	if (head == NULL)
		return (0);
	
	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
