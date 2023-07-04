#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: a double pointer
 * @str: a string
 *
 * Return: the address of the new content or NULL if fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	unsigned int count;
	char *s = strdup(str);
	list_t *ptr = NULL;
	list_t *current = NULL;

	count = 0;
	current = malloc(sizeof(list_t));

	if (current == NULL)
		return (NULL);

	if (*head == NULL)
		*head = malloc(sizeof(list_t));

	for (i = 0; s[i] != '\0'; i++)
		count++;

	current->str = s;
	current->len = count;
	current->next = NULL;

	ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = current;

	return (*head);
}
