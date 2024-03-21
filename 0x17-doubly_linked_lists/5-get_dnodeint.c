#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of dlistint_t
 * @head: pointer to dlistint_t list
 * @index: index of the node
 *
 * Return: Nothing
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = NULL;
	unsigned int counter = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	current = head;

	while (current != NULL)
	{
		if (counter == index)
			return (current);
		counter += 1;
		current = current->next;
	}

	return (head);
}
