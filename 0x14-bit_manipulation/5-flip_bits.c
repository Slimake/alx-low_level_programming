#include "main.h"

/**
 *	flip_bits - returns the number of bit needed to flip
 *				n to m;
 *	@n: num1
 *	@m: num2
 *
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;
	unsigned int diff;

	diff = n ^ m;

	while (diff > 0)
	{
		bits = bits + (diff & 1);
		diff = diff >> 1;
	}

	return (bits);
}
