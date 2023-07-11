#include "main.h"

int _strlen(char *str);

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: the text to be placed inside the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int c_write;

	if (filename == NULL)
		return (-1);

	/* create/open file */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	/* write */
	c_write = write(fd, text_content, _strlen(text_content));
	if (c_write == -1 || (c_write != _strlen(text_content)))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

/**
 * _strlen - gets the length of a string
 * @str: the string
 *
 * Return: the length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}
