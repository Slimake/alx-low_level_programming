#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: parameter
 *
 */

void print_rev(char *s)
{
	int count;
	int i;

	count = 0;

	while (*(s + count) != '\0')
		count++;

	for (i = 0; count >= i; count--)
	{
		_putchar(*(s + count));
	}

	_putchar('\n');
}
