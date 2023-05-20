/**
 * main - a program to display base 16 number
 *
 * Return: base 16 number
 */

#include <stdio.h>

int main(void)
{
	int num = 0;
	char a = 'a';

	while (num < 10)
	{
		putchar('0' + num);
		num++;
	}

	while (a <= 'f')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
