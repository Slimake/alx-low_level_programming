#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: A pointer to the first element of the array to search
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index of the value being searched or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	int m;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		m = (l + r) / 2;

		printf("Searching in array: ");
		displayArray(array, l, r);
		if (value > array[m])
			l = m + 1;
		else if (value < array[m])
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}

/**
 * displayArray - Print array content being searched
 * @array: A pointer to the first element of the arrray
 * @startIndex: Index to start from
 * @endIndex: Index to end
 *
 * Return: Nothing
 */
void displayArray(int *array, int startIndex, int endIndex)
{
	while (startIndex <= endIndex)
	{
		printf("%d", array[startIndex]);
		if (startIndex < endIndex)
			printf(", ");
		startIndex++;
	}
	printf("\n");
}
