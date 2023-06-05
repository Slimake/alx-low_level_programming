/**
 * _strspn - gets the length of a prefix substring
 * @s: the memory address to print
 * @accept: bytes to check in s
 * Return: an unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ',')
			break;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
	}

	return (count);
}
