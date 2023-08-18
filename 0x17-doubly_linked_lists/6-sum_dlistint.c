#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a linked list
 * @head: the linked list
 *
 * Return: sum of all data in the linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		result = result + head->n;
		head = head->next;
	}

	return (result);
}
