#include "main.h"

/**
 * print_most_numbers - prints the numbers 0-9
 * except 2 and 4
 *
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) || (i == 4))
			continue;
		_putchar('0' + i);
	}
	_putchar('\n');
}
