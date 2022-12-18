#include "main.h"

/**
 * print_last_digit - display last digit to the stdout
 * @n: num to check
 *
 * Return: lastDigit(Success)
*/

int print_last_digit(int n)
{
	int ld = (n % 10);

	if (n < 0)
		ld = ld * -1;

	_putchar('0' + ld);
	return (0);
}
