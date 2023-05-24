#include "main.h"

/**
 * print_times_table - print n times table starting with 0
 * @n: parameter
 *
 * Return: Always 0.
 */

void print_times_table(int n)
{
	int row, col, result;

	if (n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				result = row * col;
				if (col == 0)
					_putchar('0' + result);
				else if (result < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + result);
				}
				else if (result > 9 && result <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (result / 10));
					_putchar('0' + (result % 10));
				}
				else if (result > 99 && result <= 999)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + ((result / 10) / 10));
					_putchar('0' + ((result / 10) % 10));
					_putchar('0' + (result % 10));
				}
			}
			_putchar('\n');
		}
	}
}
