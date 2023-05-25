
/**
 * _isupper - checks for uppercase character
 * @c: paramater
 * Return: success(1), fail(0)
 */


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
