#include "main.h"

/**
 * print_last_digit - prints last digit of an integer
 * @num: parameter
 *
 * Return: Always 0.
 */

int print_last_digit(int num)
{
	long n = num;

	if (n < 0)
		n *= -1;

	_putchar('0' + (n % 10));

	return (n % 10);
}
