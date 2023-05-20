/**
 * main - a program to print lowercase in reverse
 *
 * Return: alphabet in lowercase
 */

#include <stdio.h>

int main(void)
{
	char a = 'a';
	char z = 'z';

	while (a <= z)
	{
		putchar(z);
		z--;
	}

	putchar('\n');
	return (0);
}
