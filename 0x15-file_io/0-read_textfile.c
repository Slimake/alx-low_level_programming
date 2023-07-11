#include "main.h"

/**
 * read_textfile - reads a text file
 * and prints to the standard output
 * @filename: the text file to print
 * @letters: number of letters to print
 *
 * Return: the numbers of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t c_read, c_write;
	char *buffer;
	int fd;

	/* check if filename is NULL */
	if (filename == NULL)
		return (0);

	/* open call */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* read call */
	c_read = read(fd, buffer, letters);
	if (c_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* write call */
	c_write = write(STDOUT_FILENO, buffer, c_read);
	if (c_write == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);

	return (c_read);
}
