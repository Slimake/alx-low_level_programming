#include <stdio.h>
#include <stdint.h>

/**
 * main - print the first 98 Fibonacci numbers
 * starting with 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	int i;
	__int128 prev = 1;
	__int128 cur = 2;
	__int128 result = 0;

	for (i = 1; i <= 98; i++)
	{
		if (i == 1)
			printf("%d, ", prev);
		else if (i == 2)
			printf("%d", cur);
		else
		{
			result = (prev + cur);
			prev = cur;
			cur = result;
			printf(", %d", result);
		}
	}

	printf("\n");
	return (0);
}
