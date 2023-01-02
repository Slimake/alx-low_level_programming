#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: parameter pointer
 * @src: parameter
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = (*(src + i));
		if (src[i] == '\0')
			break;
	}

	return (dest);
}

