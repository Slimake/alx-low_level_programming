#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted to binary
 */

void print_binary(unsigned long int n)
{
	int len = 0;
	int copy = n;

	if (n == 0)
		_putchar('0');

	/* loop if n is greater than 0 */
	/* divide copy by 2 until it is 0 */
	while (copy > 0)
	{
		len++;
		copy = copy >> 1;
	}
	len--;

	/* check to see if n >> len & 1 return 1 */
	while (len >= 0)
	{
		if ((n >> len) & 1)
			_putchar('1');
		else
			_putchar('0');
		len--;
	}
}
