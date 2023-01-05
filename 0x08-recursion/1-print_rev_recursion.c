#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to a string
 *
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
	/*if (*(s + 0) == '\n')
	{
		_putchar(*(s + 0));
	}
	_print_rev_recursion(*(s -);*/
	int i = 0;
	int count = 0;
	while (*(s + i) != '\0')
	{
		count++;
		i++;
	}
	for (; s[0] != s[count]; count--)
	{
		_putchar(s[count]);
	}
}
