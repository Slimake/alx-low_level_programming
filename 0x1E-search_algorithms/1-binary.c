#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in an array of integers
 * using the Binary search algorithm
 * @array: Pointer to the first element of an array to search in
 * @size: the number of elements in @array
 * @value: the value to search for
 *
 * Return: 0.
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid = (low + high) / 2;
	int i, len;

	/* If array is NULL */
	if (!array)
	{
		return (-1);
	}

	while (high >= low)
	{
		i = low;
		len = high;
		/* Print all element being searched */
		printf("Searching in array: ");
		for (; i <= len; i++)
		{
			printf("%d", array[i]);
			if (i < len)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			/* Eliminate upper half of the array */
			low = mid + 1;
		else
			/* Eliminate lower half of the array */
			high = mid - 1;

		mid = (low + high) / 2;
	}
	return (-1);
}
