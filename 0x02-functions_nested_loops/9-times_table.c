#include "main.h"

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
		_putchar('0' + 0);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		for (y = 1; y <= 9; y++)
		{
			result = x * y;
			
			if (result == 0)
			{
				
				_putchar('0' + result);
			}
			if (result >= 1 && result <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result);
			}
			if (result > 9)
			{
				_putchar(',');
				_putchar(' ');

				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}
			if (y < 9)

		}

		_putchar('\n');
	}
}
