#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes
 * it with a specifi char
 * @size: size of the array
 * @c: character to put inside the array
 * Return: a pointer to char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	if (s == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		*(s + i) = c;
		i++;
	}

	return (s);
}
