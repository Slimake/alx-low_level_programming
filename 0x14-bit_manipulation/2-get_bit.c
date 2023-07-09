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
	unsigned long int bit;

	bit = ((n >> index) % 2);

	return (bit);
}
