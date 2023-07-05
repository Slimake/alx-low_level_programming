#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: parameter h, a pointer to a struct
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			count++;
			printf("%i\n", h->n);
			h = h->next;
		}
	}

	return (count);
}
