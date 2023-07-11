#include "main.h"

void check_error(char *buffer, int fd, ssize_t stream, char **argv, int index);

/**
 * main - check the code
 * @argc: number of command line arguments passed
 * @argv: an array of pointers to char(array of strings)
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int fd_from;
	int fd_to;
	ssize_t bytes_read;
	ssize_t bytes_write;
	char *buffer;
	size_t nbytes = 1024;

	if (argc != 3)
	{
		dprintf(STDERROR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);	/* open file to copy form */
	if (fd_from == -1)
	{
		dprintf(STDERROR_FILENO, "Error: Can't close fd %d", fd_from);
		exit(100);
	}

	buffer = malloc(sizeof(char) * nbytes);
	if (buffer == NULL)
		return (-1);

	bytes_read = read(fd_from, buffer, nbytes); /* read file from */
	/* check if the return is not an error */
	check_error(buffer, fd_from, bytes_read, argv, STDOUT_FILENO);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664); /* open file to */
	if (fd_to == -1)
	{
		dprintf(STDERROR_FILENO, "Error: Can't close fd %d", fd_to);
		exit(100);
	}

	bytes_write = write(fd_to, buffer, nbytes);	/* write to file to */
	/* check if the return is not an error */
	check_error(buffer, fd_to, bytes_write, argv, STDERROR_FILENO);

	close(fd_from);
	close(fd_to);
	return (0);
}

/**
 * check_error - check if read and write is -1
 * @buffer: the temporary storage of chars
 * @fd: the file discriptor
 * @stream: takes the return value of read and write system call
 * @argv: an array of characters
 * @index: gets the string at a particular location
 */

void check_error(char *buffer, int fd, ssize_t stream, char **argv, int index)
{
	if (stream == -1)
	{
		free(buffer);
		close(fd);
		dprintf(STDERROR_FILENO, "Error: Can't read from file %s", argv[index]);
		exit(98);
	}
}
