#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 * from 0-14
 *
 */

void more_numbers(void)
{
	int i = 0;
	int j;

	while (i <= 10)
	{
		j = 0;

		while (j <= 14)
		{
			if (j >= 10)
				_putchar('0' + (j / 10));

			_putchar('0' + (j % 10));

			j++;
		}
		i++;

		_putchar('\n');
	}

}
