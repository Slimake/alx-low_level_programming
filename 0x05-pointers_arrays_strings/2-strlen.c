#include <stdio.h>

/**
 * _strlen - returns the length of a string
 *@s: a pointer
 *
 * Return: An integer value
 */

int _strlen(char *s)
{
	int count = 0;

	while(*(s + count) != '\0')
	{
		count++;
	}

	return count;
}
