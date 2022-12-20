#include <stdio.h>

/**
 * main - check the code
 *
 * Return: 0 (Success)
*/

int main(void)
{
	long next = 2;
	long prev = 1;
	long result = 0;
	long fibNum = 32951280099;

	printf("%ld, ", prev);
	printf("%ld", next);

	while ((prev + next) < fibNum)
	{
		result = prev + next;
		prev = next;
		next = result;

		printf(", ");
		printf("%ld", result);
	}
	printf("\n");

	return (0);
}
