#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: parameter 1, a pointer to listint_t
 * @n: parameter 2, a const int
 *
 * Return: listint_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	listint_t *ptr = NULL;

	/* allocate memory to new_node */
	new_node = malloc(sizeof(listint_t));

	/* check if malloc call was successful */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	/* check to see if head is NULL and assign the new node */
	if (*head == NULL)
		*head = new_node;
	else
	{
		ptr = *head; /* set head to ptr to transverse the list */

		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = new_node;
	}

	return (*head);
}
