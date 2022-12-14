#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer parameter
 * @c: char parameter
 *
 * Return: pointer s
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}

	if (*(s + i) == c)
		return (s + i);

	return ('\0');

}


