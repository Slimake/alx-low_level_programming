#define NULL 0

/**
 * _strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: the substring to look for in haystack
 * Return: the substring or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				if (haystack[i + 1] == needle[j + 1])
					return (haystack + i);
			}
		}
	}

	return (NULL);
}
