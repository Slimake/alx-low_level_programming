#include <stdio.h>
/**
 * _isupper - check to see if a character is uppercase;
 * @c: character to check
 *
 * Return: 1 (uppercase) 0 (Not uppercase)
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
