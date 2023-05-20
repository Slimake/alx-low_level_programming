/**
 * main - a program to display combination of
 * two digits
 *
 * Return: two digits comb between 0 - 99
 */

#include <stdio.h>

int main(void)
{
	int num = 1;

	while (num <= 99)
	{

		if ((num / 10) < (num % 10))
		{

			if (num > 1)
			{
				putchar(',');
				putchar(' ');
			}
			putchar('0' + num / 10);
			putchar('0' + num % 10);
		}
		num++;
	}

	putchar('\n');
	return (0);
}
