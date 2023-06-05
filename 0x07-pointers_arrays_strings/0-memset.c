#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the address of memory to print
 * @b: the constant byte
 * @n: first n bytes
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return s;
}
