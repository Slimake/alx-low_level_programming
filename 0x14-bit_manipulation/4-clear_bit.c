#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at given index
 * @n: the number to set its bit
 * @index: the index to set the bit
 *
 * Return: 1 if success, -1 if fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int check = 1;
	unsigned int max_bit;

	max_bit = (sizeof(unsigned int) * 8);

	if (index > max_bit)
		return (-1);

	check = ~(check << index);
	*n = (*n & check);

	return (1);
}
