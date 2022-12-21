#include "main.h"

/**
 * main - entry point
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int i;
	int num = 100;

	for (i = 1; i <= num; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf(" FizzBuzz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i == 1)
			printf("%d", i);
		else
			printf(" %d", i);
	}
	printf("\n");

	return (0);
}
