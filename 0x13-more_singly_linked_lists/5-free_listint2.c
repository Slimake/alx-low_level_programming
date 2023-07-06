#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: a double pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head != NULL)
	{
		ptr = *head;

		*head = (*head)->next;
		free(ptr);
	}

	*head = NULL;
}
