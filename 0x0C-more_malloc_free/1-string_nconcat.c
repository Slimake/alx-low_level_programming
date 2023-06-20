#include <stdlib.h>

int get_len(char *s);

/**
 * string_nconcat - concatenates two strings
 * @s1: the destination memory address
 * @s2: the source memory address
 * @n: number of bytes from src
 * Return: the newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	int j;
	int num;
	int width;
	char *str;

	num = n;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (num >= get_len(s2))
		num = get_len(s2);

	/* length of both s1 and s2 */
	width = get_len(s1) + num + 1;

	/* allocate memory */
	str = malloc(sizeof(char) * width);

	/* check if memory allocation was successful */
	if (str == NULL)
		return (NULL);

	/* concat s1 to str */
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	/* concat s2 to str */
	j = 0;
	while (j < num)
	{
		str[i + j] = s2[j];
		j++;
	}

	/* add the null byte to the end of the string */
	str[i + j] = '\0';
	return (str);
}

/**
 * get_len - get the length of the string
 * @s: the memory address
 * Return: the length of the memory address
 */

int get_len(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

