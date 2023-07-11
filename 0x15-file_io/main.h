#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define STDIN_FILENO 0
#define STDOUT_FILENO 1
#define STDERROR_FILENO 2

#ifndef MAIN_H
#define MAIN_H

int _putchar(int c);
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */
