#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: the linked list
 *
 * Return: the number popped out
 */

int pop_listint(listint_t **head)
{
	/* declarations */
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	/* assign the first node to temp */
	/* set head to the second node on the list */
	temp = *head;
	*head = (*head)->next;

	/* set n to first node data */
	n = temp->n;

	/* release temp from memory */
	free(temp);

	return (n);
}
