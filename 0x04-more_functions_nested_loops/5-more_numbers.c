#include "main.h"

/**
 * more_numbers - print (0 - 14) 10 times
 *
*/

void more_numbers(void)
{
	int i, j;
	int ntimes = 10;
	
	for (i = 0; i < ntimes; i++)
	{
		_putchar('0');

		for (j = 1; j <= 14; j++)
		{
			if (j <= 9)
				_putchar(j + '0');
			else
			{ 
				printf("%d", j);
			
			}
		}
		printf("\n");
	}
}
