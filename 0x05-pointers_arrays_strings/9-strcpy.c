#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: parameter pointer
 * @src: parameter
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int count;

	count = 0;

	while (src[count] != '\0')
		count++;
	count += 2;

	for (i = 0; i <= count; i++)
	{
		dest[i] = (*(src + i));
	}

	return (dest);
}

