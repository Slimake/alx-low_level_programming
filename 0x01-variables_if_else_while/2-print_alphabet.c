/**
 * main - a program to print alphabet in lowercase
 *
 * Return: alphabet in lowercase
 */

#include <stdio.h>

int main(void)
{
	char curr = 'a';
	char z = 'z';

	while (curr <= z)
	{
		putchar(curr);
		curr++;
	}

	putchar('\n');
	return (0);
}
