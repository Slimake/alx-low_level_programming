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
	char *s;
	list_t *ptr = NULL;
	list_t *current = NULL;

	if (str == NULL)
		return (NULL);

	s = strdup(str);
	if (s == NULL)
		return (NULL);

	current = malloc(sizeof(list_t));

	if (current == NULL)
		return (NULL);

	current->str = s;
	current->len = _strlen(s);
	current->next = NULL;

	if (*head == NULL)
		*head = current;
	else
	{
		ptr = *head;

		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = current;
	}

	return (*head);
}

/**
 * _strlen - print the length of a string
 * @str: a string
 *
 * Return: length of string
 */

int _strlen(char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}
