#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table
 *
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int x;
	int y;
	int result;

	for (x = 0; x <= 9; x++)
	{
		printf("%i", 0);
		for (y = 1; y <= 9; y++)
		{
			result = x * y;
			if (result < 10)
				printf(",  %i", result);
			else
				printf(", %i", result);
		}

		printf("\n");
	}
	printf("\n");
}
