#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: Pointer to the first element of an array to search in
 * @size: the number of elements in @array
 * @value: is the value to search for
 *
 * Return: 0.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
	{
		return -1;
	}

	for (i = 0; i < size; i++)
	{
		if (array[i] != value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			continue;
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		return (i);
	}
	return (-1);
}
