#include <stdio.h>

/**
 * print_array - prints elements of an array of integers
 * @a: pointer to an int
 * @n: variable n
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *a);

		if (i < (n - 1))
			printf(", ");

		a++;
	}
	printf("\n");
}
