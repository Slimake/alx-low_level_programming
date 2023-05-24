#include <stdio.h>

/**
 * main - find and prints the sum of the
 * even-valued terms
 *
 * Return: 0
 */

int main(void)
{
	int prev = 1;
	int cur = 2;
	int next = 2;
	int sum = 0;
	int countto = 4000000;

	while (next <= countto)
	{
		next = prev + cur;
		prev = cur;
		cur = next;

		if ((next % 2) == 0)
		{
			sum += next;
		}
	}
	printf("%i", sum);
	printf("\n");

	return (0);
}
