#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: parameter, pointer to struct list_t
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			count++;
			h = h->next;
		}
	}

	return (count);
}
