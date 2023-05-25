#include <stdio.h>

/**
 * main - prints numbers from 1 - 100, except for multiple
 * of 3(Fizz), 5(Buzz), 15(FizzBuzz)
 *
 * Return: 0
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 15) == 0)
			printf("%s", "FizzBuzz");
		else if ((i % 5) == 0)
			printf("%s", "Buzz");
		else if ((i % 3) == 0)
			printf("%s", "Fizz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");

		i++;
	}

	printf("\n");

	return (0);
}
