#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: the array to calculate the sum
 * @size: the size of the array
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size * size; i++)
	{

		for (j = i; (j % (size + 1)) == 0 ; j++)
			sum1 += a[i];
	}

	for (i = 1; i < size * size; i++)
	{

		for (j = i; ((j % (size - 1)) == 0) && (j < (size * size) - 1); j++)
			sum2 += a[i];
	}

	printf("%d, %d\n", sum1, sum2);
}
