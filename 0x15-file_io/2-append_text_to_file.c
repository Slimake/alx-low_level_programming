#include "main.h"

int _strlen(char *str);

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the file to append text to
 * @text_content: the text to append to a file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int c_write;

	if (filename == NULL)
		return (-1);

	/* open the file */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* check if text_content is empty */
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	/* write text_content to the file */
	c_write = write(fd, text_content, _strlen(text_content));
	if (c_write == -1 || c_write != _strlen(text_content))
		return (-1);

	return (1);

}

/**
 * _strlen - get the length of the string
 * @str: a string
 *
 * Return: length of string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
