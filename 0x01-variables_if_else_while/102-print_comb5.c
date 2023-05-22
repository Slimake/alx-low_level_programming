/**
 * main - a program to display all possible
 * combination of 2 digits
 *
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 98; x++)
	{
		for (y = x + 1; y <= 99; y++)
		{
			putchar('0' + x / 10);
			putchar('0' + x % 10);
			putchar(' ');
			putchar('0' + y / 10);
			putchar('0' + y % 10);
			if (x < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
