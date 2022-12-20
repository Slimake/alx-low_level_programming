#include <stdio.h>

/**
 * main - check the code
 *
 * Return: 0 (Success)
*/

/* 1 2 3 5 8 13 21 34 */

int main(void)
{
	int  next = 2;
	int prev = 1;
	int result = 0;

	printf("%d, ", prev);
	printf("%d", next);

	while ((prev + next) < 50)
	{
		result = prev + next;
		prev = next;
		next = result;

		printf(", ");
		printf("%d", result);
	}
	printf("\n");

	return (0);
}
