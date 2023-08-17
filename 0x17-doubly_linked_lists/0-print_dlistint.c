#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list
 * @h: the struct list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		count = 1;
		while (h->next != NULL)
		{
			printf("%d\n", h->n);
			count += 1;
			h = h->next;
		}
		printf("%d\n", h->n);
		return (count);
	}
	return (count);
}
