#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the memory address to be searched
 * @accept: the memory address to be use for the search
 * Return: a pointer to the byte in s that matches one of
 * the byte in accept or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

	return (NULL);
}
