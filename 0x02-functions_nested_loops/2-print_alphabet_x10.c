#include "main.h"

/**
 * print_alphabet_x10 - display the alphabet in lowercase to the stdout
 *
 */

void print_alphabet_x10(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
