#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to struct list_s
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			count++;

			if (h->str == NULL)
				printf("[0] %p\n", h->str);
			else
				printf("[%i] %s\n", h->len, h->str);
			h = h->next;
		}
	}

	return (count);
}
