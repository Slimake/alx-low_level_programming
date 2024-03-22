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
	unsigned int len = 0;
	dlistint_t *current = *h;
	dlistint_t *head_len = *h;
	dlistint_t *newNode = NULL;

	if (h == NULL)
		return (NULL);

	if (*h == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	while (head_len != NULL)
	{
		len += 1;
		head_len = head_len->next;
	}

	if (idx < 1 || idx > len - 1)
		return (NULL);

	while (i < (idx - 1))
	{
		current = current->next;
		i++;
	}

	newNode->next = current->next;
	newNode->prev = current;
	current->next = newNode;
	newNode->next->prev = newNode;

	return (newNode);
}
