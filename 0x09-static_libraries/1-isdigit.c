#include <stdio.h>
/**
 * _isdigit - check to see if character is digit;
 * @c: character to check
 *
 * Return: 1 (digit) 0 (Not digit)
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
