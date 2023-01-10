/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 *
 * Return: 1 (if c is a uppercase or lowercase character)
 * else return 0
*/

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
