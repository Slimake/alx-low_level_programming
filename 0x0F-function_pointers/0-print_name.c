#include <stdio.h>

/**
 * print_name - prints a name
 * @name: a memory address
 * @f: a function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		(*f)(name);
}
