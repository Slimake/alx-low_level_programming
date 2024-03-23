#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index
 * of a dlistint_t linked list
 * @head: pointer to pointer to dlistint_t linked list
 * @index: index
 *
 * Return: integer
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	unsigned int list_len = 0;

	dlistint_t *current = *head;
	dlistint_t *temp = *head;
	dlistint_t *temp2 = *head;

	if (head == NULL)
		return (-1);

	if (*head == NULL)
		return (-1);

	while (temp != NULL)
	{
		temp = temp->next;
		list_len++;
	}
	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		current->next = NULL;
		free(current);
		return (1);
	}
	else if (index == list_len)
	{
		--temp;
		temp->prev->next = NULL;
		temp->prev = NULL;
		free(temp);
		return (1);
	}
	else if (index > list_len)
		return (-1);
	while (i < index)
	{
		temp2 = temp2->next;
		i++;
	}
	temp2->prev->next = temp2->next;
	temp2->next->prev = temp2->prev;
	free(temp2);
	return (1);
}
