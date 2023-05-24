#include "main.h"

/**
 * print_last_digit - prints last digit of an integer
 * @num: parameter
 *
 * Return: Always 0.
 */

int print_last_digit(int num)
{
	int result;

	if (num >= 0)
	{
		result = (num % 10);
		_putchar(result + '0');
	}
	else
	{
		result = (-(num) % 10);
		_putchar(result + '0');
	}
	return (result);
}
