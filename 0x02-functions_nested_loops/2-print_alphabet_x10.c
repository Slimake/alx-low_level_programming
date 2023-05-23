#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase 10x
 *
 * Return: (0)
 */

void print_alphabet_x10(void)
{
	char a = 'a';
	char z = 'z';
	int num = 0;

	while (num < 10)
	{
		a = 'a';
		while (a <= z)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		num++;
	}
}
