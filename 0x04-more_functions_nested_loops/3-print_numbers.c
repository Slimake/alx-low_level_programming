#include "main.h"

/**
 * print_numbers - prints the numbers 0-9
 *
 */

void print_numbers(void)
{
	int count = 0;
	int counto = 9;

	while (count <= counto)
	{
		_putchar('0' + count);

		count++;
	}
	_putchar('\n');
}
