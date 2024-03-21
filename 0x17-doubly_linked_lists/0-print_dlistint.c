#include "lists.h"

/**
 * print_dlistint - Prints all the element of a dlistint_t list
 * @h: pointer to the head node
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

    /* Check if h is NULL */
	if (h == NULL)
		return (0);

	/* Cycle through as long as h is not NULL */
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
