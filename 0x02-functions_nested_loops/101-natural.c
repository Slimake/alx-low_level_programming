#include "main.h"
#include <stdio.h>

/**
 * main - display sum of multiples of 3 or 5 under 1024
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
