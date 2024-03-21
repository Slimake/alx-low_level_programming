#include "lists.h"

/**
 * dlistint_len - Prints all the element of a dlistint_t list
 * @h: pointer to the head node
 *
 * Return: number of elements in a linked dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

    /* Check if h is NULL */
	if (h == NULL)
		return (0);

	/* Cycle through as long as h is not NULL */
	while (h != NULL)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
