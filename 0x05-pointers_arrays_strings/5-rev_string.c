#include "main.h"

/**
 * rev_string - reverses a string
 * @s: parameter
 *
 */

void rev_string(char *s)
{
	int count;
    int i;
	char *p;

	count = 0;
	i = 0;
	p = s;

	while (s[count] != '\0')
	{
		count++;
	}


	for (count--; count >= 0; count--)
	{
			p[i] = s[count];
			i++;
	}
}
