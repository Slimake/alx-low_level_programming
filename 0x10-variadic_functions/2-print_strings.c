#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints string followed by a new line
 * @separator: parameter one
 * @n: parameter two
 * @...: no of parameter depend on n
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("%p", str);

		if (i < n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
