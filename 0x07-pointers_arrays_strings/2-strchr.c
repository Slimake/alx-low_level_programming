/**
 * _strchr - locates a character in a string
 * @s: the memory address to print
 * @c: the character to find
 * Return: pointer to the first occurrence of
 * the character c in the string s or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
		i++;
	}

	return (s + i);
}
