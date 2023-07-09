#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number
 * @b: binary strings
 *
 * Return: an unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0, i;
	unsigned int decimal = 0;

	if (b == NULL)
		return (decimal);

	/* find the length of the string */
	i = 0;
	while (*(b + i) != '\0')
	{
		len++;
		i++;
	}
	len--;

	i = 0;
	while (*(b + i) != '\0')
	{
		if ((*(b + i) != '0') && (*(b + i) != '1'))
			return (0);
		if (*(b + i) == '1')
			decimal += (1 << len);
		len--;
		i++;
	}

	return (decimal);
}
