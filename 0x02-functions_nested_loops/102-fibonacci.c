#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 * starting with 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	long prev = 1;
	long cur = 2;
	long next;

	while (i < 50)
	{
		if (i == 0)
			printf("%ld, ", prev);
		else if (i == 1)
			printf("%ld", cur);
		else
		{
			next = prev + cur;
			printf(", %ld", next);
			prev = cur;
			cur = next;
		}
		i++;
	}
	printf("\n");
	return (0);
}
