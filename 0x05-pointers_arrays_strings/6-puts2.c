#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting from the first character
 * @str: pointer to char
 *
 */

void puts2(char *str)
{
	int i = 0;
	int str_len = 0;

	while (*(str + i) != '\0')
	{
		str_len++;
		i++;
	}

	for (i = 0; i < str_len; i++)
	{
		if ((i % 2) == 0)
			_putchar(*(str + i));
	}

	_putchar('\n');
}
