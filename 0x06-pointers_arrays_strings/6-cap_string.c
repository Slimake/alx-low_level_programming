void check_pun(char ch);

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to char
 * Return: pointer to char
 */

char *cap_string(char *str)
{
	int i;
	int j;
	int str_len, pun_len = 0;
	char pun_marks[] = {' ', '\t', '\n', ',', ';',
		'.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
		str_len++;

	for (i = 0; pun_marks[i] != '\0'; i++)
		pun_len++;

	for (i = 0; i < str_len; i++)
	{
		check_pun(str[i]);

		for (j = 0; j < pun_len; j++)
		{
			if (str[i - 1] == pun_marks[j])
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32;
				}
			}
			else
				str[i] = str[i];
		}
	}

	return (str);
}

/**
 * check_pun - check punctuation mark
 * @ch: parameter variable
 */

void check_pun(char ch)
{
	switch (ch)
	{
	case ' ':
	case '\t':
	case '\n':
	case ',':
	case ';':
	case '.':
	case '!':
	case '?':
	case '"':
	case '(':
	case ')':
	case '{':
	case '}':
		ch = ch;
		break;
	}
}
