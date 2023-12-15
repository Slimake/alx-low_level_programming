#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: a pointer to the first element of the array
 * @size: is the number of elements in the array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		return (i);
	}
	return (-1);
}
