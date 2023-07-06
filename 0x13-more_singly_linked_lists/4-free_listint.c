#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a list
 * @head: the memory address to free
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
