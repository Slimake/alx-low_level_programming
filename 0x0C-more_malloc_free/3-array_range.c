#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the minimum number
 * @max: the maximun number
 * Return: a memory address
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(max) * max + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= max; i++)
		*(ptr + i) = i;

	return (ptr);
}
