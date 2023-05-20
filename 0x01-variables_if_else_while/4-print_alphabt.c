/**
 * main - a program to print alphabet
 * in lowercase except q and e
 *
 * Return: alphabet in lowercase exceot q and e
 */

#include <stdio.h>

int main(void)
{
	char a = 'a';
	char z = 'z';

	while (a <= z)
	{
		if (!(a == 'e' || a == 'q')) 
			putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
