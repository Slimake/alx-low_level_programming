/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the memory address to be searched
 * @accept: the memory address to be use for the search
 * Return: a pointer to the byte in s that matches one of
 * the byte in accept or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	int str_len = 0;
	int count = 0;

	i = 0;
	while (s[i] != '\0')
	{
		str_len++;
		i++;
	}

	for (i = 0; i <= str_len && count < 1; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				i--;
				break;
			}
		}
	}

	return (s + i);
}
