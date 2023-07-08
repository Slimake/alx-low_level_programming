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
	int i;
	unsigned int decimal;
	unsigned int n;
	unsigned int digit;

	if (b == NULL)
		return (0);

	decimal = 0;
	n = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			n = n * 10 + b[i] - '0';
		else
			return (0);
	}

	for (i = 0; n != 0; i++)
	{
		digit = n % 10;
		decimal += digit << i;
		n = n / 10;
	}

	return (decimal);
}
