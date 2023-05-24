#include "main.h"

/**
 * print_last_digit - prints last digit of an integer
 * @num: parameter
 *
 * Return: Always 0.
 */

int print_last_digit(int num)
{
	if (num < 0)
		num *= -1;

	_putchar('0' + (num % 10));

	return (num % 10);
}
