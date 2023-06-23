#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints number followed by a new line
 * @separator: first parameter
 * @n: second parameter
 * @...: third parameter
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i < (n - 1))
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}

	printf("\n");

	va_end(args);
}
