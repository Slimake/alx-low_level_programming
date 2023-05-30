#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to char
 */

void puts_half(char *str)
{
	int i = 0;
	int str_len = 0;
	int n;

	while (*(str + i) != '\0')
	{
		str_len++;
		i++;
	}

	n = str_len / 2;

	for (; n < str_len; n++)
	{
		_putchar(*(str + n));
	}
	/*if ((str_len % 2) == 1)
	{
		_putchar(*(str + (str_len - 1)));
	}*/

	_putchar('\n');
}

