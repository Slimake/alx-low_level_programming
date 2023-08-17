#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: the list
 *
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL) /* empty list */
		return;

	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
