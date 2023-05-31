#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src, including
 * the terminating null byte ot the buffer pointed to by dest
 * @dest: pointer to char
 * @src: pointer to char
 * Return: pointer to dest;
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int str_len = 0;

	while (*(src + i) != '\0')
	{
		str_len++;
		i++;
	}

	for (i = 0; i <= str_len; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
