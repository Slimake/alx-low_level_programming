/**
 * main - a program to display combination of
 * single digit numbers
 *
 * Return: base 16 number
 */

#include <stdio.h>

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar('0' + num);

		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}

	putchar('\n');
	return (0);
}
