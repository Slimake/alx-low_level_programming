#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index
 * of a dlistint_t linked list
 * @head: pointer to pointer to dlistint_t linked list
 * @index: index
 *
 * Return: integer
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = *head;
	dlistint_t *prev = NULL;

	if (head == NULL)
		return (-1);

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		return (1);
	}

	while (i < index)
	{
		prev = current;
		current = current->next;
		i++;
	}
	prev->next = current->next;
	prev->next->prev = prev;
	return (1);
}
