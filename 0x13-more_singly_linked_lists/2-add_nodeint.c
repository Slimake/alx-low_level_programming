#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the
 * beginning of a list
 * @head: parameter 1, a double pointer
 * @n: parameter 2,
 *
 * Return: the address of the new element or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL; /* declare new_node and set to NULL */

	new_node = malloc(sizeof(listint_t)); /* allocate memory for new_node */

	if (new_node == NULL) /* if allocation wasn't successful, return NULL */
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	*head = new_node;

	return (*head);
}
