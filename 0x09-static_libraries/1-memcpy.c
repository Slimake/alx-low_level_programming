#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer dest(destination)
 * @src: pointer src(source)
 * @n: n byte from memory area src
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}

