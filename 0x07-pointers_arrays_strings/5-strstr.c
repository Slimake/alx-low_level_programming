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
	int k;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{

		if (haystack[i] == needle[0])
		{
			k = i;

			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[k] == needle[j])
					k++;
				else
					break;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
	}

	return (NULL);
}
