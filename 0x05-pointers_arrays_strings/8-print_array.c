#include "main.h"

/**
 * print_array - print elements of an array of integers
 * @a: paramter which accepts an array
 * @n: parameter which accepts an integer
 */

void print_array(int *a, int n)
{
	int i;
	int arrLen;

	arrLen = n - 1;

	for (i = 0; i <= arrLen; i++)
	{
		if (i < arrLen)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}

	printf("\n");
}
