/**
 * _isdigit - checks for a digit(0-9)
 * @c: parameter
 * Return: found(1), not found(0)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
