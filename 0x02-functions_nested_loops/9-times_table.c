#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 *
*/

void times_table(void)
{
	int fNum, lNum, result;

	for (fNum = 0; fNum <= 9; fNum++)
	{
		_putchar('0');

		for (lNum = 1; lNum <= 9; lNum++)
		{
			_putchar(',');
			_putchar(' ');

			result = fNum * lNum;

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');
		}

		_putchar('\n');
	}
}
