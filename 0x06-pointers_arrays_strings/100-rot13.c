/**
 * rot13 - encodes a string using rot13
 * @str: pointer to char
 * Return: pointer to str which has a type char
 */

char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] + 13 <= 'z')
			str[i] = str[i] + 13;
		else if (str[i] >= 'a' && str[i] + 13 > 'z')
			str[i] = str[i] - 13;
		else if (str[i] >= 'A' && str[i] + 13 <= 'Z')
			str[i] = str[i] + 13;
		else if (str[i] >= 'A' && str[i] + 13 > 'Z')
			str[i] = str[i] - 13;
	}

	return (str);
}
