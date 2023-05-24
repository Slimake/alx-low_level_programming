#include <stdio.h>

/**
 * main - print the first 98 Fibonacci numbers
 * starting with 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long prev = 1;
	long cur = 2;
	long result = 0;

	for (i = 1; i <= 98; i++)
	{
		if (i == 1)
			printf("%lu, ", prev);
		else if (i == 2)
			printf("%lu", cur);
		else
		{
			result = (prev + cur);
			prev = cur;
			cur = result;
			printf(", %lu", result);
		}
	}

	printf("\n");
	return (0);
}
