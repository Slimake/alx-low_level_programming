/**
 * rev_string - reverses a string
 * @s: pointer to char
 *
 */

void rev_string(char *s)
{
	int i = 0;
	int len = 0;
	char temp;
	char *start = s;
	char *end = s;

	while (*(s + i) != '\0')
	{
		len++;
		i++;
	}

	for (i = 0; i < (len - 1); i++)
	{
		end++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
