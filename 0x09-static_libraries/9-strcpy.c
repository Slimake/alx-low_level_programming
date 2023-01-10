#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: parameter pointer dest
 * @src: parameter pointer src
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		dest[i] = (*(src + i));
		if (src[i] == '\0')
			break;
	}

	return (dest);
}

