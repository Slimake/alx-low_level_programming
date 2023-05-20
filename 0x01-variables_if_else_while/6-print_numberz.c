/**
 * main - a program to print base 10 number
 *
 * Return: base 10 number
 */

#include <stdio.h>

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar('0' + num);
		num++;
	}

	putchar('\n');
	return (0);
}
