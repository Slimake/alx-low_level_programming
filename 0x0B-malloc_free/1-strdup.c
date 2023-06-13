#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as parameter
 * @str: string to copy
 * Return: pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *s;
	int i;
	int len = 0;

	i = 0;
	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	s = malloc(sizeof(char) * len + 1);

	if (s == NULL)
		return (NULL);

	i = 0;
	while (i < len + 1)
	{
		s[i] = str[i];
		i++;
	}

	return (s);
}
