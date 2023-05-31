/**
 * _strcmp - compares two strings
 * @s1: pointer to char
 * @s2: pointer to char
 * Return: an integer value
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int result;
	int len = 0;

	for (i = 0; s1[i] != '\0'; i++)
		len++;

	s1[i] = '\0';

	for (i = 0; i < len + 1; i++)
	{
		if (s1[i] == s2[i])
		{
			result = s1[i] - s2[i];
		}
		else if (s1[i] < s2[i])
		{
			result = s1[i] - s2[i];
			break;
		}
		else if (s1[i] > s2[i])
		{
			result = s1[i] - s2[i];
			break;
		}
	}

	return (result);
}


