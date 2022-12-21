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
		if (i % 3 == 0)
		{
			printf("%s ", "Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s ", "Buzz");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s ", "FizzBuzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
