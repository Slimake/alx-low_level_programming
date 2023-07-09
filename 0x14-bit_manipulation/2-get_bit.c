#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to get its bit with an index
 * @index: index at which to get the bit
 *
 * Return: the bit at the index or -1 if error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int limit;

	/* set limit to 32 (maximum size of an int 2^32) */
	limit = sizeof((unsigned int) *8);

	/* check to see if index is not > limit(2^32) */
	if (index > limit)
		return (-1);

	/* right shift binary equivalent of n by index */
	/* and perform bitwise AND with 1 in binary */
	bit = ((n >> index) & 1);

	return (bit);
}
