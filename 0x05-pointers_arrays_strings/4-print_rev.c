#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to char s
 *
 */

void print_rev(char *s)
{
	int i = 0;
	int len = 0;

	while ((*(s + i) != '\0'))
	{
		i++;
		len++;
	}

	while (len > 0)
	{
		len--;

		_putchar(*(s + len));
	}

	_putchar('\n');
}
