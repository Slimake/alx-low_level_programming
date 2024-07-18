#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searces for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t low = 0;
	size_t high;
	size_t jump = sqrt(size);

	/* Check if array is NULL */
	if (!array)
		return (-1);

	/* Cycle through array */
	for (i = 0; low < (size - 1); i += jump)
	{
		if (array[i] == value) /* if array element == value */
		{
			break;
		}
		else if (array[i] < value) /* array element is less than value */
		{
			low = i;
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
		else /* array element greater than value */
		{
			break;
		}
	}
	high = low + jump; /* Get the upper-band */
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);

	for (i = low; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
