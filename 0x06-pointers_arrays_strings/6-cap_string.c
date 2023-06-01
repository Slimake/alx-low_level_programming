#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to char
 * Return: pointer to char
 */

char *cap_string(char *str)
{
	int i;
	int j;
	int str_len = 0;
	int pun_len = 0;
	char pun_marks[] = {' ', '\t', '\n', ',', ';', \
		'.', '!', '?', '"', '(', ')', '{','}'};

	for (i = 0; str[i] != '\0'; i++)
		str_len++;

	for (i = 0; pun_marks[i] != '\0'; i++)
		pun_len++;

	for (i = 0; i < str_len; i++)
	{
		switch (str[i])
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
			str[i] = str[i];
			continue;
		}

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
