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
	int len = max + 1;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		*(ptr + i) = i;

	return (ptr);
}
