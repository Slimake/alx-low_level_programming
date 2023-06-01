#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to int
 * @n:  parameter variable
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;
	int *start = a;
	int *end = a;

	for (i = 0; i < n; i++)
	{
		end++;
	}

	end--;
	for (i = 0; i <= n / 2; i++)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
