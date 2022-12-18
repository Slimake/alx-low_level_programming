#include "main.h"

/**
 * print_last_digit - display last digit to the stdout
 * @n: num to check
 *
 * Return: lastDigit(Success)
*/

int print_last_digit(int n)
{
	int lastDigit;

	if (n >= 0)
		lastDigit = (n % 10);
	else
		lastDigit = (-(n) % 10);
	_putchar('0' + lastDigit);
	return (lastDigit);
}
