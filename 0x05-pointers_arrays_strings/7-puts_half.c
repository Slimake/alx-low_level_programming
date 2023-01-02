#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: parameter
 */

void puts_half(char *str)
{
	int i;
	int n;
	int count;

	i = 0;
	count = 0;

	while (*(str + i) != '\0')
	{
		count++;
		i++;
	}

	if ((count % 2 == 0))
	{
		n = (count / 2);

		for (i = n; i < count; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		n = ((count - 1) / 2);

		for (i = n; i < count; i++)
		{
			_putchar(str[i]);
		}

	}

	_putchar('\n');
}
