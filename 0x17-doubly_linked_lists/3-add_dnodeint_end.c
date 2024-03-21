#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t
 * @head: pointer to pointer to dlistint_t list
 * @n: number
 *
 * Return: dlistint_t list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *current = NULL;

	/* Check if head is NULL */
	if (head == NULL)
		return (NULL);

	/* Allocate memory to new */
	new = malloc(sizeof(dlistint_t));
	/* Check if malloc allocated memory */
	if (new == NULL)
		return (NULL);

	current = *head;

	new->n = n;
	new->next = NULL;

	/* If head is NULL, set head to new node and new->prev to NULL */
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (*head);
	}

	/**
	 * If head->next is not NULL, continue looping till head->next is NULL,
	 * meaning it's the end of the linked list
	 */
	while (current->next != NULL)
		current = current->next;

	current->next = new;
	new->prev = current;

	return (current);
}
