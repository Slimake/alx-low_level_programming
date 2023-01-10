#include "main.h"

/**
 * _strncpy - copies memory area
 * @dest: pointer dest(destination)
 * @src: pointer src(source)
 * @n: n byte from memory area src
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}

