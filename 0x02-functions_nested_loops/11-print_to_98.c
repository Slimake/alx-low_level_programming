#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print any nber to 98 to the stdout
 * @n: integer nber
 *
*/

void print_to_98(int n)
{
	int stopNum = 98;

	if (n >= 0 && n <= stopNum)
	{
		while (n != (stopNum + 1))
		{
			printf("%d", n);

			if (n < stopNum)
			{
				printf(", ");
			}
			n++;
		}
	} else if (n > stopNum)
	{
		while (n != (stopNum - 1))
		{
			printf("%d", n);

			if (n > stopNum)
			{
				printf(", ");
			}
			n--;
		}
	} else
	{
		while (n != (stopNum + 1))
		{
			printf("%d", n);

			if (n < stopNum)
			{
				printf(", ");
			}
			n++;
		}
	}

	printf("\n");
}
