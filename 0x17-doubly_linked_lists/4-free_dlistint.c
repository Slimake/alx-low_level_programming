#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: pointer to dlistint_t list
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		free(current);
		current = current->next;
	}
}
