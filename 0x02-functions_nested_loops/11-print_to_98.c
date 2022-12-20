#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print any nber to 98 to the stdout
 * @n: integer nber
*/

void print_to_98(int n)
{
	int stopNum = 98;

	if (n >= stopNum)
	{
		while (n > stopNum)
			printf("%d, ", n--);
		printf("%d\n", n);
	} else
	{
		while (n < stopNum)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
	printf("\n");
}
