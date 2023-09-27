#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint linked list
 * @head: the list
 * @index: index of the node
 *
 * Return: the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		count += 1;
		head = head->next;
	}

	return (NULL);
}