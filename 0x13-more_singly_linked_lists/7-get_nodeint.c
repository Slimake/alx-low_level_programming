#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: the linked list
 * @index: index of the node
 *
 * Return: nth node of a linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* declaration */
	unsigned int i = 0;

	if (head == NULL) /* check if head is NULL */
		return (NULL);

	/* get the number of node in the linked list using index */
	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}

	if (i == index)
		return (head);

	return (NULL);
}
