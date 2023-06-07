/**
 * _strlen_recursion - return the length of a string
 * @s: the memory address
 * Return: length of the memory address s
 */

int _strlen_recursion(char *s)
{
	int n = 1;

	if (*s == '\0')
	{
		n = 0;
		return (n);
	}

	return (n + _strlen_recursion(s + 1));
}
