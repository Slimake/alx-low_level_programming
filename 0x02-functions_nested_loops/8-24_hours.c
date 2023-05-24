#include "main.h"

/**
 * jack_bauer - prints last digit of an integer
 *
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int x;
	int y;

	for (x = 0; x <= 23; x++)
	{

		for (y = 0; y < 60; y++)
		{
			_putchar('0' + (x / 10));
			_putchar('0' + (x % 10));
			_putchar(':');
			_putchar('0' + (y / 10));
			_putchar('0' + (y % 10));

			_putchar('\n');
		}
	}
}
