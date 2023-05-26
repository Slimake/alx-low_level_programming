#include "main.h"


/**
 * print_negative -  prints negative number
 * @n: parameter
 */

void print_negative(int n)
{
	if ((n <= -1000) && (n >= -9999))
	{
		_putchar('-');
		_putchar('0' + ((n * -1) / 1000));
		_putchar('0' + (((n * -1) / 100) % 10));
		_putchar('0' + (((n * -1) / 10) % 10));
		_putchar('0' + ((n * -1) % 10));
	}
	else if ((n <= -100) && (n >= -999))
	{
		_putchar('-');
		_putchar('0' + ((n * -1) / 100));
		_putchar('0' + (((n * -1) / 10) % 10));
		_putchar('0' + ((n * -1) % 10));
	}
	else if ((n <= -10) && (n >= -99))
	{
		_putchar('-');
		_putchar('0' + ((n * -1) / 10));
		_putchar('0' + ((n * -1) % 10));
	}
	else if ((n <= -1) && (n >= -9))
	{
		_putchar('0' + (n % 10));
	}
}

/**
 * print_positive -  prints positive number
 * @n: parameter
 */

void print_positive(int n)
{
	if ((n >= 0) && (n <= 9))
	{
		_putchar('0' + (n % 10));
	}
	else if ((n >= 10) && (n <= 99))
	{
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
	}
	else if ((n >= 100) && (n <= 999))
	{
		_putchar('0' + (n / 100));
		_putchar('0' + ((n / 10) % 10));
		_putchar('0' + (n % 10));
	}
	else if ((n >= 1000) && (n <= 9999))
	{
		_putchar('0' + (n / 1000));
		_putchar('0' + ((n / 100) % 10));
		_putchar('0' + ((n / 10) % 10));
		_putchar('0' + (n % 10));
	}
}

/**
 * print_number - prints an integer
 * @n: parameter
 */

void print_number(int n)
{
	print_negative(n);
	print_positive(n);
}
