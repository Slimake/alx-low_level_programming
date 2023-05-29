#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to char s
 *
 */

void print_rev(char *s)
{
	int i = strlen(s);

	if (strlen(s) == 0)
	{
		_putchar('\n');
	}
	else
	{
		while (--i)
			_putchar(*(s + i));

		_putchar(*(s + i));

		_putchar('\n');
	}
}
