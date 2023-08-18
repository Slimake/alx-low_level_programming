#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the linked list
 * @idx: the index to insert a new node
 * @n: the number
 *
 * Return: the new linked list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0;
	dlistint_t *new, *prev, *temp;

	if (*h == NULL)
		return (NULL);

	new = malloc(sizeof(struct dlistint_s));
	if (new == NULL)
		return (NULL);

	prev = NULL;
	temp = *h;

	while (temp != NULL)
	{
		if (index == idx)
		{
			new->n = n;

			prev = temp->prev;
			new->prev = prev;
			new->next = temp;
			prev->next = new;
			temp->prev = new;

			return (*h);
		}

		index += 1;
		temp = temp->next;
	}

	return (NULL);
}
