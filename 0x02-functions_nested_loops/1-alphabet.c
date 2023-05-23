#include "main.h"

/**
 * main - prints alphabet in lowercase
 *
 * Return: (0)
 */

void print_alphabet(void)
{
	char a = 'a';
	char z = 'z';

	while (a <= z)
	{
		_putchar(a);
		a++;
	}

	_putchar('\n');
}
