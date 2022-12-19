#include <stdio.h>

/**
 * print_times_table - prints the 9 times table, starting with 0
 * @n: number
 *
*/

void print_times_table(int n)
{
	int fNum, lNum, result;

	if ((n >= 0 && n <= 15))
	{
		for (fNum = 0; fNum <= n; fNum++)
		{
			printf("0");

			for (lNum = 1; lNum <= n; lNum++)
			{
				printf(",");
				printf(" ");

				result = fNum * lNum;

				if (result <= 9)
					printf("  ");
				else if (result <= 99)
					printf(" ");

				printf("%d", result);
			}

		printf("\n");
		}
	}
}
