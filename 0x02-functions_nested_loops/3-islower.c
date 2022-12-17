/**
 * _islower - Checks for lowercase character
 * @c: The character to check
 *
 * Return: On success 1.
 *
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
