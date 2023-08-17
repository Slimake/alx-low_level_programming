#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: the list
 * @n: number
 *
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	/* check if head is not NULL */
	if (head == NULL)
		return (NULL);

	/* set the memory address and bytes needed */
	new = malloc(sizeof(struct dlistint_s));

	/* check if no error during memory allocation */
	if (new == NULL)
		return (NULL);

	/* set the new node data */
	new->n = n;

	/* check for empty linked list */
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		new->next = NULL;
		return (*head);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	new->prev = temp;
	new->next = NULL;

	temp->next = new;

	return (*head);
}
