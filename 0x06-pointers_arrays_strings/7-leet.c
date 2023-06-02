/**
 * leet - encodes a string into 1337
 * @str: pointer to char
 * Return: pointer to char
 */

char *leet(char *str)
{
	int i;
	int j;

	char alp[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{

		for (j = 0; alp[j] != '\0'; j++)
		{
			if (str[i] == alp[j])
				str[i] = num[j];
		}
	}

	return (str);
}
