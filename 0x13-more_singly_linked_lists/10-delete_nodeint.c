#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of linked list
 * @head: the linked list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr, *del;

	if (*head == NULL)
		return (-1);

	ptr = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		ptr->next = NULL;
		free(ptr);
	}
	else
	{
		while (i < (index - 1) && ptr != NULL)
		{
			ptr = ptr->next;
			i++;
		}

		if (i != (index - 1) || ptr->next == NULL)
			return (-1);

		del = ptr->next;

		ptr->next = ptr->next->next;
		del->next = NULL;
		free(del);
	}

	return (1);
}
