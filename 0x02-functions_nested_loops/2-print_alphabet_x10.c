#include "main.h"

/**
 * print_alphabet_x10 - display the alphabet in lowercase to the stdout
 *
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i <= 9)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		c = 'a';
		_putchar('\n');
	i++;
	}
}
