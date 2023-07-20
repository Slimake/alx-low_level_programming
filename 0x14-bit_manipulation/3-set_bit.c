/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number to set its bit
 * @index: the index to set the bit
 *
 * Return: 1 if successful, -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int check = 1;
	unsigned int max_bit;

	max_bit = (sizeof(unsigned long int) * 8);
	if (index > max_bit)
		return (-1);

	check = check << index;
	*n = (*n | check);

	return (1);
}
