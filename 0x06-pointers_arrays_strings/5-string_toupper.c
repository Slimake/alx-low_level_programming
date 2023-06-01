#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters
 * of a string to uppercase
 * @str: pointer to char
 * Return: pointer to char
 */

char *string_toupper(char *str)
{
	int i;
	int str_len = 0;

	for (i = 0; str[i] != '\0'; i++)
		str_len++;

	for (i = 0; i <= str_len; i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') && (str[i] != '\0'))
			continue;
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else
			str[i] = str[i];
	}

	return (str);
}
