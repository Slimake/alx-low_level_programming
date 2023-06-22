#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: first parameter
 * @...: number of parameters depends on n
 * Return: sum of all its parameter
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list args;

	va_start(args, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
