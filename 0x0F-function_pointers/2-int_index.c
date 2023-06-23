#include <stdio.h>

/**
 * int_index - searches forn an integer
 * @array: the memory address
 * @size: size of the array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: an integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) >= 1)
		{
			return (i);
		}
		else
			index = -1;
	}

	return (index);
}
