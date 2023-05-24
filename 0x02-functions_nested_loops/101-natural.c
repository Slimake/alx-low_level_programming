#include "main.h"
#include <stdio.h>

/**
 * main - print natural number that are multiples of 3 or 5
 *
 * Return: Always 0.
 */

int main(void)
{
	int num = 0;
	int sum = 0;

	while (num < 1024)
	{
		if (((num % 3) == 0) || ((num % 5) == 0))
		{
			sum += num;
		}
		num++;
	}
	printf("%i\n", sum);

	return (0);
}
