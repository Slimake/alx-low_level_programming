#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
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
	int error;
	size_t i;
	ssize_t count;
	ssize_t fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	count = read(fd, (void *)filename, letters);
	if (count == -1)
		return (0);

	for (i = 0; i < letters; i++)
		error = write(1, &filename[i], 1);

	if (error == -1)
		return (0);

	close(fd);

	return (count);
}
