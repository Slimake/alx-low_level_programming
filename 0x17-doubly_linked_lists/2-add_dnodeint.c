#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: the list
 * @n: the number to insert into the list
 *
 * Return: a pointer to dlistint_t.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* Declare a new node pointer variable */
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	/* Set memory address for the new node */
	new = malloc(sizeof(struct dlistint_s));

	/* Check if allocation is success */
	if (new == NULL)
		return (NULL);
	new->n = n;

	/* Check if head is NULL */
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		new->next = NULL;
		return (*head);
	}

	/* Populate the element of the new node */
	new->prev = NULL;
	new->next = *head;

	(*head)->prev = new;

	/* Set head to point to the new node */
	*head = new;
	return (*head);
}
