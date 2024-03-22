#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to dlistint_t list
 * @idx: index
 * @n: number
 * Return: dlistint_t list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *current = *h;
	dlistint_t *newNode = NULL;

	/* Check if h is NULL */
	if (h == NULL)
		return (NULL);

	/* Check if *h is NULL */
	if (*h == NULL)
		return (NULL);

	/* Allocate memory on the heap to newNode */
	newNode = malloc(sizeof(dlistint_t));
	/* Return NULL is memory allocation was not successful */
	if (newNode == NULL)
		return (NULL);

	/* set newNode data to n */
	newNode->n = n;

	/* Cycle through until a node before idx position */
	while (i < (idx - 1))
	{
		current = current->next;
		i++;
	}

	if (idx < 1 || idx > (i + 1))
		return (NULL);

	/* set newNode->next to current->next and newNode->prev to current */
	newNode->next = current->next;
	newNode->prev = current;

	/* set current->next to newNode and newNode->next->prev to newNode */
	current->next = newNode;
	newNode->next->prev = newNode;

	return (newNode);
}
