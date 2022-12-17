/**
 * _islower - Checks for lowercase character
 * @c: The character to check
 *
 * Return: On success 1.
 *
*/

int _islower(int c)
{
	char ch = 'a';

	while (ch <= c)
	{
		if (ch == c)
			return (1);
		ch++;
	}
	return (0);
}
