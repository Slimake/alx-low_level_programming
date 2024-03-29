#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning to a list
 * @head: parameter, a double pointer
 * @str: a string
 *
 * Return: pointer to list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	int count;
	char *s = NULL;
	list_t *current = NULL;

	count = 0;

	if (str == NULL)
		return (NULL);

	s = strdup(str);
	if (s == NULL)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
		count++;

	current = malloc(sizeof(list_t));
	if (current == NULL)
		return (NULL);

	current->str = s;
	current->len = count;

	if (*head == NULL)
		current->next = NULL;
	else
		current->next = *head;

	*head = current;

	return (*head);
}
