#include "main.h"

/**
 * _islower - check if input is alphabet
 * @c: paramter
 *
 * Return: (0)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
