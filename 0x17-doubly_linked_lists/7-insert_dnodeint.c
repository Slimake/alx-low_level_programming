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
	int size = 0;
	dlistint_t *newNode = NULL;
	dlistint_t *node = *h;
	dlistint_t *temp = *h;
	dlistint_t *temp2 = *h;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	while (node != NULL)
	{
		node = node->next;
		size++;
	}
	if (idx == 0)
	{
		newNode->n = n;
		newNode->next = *h;
		newNode->prev = NULL;
		if (*h != NULL)
			(*h)->prev = newNode;
		*h = newNode;
	}
	else if ((int)idx == size)
	{
		newNode->n = n;
		newNode->next = NULL;

		if (*h == NULL)
		{
			*h = newNode;
			newNode->prev = NULL;
		}
		while (temp->next != NULL)
			temp->next = newNode;
		newNode->prev = temp;
	}
	else
	{
		newNode->n = n;
		newNode->next = NULL;
		while (--idx)
			temp = temp->next;
		newNode->next = temp->next;
		newNode->prev = temp;
		temp->next = newNode;
		temp2->prev = newNode;
	}
	return (*h);
}
