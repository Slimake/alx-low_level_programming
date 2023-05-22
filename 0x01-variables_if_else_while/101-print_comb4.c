/**
 * main - a program to display combination of
 * three digit numbers
 *
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	int x = 0;
	int y;
	int z;

	while (x < 8)
	{
		y = x + 1;
		while (y < 9)
		{
			z = y + 1;
			while (z < 10)
			{
				putchar('0' + x);
				putchar('0' + y);
				putchar('0' + z);
				
				if (x < 7)
				{
					putchar(',');
					putchar(' ');
				}
				z++;
			}

			y++;
		}

		x++;
	}

	putchar('\n');
	return (0);
}
